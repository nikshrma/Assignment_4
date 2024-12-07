//swapping without using a temp variable as the other approach has been covered
#include<stdio.h>
void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    printf("From swap function- After swapping: a = %d, b = %d\n", a, b);
}
int main(){
    int a , b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(a,b);
    printf("From main function -After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
//notice how the values of a and b are not swapped in the main function
//this is because the values of a and b are passed by value and not by reference
//the values of a and b are copied to the function swap and the values of a and b in the main function remain the same