#include<stdio.h>
int combination(int,int);
int main(){
    int r,n;
    printf("Enter the value of total item(n): ");
    scanf("%d",&n);
    printf("Enter the value of selected item(r): ");
    scanf("%d",&r);
    int b=combination(n,r);
    printf("The total combination is %d",b);

    return 0;

}
int combination(int n,int r){
    int i,j,fac=1,ar=1;
     for(i=1;i<=r;i++){
        fac=fac*(n-i+1);
     }
     for (i=1;i<=r;i++){
        ar=ar*i;
     }
     
     return fac/ar;
}