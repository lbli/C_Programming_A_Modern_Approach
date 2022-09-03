/*
 * 编写程序，找到用户输入的一串数中的最大数。程序需要提示用户一个一个地输入数。
 * 当用户输入0或者负数时，程序必须显示出已经输入的最大非负数
 *
 */

#include <stdio.h>
int main(int argc, const char *argv[])
{

    double n;
    double max;
    printf("Enter a number:");

    scanf("%lf",&n);
    max = n;

    while(n>0)
    {
        if ( max < n ) 
        {
            max = n;
        }
        printf("Enter a number:");
        scanf("%lf",&n);
    }
    printf("The largest number entered was:%0.6lf\n",max);
    return 0;
}
