#include <stdio.h>
int main(void)
{
    long a=10, b=0;
    // test for gcc inline assembly
    asm ("movl %1, %%eax;movl %%eax, %0;"
        :"=r"(b)        /* output */
        :"r"(a)         /* input */
        :"%eax"         /* clobbered register */
    );  
    long c=a+b;    
    printf("%d %d\n", c,b);
    return 0;
}
