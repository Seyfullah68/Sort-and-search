#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,ara;
    printf("kac adet sayi uretilecek?\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("\nDizimiz\n");
    for(i=0;i<n;i++)
    {
        *(dizi+i)=rand()%100;
        printf("%3d",*(dizi+i));
    }
    printf("\nAranacak sayi nedir?\n");
    scanf("%d",&ara);
    for(i=0;i<n;i++)
    {
        if(dizi[i]==ara)
        {
            printf("bulunduu %d. sirada",i+1);
            exit(1);
        }
    }
    printf("bulunamadiiii");
    return 0;
}
