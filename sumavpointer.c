#include<stdio.h>

void sumavg(int a , int b, int *sum , float *avg) {
*sum=(float)a+b;
*avg=(float)*sum/2;

}
int main(){
    int a=5,b=4,sum;
    float avg;
    sumavg(a,b,&sum,&avg);
    
    printf("sum%d\n avg %f",sum , avg);
    return 0;
}