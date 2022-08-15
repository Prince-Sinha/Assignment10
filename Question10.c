#include<stdio.h>
void primefactor(int);
int main(){
    int r;
    printf("Enter the number: ");
    scanf("%d",&r);
    primefactor(r);
    
    return 0;

}
void primefactor(int n){
    int i,j,count,k;
    for(i=2;i<=n;i++){
        count=0;
        for(j=2;j<=i;j++){
            if(i%j==0)
               count++;
        }
        if(count==1){
            while(n%i==0){
                printf("%d ",i);
                n/=i;
            }
            }
        }
    }
  
