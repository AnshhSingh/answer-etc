#include<stdio.h>
int main(){
    int age;
    int vippass =1;
    printf("enter age\n");
    scanf("%d",&age);
    if ((age>=18 && age<=70) || vippass==1)
    {
        printf("you can drive");
     }
     else {
        printf("you can not drive");
      }
    return 0;
}


