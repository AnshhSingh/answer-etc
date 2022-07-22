#include<stdio.h>
int main(){
    int marks;
    printf("enter grade\n");
    scanf("%d",&marks);
    if (marks>=90)
    {
        printf("a grade");
    }
    else if (marks>=80)
    {
        printf("b grade");
    }
    else if (marks>=70)
    {
        printf("grade c");
    }
    else if (marks>=60)
    {
        printf("grade d");
    }
    else
    {
      printf("d grade");
    }
    
    
    
    
    
    return 0;
}