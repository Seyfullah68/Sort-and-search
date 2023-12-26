#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*dizi,i,tut,j;
    printf("kac adet sayi uretilecek\n");
    scanf("%d",&n);
    dizi=(int *)calloc(n,sizeof(int));
    srand(time(0));
    printf("sayilarimiz: ");
    for(i=0;i<n;i++)
    {
        *(dizi+i)=rand()%100;
        printf("%3d",*(dizi+i));
    }
    printf("\nsiralanmis hali:");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                tut=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=tut;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%3d",*(dizi+i));
    }
    free(dizi);
    return 0;
}
