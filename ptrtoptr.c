#include<stdio.h>
int main(){
    int i=5;
    int *j;
    int **k;
    j=&i;
    k=&j;
    printf("%d",**k);
    return 0;
}