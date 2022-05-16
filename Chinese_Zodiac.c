// Author : Fares Ibrahim
// Institution : University of Soth Florida
// Program Description: Program aimed to take birthyear as user input and 
// retreive the Chinese zodiac sign based on a certain formula
#include <stdio.h>

int main()
{
    int year;
    printf("Enter your birth year: ");
    scanf("%d",&year);
    
    int modulo = year % 12;
    if (year <= 0){
        printf("Invalid input");
    }
    
    switch(modulo)
    
        { case 0:
            printf("This is a Monkey");
            break;
            
          case 1:
            printf("This is a Rooster");
            break;
            
          case 2:
            printf("This is a Dog");
            break;
            
          case 3:
            printf("This is a Pig");
            break;
                
          case 4:
            printf("This is a Rat");
            break;
                
          case 5:
            printf("This is an Ox");
            break;
                
          case 6:
            printf("This is Tiger");
            break;
                
          case 7:
            printf("This is a Rabbit");
            break;
                
          case 8:
            printf("This is a Dragon");
            break;
                
          case 9:
            printf("This is a Snake");
            break;
                
          case 10:
            printf("This is a Horse");
            break;
            
          case 11:
            printf("This is a Sheep");
            break;
            
    }
    
       
        

    return 0;
}

