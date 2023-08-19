#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d ",&n);
    //
    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
        } 
        int a=0;
        for(int k=1; k<=nst; k++){
            if(k<=i) 
            {
                a=a+1;
            }
            if(k>i) 
            {
                a=a-1;
            }
            printf("%d ",a);
        }
        nsp--;
        nst+=2;
        printf("\n");
    }
    return 0;
}