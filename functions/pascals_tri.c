#include<stdio.h>
int factorial(int a){
    int fact = 1;
    for(int i=1 ; i<=a ;  i++){
        fact = fact*i;
    }
    return fact;
}
int combi(int n , int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n ;
    printf("Enter the number n : ");
    scanf("%d",&n);
    int nsp =n;
    for(int i=0 ;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int x= combi(i,j);
            printf("%d ",x);
        }
        nsp--;
        printf("\n");
    }
}