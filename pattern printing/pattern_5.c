#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){  //rows
    int a=1;
        for(int j=1 ; j<=n+1-i ; j++){ //column
            printf("%d ",a);
            a =a+2;
        }
        printf("\n");
    }
    return 0;
}