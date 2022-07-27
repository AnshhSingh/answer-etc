#include<stdio.h>
#include<string.h>
char stringlength(char *a){

int  i=0; 
char *ptr = a;
     while (*ptr!='\0')
    {
        
         //printf("%c", *ptr);
        i++;
        ptr++;
        }
        printf("%d",i);
}
int main(){
    char a[] = {'a','n','s','h','z','\0'};
    //char *pt = a;
    //stringlength(&a[0]);
    // int x = strlen(a);
    // printf("%d",x);
   
stringlength(a);
    return 0;
}