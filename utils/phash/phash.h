/* Generated File, DO NOT EDIT */
/* Perfect hash definitions */
#ifndef STANDARD
#include "standard.h"
#endif /* STANDARD */
#ifndef PHASH
#define PHASH

extern ub1 tab[];
#define PHASHLEN 0x40  /* length of hash mapping table */
#define PHASHNKEYS 116  /* How many keys were hashed */
#define PHASHRANGE 128  /* Range any input might map to */
#define PHASHSALT 0x9e3779b9 /* internal, initialize normal hash */

ub4 phash();

#endif  /* PHASH */
