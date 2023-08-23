#include<stdio.h>
//without extra variable
void print(int n){
    if(n==0) return; 
    print(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    print(n);
}