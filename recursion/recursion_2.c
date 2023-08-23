#include<stdio.h>
void num(int n){
    if (n==0) return;
    printf("%d\n",n);
    num(n-1);
}
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    num(n);
}