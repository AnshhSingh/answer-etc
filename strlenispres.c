#include<stdio.h>
int main(){
    int i=0;
    char a[]="ratio";
    //printf("enter the string to check");
    //scanf("%s",a);
    
    char *ptr=a;
    while (*ptr!='\0'){
        if(*ptr=='a'){
            printf("this string contains the character a");
            //break;a
        }
        // else{
        //     printf("it does not have character a");
        //     break;
        //  }
        ptr++;
    }

    return 0;
}
