#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,min,tut;
    printf("kac adet sayi olacak");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("sayilarimiz: ");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",dizi[i]);
    }
    printf("\nsiralanmis hali:");
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(dizi[min]>dizi[j])
            {
                min=j;
            }
        }
        if(min != i)
        {
            tut=dizi[i];
            dizi[i]=dizi[min];
            dizi[min]=tut;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%3d",dizi[i]);
    }
    return 0;
}
