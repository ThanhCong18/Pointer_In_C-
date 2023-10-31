#include<stdio.h>

int a = 100 ; 
char c = 'A' ;
void  *ptr ;

void tong ( int a , int b ){
    printf("tong 2 so a va b la : %d + %d = %d ", a , b , a+b);
}
void hieu ( int a , int b ){
    printf("tong 2 so a va b la : %d - %d = %d ", a , b , a-b);
}
int main()
{
    void(*toanhoc)(int,int);
    toanhoc = &hieu;
    toanhoc(3,4);
    return 0 ; 
}