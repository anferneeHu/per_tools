#include <stdio.h>
#include <stdlib.h>

double LARGENUM = 12345.6789;
double OFFSET = 1234.567;




void cal_per(int tms)
{
    double c = 0.0;
    int i = 0;
    for (i = 0; i < tms; i++)
    {
        c += LARGENUM * i - i * OFFSET;      
    }
    return ;
}



int main(int argc, char** argv)
{
    if (argc < 3)
    {
        printf("usage t1 count tms\n");
        return -1;
    }

    int count = atoi(argv[1]);
    int tms = atoi(argv[2]);

    printf("count is %d, tms is %d\n",count, tms);

    int i = 0;
    for (i = 0; i < count; i++ )
    {
        cal_per(tms);
    }
    return 0;
}

