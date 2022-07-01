#include<stdio.h>
namespace N1
{
    int no1=50;
    int no2=60;
    namespace N2
    {
        int no1=999;
        int no3=888;
    }
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

    // namespace_name::namespace_name::variable_name

    printf("\n var from N1::N2::no1=%d [%u]", N1::N2::no1, &N1::N2::no1);
    printf("\n var from N1::N2::no3=%d [%u]", N1::N2::no3, &N1::N2::no3);


    using namespace N1::N2;
    printf("\n namespace N1 var N1::N2::no3=%d [%u] ", no3, &no3);
    printf("\n local var no1=%d [%u] ", no1, &no1);



    return 0;
}