#include<stdio.h>
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *ptr;
    ptr=&arr[0];
    printf("%d\n",*ptr);
    int x;
     x=ptr+2;
    printf("%d",*ptr);
    // for(int i=0;i<4;i++)
    // {
    // printf("%d\n",arr[i]);
    // }
    return 0;
}