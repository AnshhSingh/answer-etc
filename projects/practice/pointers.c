#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a+*b;
    *a=sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);
printf("%d",a);
    return 0;
}