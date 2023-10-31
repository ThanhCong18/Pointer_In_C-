#include<stdio.h> 

void NhapMang(int mang[], int *sophantu)
{
    printf("Nhap so phan tu:");
    scanf("%d", sophantu);
    for(int i = 0 ; i <*sophantu ; i++)
    {
        printf("Mang[%d] = ",i);
        scanf("%d", &mang[i]);
    }
}



void InMang(int mang[], int sophantu)
{
    printf("In ra mang :\n");
    for ( int i = 0 ; i < sophantu ; i++)
    {
         printf("Mang[%d] = %d\n",i,mang[i]);
    }
}


void Chiacho3khongchiacho5(int mang[], int sophantu)
{
    int sum = 0 ; 
    for( int i = 0 ; i < sophantu ; i++)
    {
        if((mang[i]%3==0) && (mang[i]%5!=0))
        {
             sum+=mang[i];
        }
    }
    printf("tong so chia het cho 3 va khong chia het cho 5 la : %d\n", sum);
}


void khongchiacho5(int mang[], int sophantu)
{
    int sum1 = 0 ;
    for( int i = 0 ; i < sophantu ; i++)
    {
        if ( mang[i]%5!=0 )
        {
             sum1+=mang[i];
        }
    }
    printf("tong so  khong chia het cho 5 la : %d", sum1);
}


int main ()
{
    int Mang[100] , sophantu ;
    NhapMang(Mang,&sophantu);
    Chiacho3khongchiacho5(Mang,sophantu);
    khongchiacho5(Mang,sophantu);
    //InMang(Mang,sophantu);
    return 0 ; 
}