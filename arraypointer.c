#include <stdio.h>
#include <stdlib.h>
void printarr(int (*a)[3]);

int main()
{
    int a[3][3],i,j;
    printf("Input elements in the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element-[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
    }
    printarr(a);
}
void printarr(int (*a)[3])
{
    int i=0,j=0;
    int *b;
    while(i<3)
    {b=a;

        for(j=0;j<3;j++)
        {
            printf("%d ",*(b+j));
        }
        printf("\n");
        i++;
        a=a+1;
    }



}
