#include<stdio.h>
namespace N1
{
    int no1=50;
    int no2=60;
}
int no1=100;
int main(void)
{
    int no1=10;
    printf("\n local var no1=%d [%u] ", no1, &no1);
    printf("\n global var no1=%d [%u] ", ::no1, &::no1);

    // namespace_name::variable_name
    printf("\n namespace N1 var N1::no1=%d [%u] ", N1::no1, &N1::no1);
    printf("\n namespace N1 var N1::no2=%d [%u] ", N1::no2, &N1::no2);
    using namespace N1;
    printf("\n namespace N1 var N1::no2=%d [%u] ", no2, &no2);
    printf("\n local var no1=%d [%u] ", no1, &no1);

    return 0;
}