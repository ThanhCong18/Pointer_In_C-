#include<stdio.h>
// a + x trong mang 2 chiều <-> địa chỉ phần tử đầu tiên của hàng x trong mảng 2 chiều . // a[x][0]
int main()
{
    int a[4][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {1,-2,3,0,6},
        {1,0,0,9,1},
    };
    int (*ptr)[5];
    ptr = a ;
    printf("%d" , *(*(ptr+2)+3));  // (ptr+2) <-> ptr[2][0] 
}
