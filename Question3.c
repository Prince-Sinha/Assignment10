#include<stdio.h>
int checknumber(int);
int main(){
    int r;
    printf("Enter the number: ");
    scanf("%d",&r);
    int b=checknumber(r);
    printf("%d",b);
    return 0;

}
int checknumber(int a){
    if(a&1==1){
        return 0;
    }
    else{
        return 1;
    }
}