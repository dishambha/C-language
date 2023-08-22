#include<stdio.h>
int factorial(int a){
    int fact = 1;
    for(int i=1 ; i<=a ;  i++){
        fact = fact*i;
    }
    return fact;
}
int combi(int n , int r){
    int c =((factorial(n))/(factorial(r)*factorial(n-r)));
    return c;
}
int permu(int n , int r){
    int p = factorial(n)/factorial(r);
    return p;
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int combination = combi(n,r);
    int permutation = permu(n,r);
    printf("Combination is %d\n",combination);
    printf("Permutation is %d\n",permutation);
    return 0;
}