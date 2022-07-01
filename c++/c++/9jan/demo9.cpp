#include<stdio.h>
#define sq(x) x*x  // command
inline int square(int x);   // request
  int main()
{
    int a=5, b=0;
    b=sq(a);  // b=a*a; b=5*5=25
    printf("a=%d b=%d", a, b);

    printf("\n line no=%d",__LINE__);
    printf("\n file name=%s",__FILE__);
    printf("\n date =%s",__DATE__);
    printf("\n time=%s",__TIME__);

    b=square(a);  // b=return a*a 
    printf("a=%d b=%d", a, b);
    return 0;
}
inline int square(int x)
{
    int temp;
    temp=x*x;
    return temp;
}
/*
Remember, inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. 
Compiler may not perform inlining in such circumstances like:
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is other than void, and the return statement doesn’t exist in function body.
5) If a function contains switch or goto statement.

inline return-type function-name(parameters)
{
    // function code
} */

//inheritance 
// modes and types inheritance
//emp demo
// diamond problem

// upcasting down casting
// object slicing
// virtual fun / pure virtual fun 
//function overriding