#include<stdio.h>
int main()
{
    int vehicle, zone, hour;
    float duration,charge,surcharge;

    printf("The vehicle types are:\n");
    printf("Electric vehicle:1\nSedan/SUV:2\nHeavy van:3\n");
    printf("Enter your vehicle type:\n");
    scanf("%i", &vehicle);

    if(vehicle<1 || vehicle>3)
    {
        printf("Invalid number.\n");
        return 1;
    }

    printf("\nThe zone codes are:\n");
    printf("Commercial/Downtown:1\nResidential:2\nAirport:3\n");
    printf("Enter your zone code:\n");
    scanf("%i", &zone);

    if(zone<1 || zone>3)
    {
        printf("Invalid number.\n");
        return 1;
    }

    printf("\nEnter the value of current hour of your entry (0-23):\n");
    scanf("%i", &hour);

    if (hour<0 || hour>23)
    {
        printf("This is invalid hour.\n");
        return 1;
    }
    else
    {
        printf("Current hour is %i\n",hour);
    }

    printf("\nEnter the value of total duration in hour:\n");
    scanf("%f", &duration);

    if (duration<=0 || duration>24)
    {
        printf("This is invalid hour.\n");
        return 1;
    }
    else
    {
        printf("Your total staying hour is %0.2f\n",duration);
    }

    switch(zone)
    {
    case 1:
        {
        if(vehicle==1)
        {
            charge = 2*duration;
        }
        if(vehicle==2)
        {
            charge = 5*duration;
        }
        if(vehicle==3)
        {
            charge = 10*duration;
        }
        }
        break;
    case 2:
        {
        if(vehicle==1)
        {
            charge = 1*duration;
        }
        if(vehicle==2)
        {
            charge = 3*duration;
        }
        if(vehicle==3)
            {
                printf("Entry denied\n");
                return 1;
            }
        }
        break;
    case 3:
        {
        if(vehicle==1)
        {
            charge = 4*duration;
        }
        if(vehicle==2)
        {
            charge = 6*duration;
        }
        if(vehicle==3)
        {
            charge = 8*duration;
        }
        }
        break;
    }
    if (duration>=3 && duration<=5)
    {
        charge = charge+(charge*0.50);
        printf("Rate has been increased 50%\n");
    }
    else if(duration>5)
    {
        charge = duration*15;
        printf("You are charged on the penalty rate.\n");
    }
    if(hour>=7 && hour<=9)
    {
        surcharge = 8;
        charge = charge+surcharge;
        printf("surcharge added to your bill\n");
    }
    else if(hour>=16 && hour<=19)
    {
        surcharge = 8;
        charge = charge+surcharge;
        printf("\n8$ surcharge added to your bill\n");
    }

    if(vehicle==1)
    {
        charge = charge-(charge*0.20);
        printf("You have received a 20 parcent discount for having EV\n");
        if(charge>25)
        {
            printf("Maximum daily capacity reached.\n");
            return 1;
        }
    }

    printf("\nTotal bill is %0.2f$",charge);

}
