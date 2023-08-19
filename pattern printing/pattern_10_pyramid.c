#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    //METHOD 2
    int nsp = n-1;
    int nst = 1;
    for(int i=1 ; i<=n;i++){
        for(int j=1; j<=nsp;j++){
            printf("  ");
        }
        for(int k=1 ; k<=nst;k++){
            printf("%d ",k);
        }
        nsp--;
        nst +=2;
        printf("\n");
    }
    return 0;
}
    //METHOD 1
    // for(int i =1 ; i<=n ; i++){
    //     for(int j=1 ; j<=n-i ; j++){
    //         printf("  ");
    //     }
    //     for(int k=1 ; k<=2*i-1 ; k++){
    //         printf("* ");
    //     }
    //     printf("\n");

