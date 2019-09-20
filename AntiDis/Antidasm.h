#pragma once

#define MERGE(x, y) x##y
#define ADASM(call_name, y) __asm jz MERGE(label, y) __asm jnz MERGE(label, y) \
 __asm __emit(0xB8) __asm MERGE(label, y): __asm call call_name

#define ANTIDASM(call_name) ADASM(call_name, __COUNTER__)