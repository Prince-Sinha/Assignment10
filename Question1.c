#include<stdio.h>
float area(int);
int main(){
    int r;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    float b=area(r);
    printf("The area of circle is %f",b);
    return 0;

}
float area(int r){
    return 3.14*r*r;
}