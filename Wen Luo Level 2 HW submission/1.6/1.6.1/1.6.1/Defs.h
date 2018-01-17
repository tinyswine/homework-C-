//avoid multiple inclusion
#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif

#ifndef PRINT1(a)
#define PRINT1(a) printf("%f\n",a)
#endif

#ifndef PRINT2(a,b)
#define PRINT2(a,b) printf("%f %f\n",a,b)
#endif