#include<stdio.h>
//PASS BY REFERENCE
void swap( int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main (){
    int a ,b;
    printf("Enter the first number a : ");
    scanf("%d",&a);
    printf("Enter the second number b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d ,%d\n",a,b);
    return 0;
}