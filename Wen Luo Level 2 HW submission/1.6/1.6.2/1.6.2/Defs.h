//avoid multiple inclusion
#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif

//avoid multiple definition
#ifndef PRINT1(a)
#define PRINT1(a) printf("%f\n",a)
#endif

//avoid multiple definition
#ifndef PRINT2(a,b)
#define PRINT2(a,b) printf("%f %f\n",a,b)
#endif

//avoid multiple definition
#ifndef MAX2(x,y)
#define MAX2(x,y) ((x)>(y)?(x):(y))
#endif

//avoid multiple definition
#ifndef MAX3(x,y,z)
#define MAX3(x,y,z) MAX2(MAX2(x,y),z)
#endif