#include <stdio.h>
#define PI 3.14 


void ChuViDienTich(float *R){
    float s , c ;
    printf("Nhap ban kinh r: ");
    scanf("%f", R);
    c = *R * 2 * PI;
    s = *R*(*R)*PI;
    printf("Chu vi va dien tich cua hinh tron lan luot la %.02f va %.02f", c, s);
}

int main()
{
    float R ; 
    ChuViDienTich(&R);
    return 0;
}