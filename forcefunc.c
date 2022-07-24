#include<stdio.h>
float force (int m);
int main(){
    int m;
    
    scanf("%d",&m);
    
    printf("%f",force(m));
return 0;}
float force (int m){
float force;
    force=m*9.8;
return force;
}