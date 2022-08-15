#include<stdio.h>
float si(int,int,int);
int main(){
    int r,p,t;
    printf("Enter the Amount: ");
    scanf("%d",&p);
    printf("Enter the Rate: ");
    scanf("%d",&r);
    printf("Enter the Time period: ");
    scanf("%d",&t);
    float b=si(r,t,p);
    printf("The simple interest is %.3f",b);
    return 0;

}
float si(int r,int t,int p){
    return p*r*t/100;
 }