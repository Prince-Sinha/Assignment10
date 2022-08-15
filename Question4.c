#include<stdio.h>
void firstnaturalnumber(int);
int main(){
    int r;
    printf("Enter the value of n: ");
    scanf("%d",&r);
    firstnaturalnumber(r);
    
    return 0;

}
void firstnaturalnumber(int a){
    int i;
     for(i=1;i<=a;i++){
        printf("%d ",i);
     }
}