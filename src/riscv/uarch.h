#ifndef __UARCH__
#define __UARCH__

#include <stdint.h>
#include "riscv.h"

struct uarch;

char* get_str_uarch(struct cpuInfo* cpu);
void free_uarch_struct(struct uarch* arch);

#endif
