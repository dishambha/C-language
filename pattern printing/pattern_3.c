#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){  //rows
        for(int j=1 ; j<=n+1-i ; j++){ //column
        /*
        i=1 , j = 1 to 4
        i=2 , j = 1 to 3
        i=3 , j = 1 to 2
        i=4 , j = 1 to 1
        therefore ; 
        i+j = n+1
        j = n+1-i
        */
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}