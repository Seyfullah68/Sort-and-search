#include <stdio.h>
#include <stdlib.h>

void buble(int *seri,int x)
{
    int i,j,tut;
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-i-1;j++)
        {
            if(seri[j] > seri[j+1])
            {
                tut=seri[j];
                seri[j]=seri[j+1];
                seri[j+1]=tut;
            }
        }
    }
}
int main()
{
    int n,i,ara;
    int ilk,son,orta;
    printf("kac adet sayi uretilecek?\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("dizimiz\n");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",dizi[i]);
    }
    buble(dizi,n);
    printf("\nsiralanmis hali\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",dizi[i]);
    }
    printf("\naranacak sayi nedir\n");
    scanf("%d",&ara);
    ilk=0;
    son=n-1;
    orta=(son+ilk)/2;
    while(ilk<son)
    {
        if(ara>dizi[orta])
        {
            ilk=orta+1;
        }
        else if(dizi[orta]==ara)
        {
            printf("\nbulunduuuu");
            break;
        }
        else
        {
            son=orta-1;
        }
        orta=(son+ilk)/2;
    }
    if(ilk>son)
    {
        printf("\nAradiginiz sayi bulunamadi");
    }

    return 0;
}
