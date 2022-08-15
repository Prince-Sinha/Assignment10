#include<stdio.h>
int factorial(int);
int main(){
    int r;
    printf("Enter the value of n: ");
    scanf("%d",&r);
    int b=factorial(r);
    printf("The factorial od %d is %d",r,b);
    
    return 0;

}
int factorial(int a){
    int i,fac=1;
     for(i=1;i<=a;i++){
        fac=fac*i;
     }
     return fac;
}