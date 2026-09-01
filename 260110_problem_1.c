#include<stdio.h>
int main()
{
    int vehiclecode,hour,past_status;
    float base_rate, toll;

    printf("The vehicle codes are:\n");
    printf("    Motor bike: 1\n");
    printf("    Car/SUV: 2\n");
    printf("    Bus/Truck: 3\n");
    printf("Enter your vehicle Code: \n");
    scanf("%i",&vehiclecode);

    if (vehiclecode == 1)
    {
        base_rate = 2;
        printf("You are riding a Motor Bike.\nIt cost %0.2f$.\n",base_rate);
    }
    else if (vehiclecode == 2)
    {
        base_rate = 5;
        printf("You are riding a Car/SUV.\nIt cost %0.2f$.\n",base_rate);
    }
    else if (vehiclecode == 3)
    {
        base_rate = 10;
        printf("You are riding a Bus/Truck.\nIt cost %0.2f$.\n");
    }
    else if (vehiclecode <1 && vehiclecode >3)
    {
        printf("Invalid vehicle code.\n");
        return 1;
    }


    printf("Enter the value of current hour of travel (0-23):");
    scanf("%i", &hour);

    if (hour< 0)
    {
        printf("Invalid hour.\n");
        return 1;
    }
    else if (hour> 23)
    {
        printf("Invalid hour.\n");
        return 1;
    }

    printf("    Local Resident = 1\n    Regular = 0\n");
    printf("Enter the code of past status:");
    scanf("%i",&past_status);

    if (past_status==1)
    {
        printf("You are Local Resident.\n");
    }
    else if (past_status==0)
    {
        printf("You are Regular\n");
    }
    else
    {
        printf("Invalid status\n");
        return 1;
    }

    toll = base_rate;

    if (hour>= 7 && hour <=9)
        {
            toll = toll+(toll*0.2);
            printf("\nSurcharge added successfully.\n");
        }
    if (hour >= 17 && hour >=19)
        {
            toll = toll+(toll*0.2);
            printf("\nSurcharge added successfully.\n");
        }
    if (past_status==1)
        {
            toll = toll-(toll*0.5);
            printf("Resident discount added successfully.\n");
        }

    printf("Final Toll amount is= %0.2f $\n", toll);

    return 0;
}
