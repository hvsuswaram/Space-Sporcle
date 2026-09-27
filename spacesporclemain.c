
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "spacesporcle.h"

void guessPlanet();
void nameOrder();
void weightQuiz();
void guessType();



int main (void) {
   srand(time(NULL));
   int choice=0;

   printf(CYAN "Welcome to Space Sporcle!" RESET);
   while (choice != 5) {
       printf("\n");
       printf(CYAN "\nPick a game to play!");
       printf(RED "\n1. Guess Planet\n" RESET);
        printf(YELLOW "2. Name the Planets in Order\n" RESET);
        printf(GREEN "3. Weight Calculator/Quiz\n" RESET);
        printf(BLUE "4. Star, Moon, or Galaxy?\n" RESET);
        printf(MAGENTA "5. Exit\n" RESET);
       printf("\n");
       scanf("%d", &choice);
       switch (choice) {
           case 1:
               guessPlanet();
               break;
           case 2:
               nameOrder();
               break;
           case 3:
               weightQuiz();
               break;
           case 4:
               guessType();
               break;
            case 5:
                break;
           default:
               printf(RED "Invalid choice. Please try again.\n" RESET);
               break;
   }
}
    printf(CYAN "Thanks for playing Space Sporcle!\n" RESET);

   return 0;


}
