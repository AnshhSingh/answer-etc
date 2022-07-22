#include<stdio.h>
int main(){
    int i=1 ,n=55;
    float factorial=1;
    // scanf("%d",&x);
   
    while (i<=n)
    {   
        factorial *=i;
        i++;
    }
    printf("%d",factorial);

    return 0;
}