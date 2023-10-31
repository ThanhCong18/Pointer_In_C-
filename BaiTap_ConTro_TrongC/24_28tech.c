#include<stdio.h>

int main()
{
    int a[4][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {1,-2,3,0,6},
        {1,0,0,9,1},
    };
    int *ptr = &a[0][0];
    *(ptr+13) = 28 ;
    ++ptr ; // ptr = &a[0][1] ; 
    printf("%d\n" , *ptr);
    printf("%d\n" , *(*(a+2)+3));
}