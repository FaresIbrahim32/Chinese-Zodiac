// Author : Fares Ibrahim
// Institution : University of Soth Florida
// Program Description: Program aimed to calculates and prints the charges for parking at the parking garage
// The given credentials were First 30 minutes is free;Each additional 20 minutes $1 and $12 daily max (24 hours)

#include <stdio.h>
#include <math.h>


int main()
{
    int hours;
    int minutes;
    printf("Enter hours parked:");
    scanf("%d",&hours);
    
    if ( hours < 0){
        printf("invalid number of hours");
        return 1;
    }
    printf("Enter minutes parked:");
    scanf("%d",&minutes);
    if (minutes > 60 || minutes < 0){
        printf("invalid number of minutes");
        return 1;
    }
    if (hours < 24 && hours>0){
        int totaL_minutes = (hours *60)+minutes - 30;
        double quotient = totaL_minutes / 20.00;
        int rounding = ceil(quotient);
        //printf("%d",rounding);
       
        if ( rounding > 12) {
            int charge = 12;
            printf("This is %d",charge);
        }if (hours == 0){
            int charge = 1;
            printf("This is %d",charge);
        }if (rounding < 12){
            printf("%d",rounding);
        }
        
       
        
    }
    if (hours == 0){
        int free_minutes= minutes -30;
        if ( free_minutes == 20 || free_minutes < 20){
            int charge = 1;
            printf("This is %d",charge);
        }
        }
        
    int day= 24;
    int two_days = 48;
    int three_days = 72;
    
    if (hours - two_days > 12){
            int charge = 36;
            printf("This is %d",charge);
            return 1;
        }
    
    if (hours > day && hours < two_days){
        hours = hours - 24;
        int totaL_minutes = (hours *60)+minutes - 30;
        double quotient = totaL_minutes / 20.00;
        int rounding = ceil(quotient);
        int charge = 12 + rounding;
        printf("This is %d",charge);
    }
    if (hours > two_days && hours < three_days){
        hours = hours - 48;
        int totaL_minutes = (hours *60)+minutes - 30;
        double quotient = totaL_minutes / 20.00;
        int rounding = ceil(quotient);
        int charge = 24 + rounding;
        printf("This is %d",charge);
    }
    
   
    

    return 0;
}



