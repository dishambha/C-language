#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1 ; i<=n ; i++){  //rows
        for(int j=1 ; j<=i ; j++){ //column
            printf("%d ",a);
            a ++;
        }
        printf("\n");
    }
    return 0;
}