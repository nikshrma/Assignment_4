#include<stdio.h>
int fib(int n){
    if(n == 0 || n ==1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
    return 0;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
       printf("%d ",fib(i));
    }
    return 0;
}