#include <stdio.h>
int main()
{
     int num =0;
     while(num<=100)
     {
        printf("value of variable num is: %d\n", num);
        if (num==20)
        {
            break;
        }
        num++;
     }
     printf("Out of while-loop");
     return 0;
}
