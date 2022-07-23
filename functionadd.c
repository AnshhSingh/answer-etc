#include<stdio.h>
int area(int a);
int main(){
    //int 
    int c, a;
    scanf("%d",&a);
    
     c = area(a);
    
    printf("%d",c);
    return 0;
    

}
int area (int a){
    
    int result;
    result=a*a;
    return result;
}