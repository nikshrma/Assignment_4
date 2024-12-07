//tower of hanoi problem
#include<stdio.h>
void TOH(int n, char A , char B , char C){
    if(n == 1){
        printf("Move disk 1 from %c to %c\n", A, C);
        return;
    }
    //move n-1 disks from A to B using C as an auxiliary
    TOH(n-1, A, C, B);
    //move the nth disk from A to C
    printf("Move disk %d from %c to %c\n", n, A, C);
    //move n-1 disks from B to C using A as an auxiliary
    TOH(n-1, B, A, C);
}
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C');
    return 0;
}