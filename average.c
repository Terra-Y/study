#include<stdio.h>

int main() 
{
    int a,b;
    scanf("%d %d", &a, &b);
    double avg = (a+b)/2.0;
    printf("平均数是%f\n", avg);
    return 0;
}