#include<stdio.h>
#include<stdint.h>

typedef union 
{
     uint8_t array[2];
     uint16_t arrray2[2];
} data ;



int main ()
{
    printf("%d", sizeof(data));
    return 0 ; 
}