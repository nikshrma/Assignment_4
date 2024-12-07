// sum of digits
#include<stdio.h>
int digsum(int n){
if(n == 0){
    return 0;
}
else{
    return (n%10 + digsum(n/10));
}
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = digsum(n);
    printf("Sum of digits of %d is %d\n", n, sum);
}