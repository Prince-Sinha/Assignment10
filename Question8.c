#include<stdio.h>
int permutation(int,int);
int main(){
    int r,n;
    printf("Enter the value of total item(n): ");
    scanf("%d",&n);
    printf("Enter the value of selected item(r): ");
    scanf("%d",&r);
    int b=permuation(n,r);
    printf("The total permutation is %d",b);

    return 0;

}
int permuation(int n,int r){
    int i,j,fac=1,ar=1;
     for(i=1;i<=r;i++){
        fac=fac*(n-i+1);
     }
     
     return fac;
}