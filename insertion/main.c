#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,tut;
    printf("kac adet sayi girilecek");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("sayilarimiz\n");
    for(i=0;i<n;i++)
    {
       dizi[i]=rand()%100;
       printf("%3d",dizi[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>=0 && dizi[j-1]>dizi[j])
        {
            tut=dizi[j-1];
            dizi[j-1]=dizi[j];
            dizi[j]=tut;
            j--;
        }
    }
    printf("\nsiralanmis hali\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",dizi[i]);
    }
    return 0;
}
