#include<stdio.h>
int containgivendigit(int,int);
int main(){
    int n,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the digit: ");
    scanf("%d",&r);
    int c=containgivendigit(n,r);
    if(c>=1)
    printf("The given number contain the digit");
    else
    printf("The given number not contain the digit");
    return 0;

}
int containgivendigit(int n,int r){
    int i,b,count=0;
     for(i=1;n>0;i++){
       b=n%10;
       if(b==r){
          count++;
          break;
        }
       
       n/=10;
     }
     
     return count;
}