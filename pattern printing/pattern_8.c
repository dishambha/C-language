#include<stdio.h>
int main(){
    int rows , column;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of column: ");
    scanf("%d", &column);
    for(int i=1; i<=rows ; i++){
        for(int j =1 ; j<=column ; j++){
            if(i==1 || i==rows) printf("* ");
            else if(j==1 || j==column) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}