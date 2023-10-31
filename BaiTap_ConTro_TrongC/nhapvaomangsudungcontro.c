#include<stdio.h>

void Nhapvao(int *mang , int *sophantu)
{
    printf("Nhap so phan tu:");
    scanf("%d", sophantu);
    for (int i = 0; i < *sophantu; i++)
    {
        printf("Mang[%d]= ", i);
        scanf("%d",&mang[i]);
    } 
}

void InMang(int *mang , int sophantu)
{
    printf("in ra mang : \n");
    for (int i = 0; i < sophantu; i++)
    {
        printf("Mang[%d]=%d\n", i , mang[i]);
    } 
}


int tinhtong(int *mang , int sophantu)
{
    int sum = 0 ; 
    for ( int i = 0 ; i < sophantu ; i++)
    {
        sum = sum + mang[i] ;
    }
    return sum ; 
}

/* int daonguocmang (int *mang , int sophantu)
{
    for ( int i = 0 ; i < sophantu/2 ; i++)
    {
        int  temp =  mang[i] ;
        mang[i] =  mang[sophantu-i-1];
        mang[sophantu-i-1] = temp ;
    }
} */

void hoandoivitri(int  *x , int *y)
{
            int z = *x  ;
            *x = *y ;
            *y = z  ;
}

void SapXepGiamDan(int *mang, int sophantu)
{
    for ( int i = 0 ; i < sophantu ; i++)
    {
        for ( int j = i+1 ; j < sophantu ; j++)
        {
            if (mang[i] < mang[j])
            {
                hoandoivitri(&mang[i],&mang[j]);
            }
        }
    }
}


void SapXepTangDan(int *mang, int sophantu)
{
    for ( int i = 0 ; i < sophantu ; i++)
    {
        for ( int j = i+1 ; j < sophantu ; j++)
        { 
            if(mang[i] > mang[j])
            {
                hoandoivitri(&mang[i],&mang[j]);
            }
        }
    }
}

void DaoNguocMang(int *mang , int sophantu)
{
    for ( int i = 0 ; i < sophantu/2 ; i++)
    {
            int temp = mang[i];
            mang[i] = mang[sophantu-i-1];
            mang[sophantu-i-1]=temp ;
    }
}

int main()
{
    int mang[50];
    int sophantu , res ; 
    Nhapvao(mang,&sophantu);
    res = tinhtong(mang,sophantu);
    printf("tong so phan tu trong mang la : %d\n" , res) ; 
    DaoNguocMang(mang,sophantu);
    SapXepTangDan(mang,sophantu);
    InMang(mang,sophantu);
    return 0 ; 
}