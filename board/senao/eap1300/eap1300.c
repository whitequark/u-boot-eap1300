#include <asm/io.h>

#define GCNT_PSHOLD	0x004AB000

void reset_cpu(ulong addr)
{
	writel(0, GCNT_PSHOLD);
	while (1);
}
