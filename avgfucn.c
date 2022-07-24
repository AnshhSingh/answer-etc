#include<stdio.h>
float average(int a,int b, int c);
int main(){
    int a , b ,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("%f",average(a,b,c));
    return 0;
}
float average(int a,int b, int c)
{
    float avg;
    avg=(float)(a+b+c)/3;
    return avg;
}