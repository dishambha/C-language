#include<stdio.h>
//pass by value.
void odd_even(int x){ //parameter/argument.
    if(x%2==0) printf("%d is even",x);
    else printf("%d is odd",x);
    return;  //finish ya khatam
    //or give the value to the calling function
}
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    odd_even(a);  //no need to type printf cause function is doing that.
    return 0;
}