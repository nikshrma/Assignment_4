//prime numbers till n
#include<stdio.h>
void prime(int n){
    int i=2, j;
    while(n>=i){
        for( j = 2 ; j < i; j++){
            if(i%j == 0){
                break;
            }
        }
        if(j==i){
            printf("%d is a prime number\n", i);
        }
     i++;
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
