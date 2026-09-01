#include<stdio.h>
int main()
{
    float weight,base_rate,express_add, day_add,weight_charge,shipping_charge;
    int zone,shipping;

    printf("Enter the weight of your product:\n");
    scanf("%f",&weight);
    printf("The weight of your product is %f kg.\n\n", weight);

    if(weight>30)
    {
        printf("Package is rejected for over weight.\n");
        return 1;
    }


    printf("Destination Zone codes are:\n");
    printf("Domestic:1\nRegional:2\nInternational:3\n");
    printf("Enter your zone code:\n");
    scanf("%i",&zone);

    if(zone<1 || zone>3)
    {
        printf("Invalid value\n");
        return 1;
    }


    printf("\nShipping service codes are:\n");
    printf("Standard:1\nExpress:2\nSame-day:3\n");
    printf("Enter your service code:\n");
    scanf("%i",&shipping);

    if(shipping<1 || shipping>3)
    {
        printf("Invalid value\n");
        return 1;
    }

    switch(zone)
    {
    case 1:
        base_rate = 5;
        {
        if(shipping==1)
            {
                shipping_charge = 0;
            }
        else if(shipping==2)
            {
                shipping_charge = 10;
            }
        else if(shipping==3)
            shipping_charge = 25;
        }
        break;

    case 2:
        base_rate =15;
        {
        if(shipping==1)
            {
                shipping_charge = 0;
            }
        else if(shipping==2)
            {
                shipping_charge = 20;
            }
        else if(shipping==3)
            {
                printf("Same day is unavailable\n");
                return 1;
            }
        }
        break;

    case 3:
        base_rate = 40;
        {
        if(shipping==1)
        {
            shipping_charge = 0;
        }
        else if(shipping==2)
        {
            shipping_charge = 35;
        }
        else if(shipping==3)
        {
            printf("Same day is unavailable\n");
            return 1;
        }
        }
        break;

    }
    if (weight<=2)
    {
        printf("No extra fee.\n");
    }
    else if(weight>2 && weight<=10)
    {
        weight_charge = (weight-2)*2.00;
        printf("2$ extra surcharge added for per kg.\n");
    }
    else if(weight>10)
    {
        weight_charge = 16.00+(weight-10)*5.00;
        printf("16$ extra surcharge added for first 8 kg.\n5$ for per kg over 10 kg weight.\n");
    }
    base_rate = base_rate;
    float total = base_rate+weight_charge+shipping_charge;

    printf("\nBase rate is %0.2f $",base_rate);
    printf("\nTotal cost is %0.2f $\n",total);
}
