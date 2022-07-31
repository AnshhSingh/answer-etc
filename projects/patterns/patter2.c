#include<stdio.h>
int main(){
    
    for(int row=4;row>=1;row--)
    {
        for (int j=1;j<=row;j++)
        {
            printf("*");             
        }
        printf("\n");
    }
    return 0;
}
