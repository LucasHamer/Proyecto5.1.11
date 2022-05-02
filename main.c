#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int i,ternapos=0,ternaneg=0;
    float temp1,temp2,temp3;

    for(i=0;i<6;i++)
    {
        printf("Ingrese las temperaturas de la terna: ");
        scanf("%f",&temp1);
        fflush(stdin);
        printf("Ingrese las temperaturas de la terna: ");
        scanf("%f",&temp2);
        fflush(stdin);
        printf("Ingrese las temperaturas de la terna: ");
        scanf("%f",&temp3);
        fflush(stdin);
        printf("\n");

        if(temp1==0||temp2==0||temp3==0)
        {
            printf("Error\n");
        }
        if(temp1>0&&temp2>0&&temp3>0)
        {
            ternapos++;
        }
        if(temp1<0&&temp2<0&&temp3<0)
        {
            ternaneg++;
        }

    }
        printf("Ternas positivas: %d\n",ternapos);
        printf("Ternas negativas: %d\n",ternaneg);

    return 0;
}
