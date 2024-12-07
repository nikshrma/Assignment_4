// is prime
#include<stdio.h>
void isprime(int a){
    int i;
    for(i = 2; i < a; i++){
        if(a%i == 0){
            printf("%d is not a prime number\n", a);
            return;
        }
    }
    if(i == a){
        printf("%d is a prime number\n", a);
    }
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    isprime(a);
    return 0;
}