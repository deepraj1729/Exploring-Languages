#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct car
{
    int year,price;
    char model[10],comp[10];
};

int main()
{
    struct car *var;
    int i,n;
    printf("Enter number of cars : ");
    scanf("%d",&n);
    var = (struct car*)malloc(n*sizeof(struct car));
    for(i=1;i<=n;i++)
    {
        printf("\nEnter details of car %d: ",i);
        printf("\nYear: ");
        scanf("%d",&var[i].year);
        printf("\nPrice: ");
        scanf("%d",&var[i].price);
        printf("\nEnter Model: ");
        scanf("%s",var[i].model);
        printf("\nEnter Company: ");
        scanf("%s",var[i].comp);


    }

    printf("\n\nCar details: ");
    for(i=1;i<=n;i++)
    {
        printf("\nCar details of car %d: ",i);
        printf("\nYear : %d ",var[i].year);
        printf("\nPrice : %d ",var[i].price);
        printf("\nModel : %s ",var[i].model);
        printf("\nCompany : %s ",var[i].comp);
    }

}