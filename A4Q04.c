//factorial using recursion
#include<stdio.h>
int fact(int n){
    if(n == 0 || n ==1){
        return n;
    }
    else {
    return (n * (fact(n-1)));
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int factorial= fact(n);
    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}