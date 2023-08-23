#include<stdio.h>
//using extra parameter
void print(int a,int n){
    if(a>n) return; 
    printf("%d\n",a);
    print(a+1,n);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    print(1,n);
}