/*
 * On pre-ARMv6 hardware this results in a swp-based implementation,
 * which is the most efficient. For ARMv6+, we emit a pair of exclusive
 * accesses instead.
 */
#ifndef _ASM_MUTEX_H
#define _ASM_MUTEX_H

#include <asm-generic/mutex-xchg.h>
#endif
