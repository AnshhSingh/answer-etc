#include<stdio.h>
int main(){
    int tax, income;
    printf("income");
    scanf("%d",&income);
    if (income>= 1000000)
    {
        tax=(income*30)/100;
        printf("30 prsnt tax:%d",tax);
    }
    else if (income<=1000000 && income>=500000 )
    {
        tax=(income*20)/100;
        printf("20 prsnt tax :%d",tax);
    }
    else if (income<=500000 && income >=250000)
    {
        tax=(income*5)/100;
        printf("5 prsnt tax :%d",tax);
    }
    else {
        printf("notax");
    }
    
     
    return 0;
}