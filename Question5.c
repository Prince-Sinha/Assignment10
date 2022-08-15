#include<stdio.h>
void firstoddnumber(int);
int main(){
    int r;
    printf("Enter the value of n: ");
    scanf("%d",&r);
    firstoddnumber(r);
    
    return 0;

}
void firstoddnumber(int a){
    int i;
     for(i=1;i<=2*a-1;i+=2){
        printf("%d ",i);
     }
}