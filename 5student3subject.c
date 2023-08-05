#include<stdio.h>

int main()
{
    int a[5][3],i,j,total,avg;

    for(i=0;i<=5;i++)
    {
        printf("student=%d",i);

        for(j=0;j<=2;j++)
        {
        printf("enter mark=");
        scanf("%d",&a[i][j]);
        }
    }

    for(j=0;j<=2;j++)
    {
        printf("student=%d",i);

        total=0;
        for(j=0;j<=2;j++)
        {
            printf("marks = %d",a[i][j]);

            total=total+a[i][j];
        }
        avg=total/3;

        printf("%d",total);
        printf("%d",avg);
    }

    


}