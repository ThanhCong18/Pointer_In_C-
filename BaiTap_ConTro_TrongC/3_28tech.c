#include<stdio.h>

void change(int *x){
    printf("%d\n" , x); // x la dia chi .
    *x = 20 ;         // *x la gia tri . 
}

int main()
{
    int n = 100 ; 
    change(&n);
    printf("%d" , n);
}