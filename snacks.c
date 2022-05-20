// Author : Fares Ibrahim
// Institution : University of Soth Florida
// Program Description: Maggie is planning for a trip for her and her friends. The group decided to purchase snacks together and split the cost as in:
//1. Energy bars - $3.99 /box,
//2. Candy bars - $2.39 /box,
//3. Chips - $4.79 /bag,
//4. Pretzels - $2.99/bag,
//5. Popcorns - $3.50 /bag
//6. Energy drinks - $4.99/half dozen
#include <stdio.h>

int main()
{
     printf("Please select from the list: \n 1. Energy bars - $3.99 /box, \n 2. Candy bars - $2.39 /box, \n 3. Chips - $4.79 /bag,\n 4. Pretzels - $2.99/bag, \n 5. Popcorns - $3.50 /bag, \n 6. Energy drinks - $4.99/half dozen \n");
    int choice;
    int boxes;
    int bags;
    int multiples;
    float total = 0;
    
    printf("Input any number to start the calculator: ");
    scanf("%d", &choice);
    while (choice!=0){
    printf("Enter selection: ");
    scanf("%d", &choice);
    if (choice > 6 || choice < 0 ){
        printf("Invalid \n");
        
    }
      switch(choice)
    {
        case 1:
        
           printf("Enter number of boxes: ");
           scanf("%d",&boxes);
           total += boxes * 3.99;
           break;
        case 2:
          
           printf("Enter number of boxes: ");
           scanf("%d",&boxes);
           total += boxes * 2.39;
           break;
        case 3:
          
           printf("Enter number of bags: ");
           scanf("%d",&bags);
           total+= bags * 4.79;
           break;
        case 4:
          
           printf("Enter number of bags: ");
           scanf("%d",&bags);
           total += bags * 2.99;
           break;
        case 5:
     
           printf("Enter number of bags: ");
           scanf("%d",&bags);
           total += bags * 3.50;
           break;
        case 6:
      
           printf("Enter number of drinks as multiples of six: ");
           scanf("%d",&multiples);
           total += (multiples/6) * 4.99;
           break;
           
           
    }
    }
     printf("Cost per person ($): %.2f\n", total/10);
    

    return 0;
}
