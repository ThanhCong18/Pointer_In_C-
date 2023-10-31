#include<stdio.h>

int *change(int *x)   // hàm trả về con trỏ ---------> sẽ trả về 1 địa chỉ . 
{
    printf("%d\n" , x);
    *x = 20 ; 
    return x ;
}


int main()
{
    int n = 100 ; 
    int *ptr = &n ;   // ptr = &n ;
    ptr = change(ptr);
    printf("%d %d" , ptr , n);
}