#include<stdio.h>
void display(int *x[3]){
    for (int i=0;i<3;i++){
        printf("%d",x[i]);
        // scanf("%d",&marks[i]);

    }
}
int main(){
    int marks[3];
    for (int i=0;i<3;i++){
        printf("enter the value %d \n",i);
        scanf("%d",&marks[i]);
        
    }
       display(&marks[3]);
    return 0;
}