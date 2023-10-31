#include<stdio.h>
++


int a = 100 ; 



int main()
{
    printf("dia chi cua a la :%p\n" , &a);
    int *ptr = &a ; 
    printf("gia tri cua ptr :%p\n", ptr);
    int **ptr_ptr = &ptr ;
    printf("dia chi cua ptr la :%p\n" , &ptr);
    printf("gia tri cua ptr_ptr la :%p\n" , ptr_ptr); // ptr_ptr = &ptr , *ptr_ptr = &a ; **ptr_ptr = a ; 
    printf("gia tri cua ptr_ptr la :%p\n" , *ptr_ptr);
    printf("gia tri cua ptr_ptr la :%d\n" , **ptr_ptr);
    return 0 ; 
} 