#include<stdio.h>


int main()
{
    char *c ;  // không có vùng nhớ , nên giá trị không lưu trữ được --> gây lỗi thực thi  .
    gets(c);
    printf("%s" , c);
    return 0 ; 
}