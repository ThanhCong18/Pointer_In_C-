#include<stdio.h>
#include<string.h>

int main()
{
    // kien thuc con tro giông nhu mang . 
    char a[] = "28tech.com.vn";
    char *ptr = &a[2];
    char *ptr2 = ptr ;
    *ptr2 = 'T';
    printf("%s" , a+2);
    return 0 ; 
}