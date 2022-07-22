#include<stdio.h>
int main(){
    char ch;
    printf("put the character\n");
    scanf("%c",&ch);

    //asci
    if(ch<=122 && ch>=97){
        printf("lower case");
    }
    else{
        printf("upper case");
    }
    return 0;
}