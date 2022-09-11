// Author ; Fares Ibrahim

// University : University of South Florida


// Contact info : faresibrahim@usf.edu
//  Phone Number:  813 - 362 - 1811


//Program Description: This is a game list of two options, tic tac toe and number guess,written in C

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];     // declaring global variables
const char PLAYER = 'X';
const char COMPUTER = 'O';



void restart_board();   // function callouts
void print_board();
int check_free_spaces();
void player_choice();
void computer_choice();
char check_winner();
void print_winner(char);

int main()
{
   int game;
   printf("Choose a game you'd like to play:\n1. Tic Tac Toe \n2. Number Guess\n");  // asking user for input
   scanf("%d",&game);
   
   
   if(game == 1){                                // if user chooses game 1
   char winner = ' ';
   restart_board();
   while(winner = ' ' && check_free_spaces() != 0){
      
       print_board();
       
       player_choice();
       winner = check_winner();
       if (winner != ' '|| check_free_spaces() == 0){
           break;
       }
       
       computer_choice();
       winner = check_winner();
       if (winner != ' '|| check_free_spaces() == 0){
           break;
       }

   }
   print_board();
   print_winner(winner);
   }
  

    if(game == 2){     // if usesr chooses game 2
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int answer;

   //uses the current time as a seed
   srand(time(0));
   
   //generate a random number between MIN & MAX
   answer = (rand() % MAX) + MIN;

   do{
      printf("Enter a guess: ");
      scanf("%d", &guess);
      if(guess > answer)
      {
         printf("Too high!\n");
      }
      else if(guess < answer)
      {
         printf("Too low!\n");
      }
      else{
         printf("CORRECT!\n");
      }
      
   }while(guess != answer);

   printf("**********************\n");
   printf("answer: %d\n", answer);
   printf("**********************");
    }
    
    if(game == 3){          // input validation 
        printf("Sorry we don't have that game on our console.");
    }
    
    return 0;
    
    

    
}

void restart_board(){     // function to make all spaces in the begining free
    int i,j;
    for(i =0;i<3;i++){
        for (j=0;j<3;j++){
            
            board[i][j] = ' ';
        }
    }
}

void print_board() {         // function for the syntax layout or how the terminal is going to look like
    
    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
    printf("\n");
}

int check_free_spaces() {      // function to check if there are free spaces or not
    
    int free_spaces = 9;
    int i,j;
    
    for (i=0;i<3;i++){
       for (j=0;j<3;j++) {
           
           if (board[i][j]!= ' '){
               
               free_spaces--;
           }
       }
    }
    return free_spaces;
}

void player_choice() {    // function to take player's move which is X as input and then place it in one of the three spaces
    
    int x;
    int y;
    
   do {
    printf("Enter row number (1-3): ");
    scanf("%d",&x);
    x--;
    
    printf("Enter column number (1-3): ");
    scanf("%d",&y);
    y--;
    
    if (board[x][y]!= ' '){
        printf("Invalid Move. Space occupied\n");
    }
    
    else {
        board[x][y] = PLAYER;
        break;
    }
   } while (board[x][y] != ' ');
}

void computer_choice() {   // function to take the computer's random movement and place it in a free space
    
    srand(time(0));
    int x;
    int y;
    
    if (check_free_spaces() > 0){
        
        do {
            
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        
        board[x][y] = COMPUTER;
    }
    else {
        
        print_winner(' ');
    }
}

char check_winner() {    // function that defines winning conditions and cases
    
    int i;
    for (i=0;i<3;i++) {
        
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            
            return board[i][0];
        }
    }
    for (i=0;i<3;i++) {
        
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            
            return board[0][i];
        }
    }
    
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
            
            return board[0][0];
        }
        
    if (board[0][2] == board[1][i] && board[0][2] == board[2][0]) {
            
            return board[0][2];
        }
    return ' ';
    
    
    
}

void print_winner(char winner) {     //function that prints the winning character based on the check winner function
    
    if (winner == PLAYER ){
        printf("YOU WIN !!!!!");
    }
    else if (winner == COMPUTER){
        printf("OH NOOO . YOU LOST. GET 'EM NEXT TIME");
    }
    else {
        
        printf("IT'S A DRAW :(");
    }
}









