#include<stdio.h>
void Pattern(int n);
int main(){
    int n =4;
    Pattern(n);
    return 0;
}

void Pattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    Pattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
