#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "spacesporcle.h"


void guessPlanet() {
   int randNum;
   int attempts=0;
   int correct=0;
   float score=0.0;
   int x = 1;
   char ans;

   printf("Welcome to the Planet Guessing Game!\n");

   while (x != -1) {
       randNum = rand() % 8;

       switch (randNum) {
           case 0:
               printf("Hint 1: It has the largest day-night temperature difference in the Solar System.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'A' || ans == 'a') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: It has no moons or atmosphere.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'A' || ans == 'a') {
                       printf(GREEN "Correct!\n" RESET);
                        correct++;
                       break;
                   }
                   else {
                      printf("Incorrect.\nHint 3: It's the closest planet to the sun.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                      scanf(" %c", &ans);
                       if (ans == 'A' || ans == 'a') {
                           printf(GREEN "Correct!\n" RESET);
                            correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Mercury.\n" RESET);
                           break;
                       }
                   }
               }

           case 1:
               printf("Hint 1: It rotates in the opposite direction of most other planets.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'B' || ans == 'b') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: It is hidden under thick clouds of sulfuric acid.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'B' || ans == 'b') {
                       printf(GREEN "Correct!\n" RESET);
                       correct++;
                       break;
                   }
                   else {
                      printf("Incorrect.\nHint 3: It is the hottest planet.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                      scanf(" %c", &ans);
                       if (ans == 'B' || ans == 'b') {
                           printf(GREEN "Correct!\n" RESET);
                           correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Venus.\n" RESET);
                           break;
                       }
                   }
               }

           case 2:
               printf("Hint 1: About 71 percent of its surface is covered by water.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'C' || ans == 'c') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: It is protected by a magnetic field called the magnetosphere.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'C' || ans == 'c') {
                       printf(GREEN "Correct!\n" RESET);
                       correct++;
                       break;
                   }
                   else {
                      printf("Incorrect.\nHint 3: It is the only planet known to support life.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                      scanf(" %c", &ans);
                       if (ans == 'C' || ans == 'c') {
                           printf(GREEN "Correct!\n" RESET);
                           correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Earth.\n" RESET);
                           break;
                       }
                   }
               }
          
           case 3:
               printf("Hint 1: Its two moons are thought to be captured asteroids.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'D' || ans == 'd') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: Its surface contains iron oxide, giving it a reddish color.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'D' || ans == 'd') {
                       printf(GREEN "Correct!\n" RESET);
                       correct++;
                       break;
                   }
                   else {
                      printf("Incorrect.\nHint 3: It’s called the Red Planet.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                      scanf(" %c", &ans);
                       if (ans == 'D' || ans == 'd') {
                           printf(GREEN "Correct!\n" RESET);
                           correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Mars.\n" RESET);
                           break;
                       }
                   }
               }

           case 4:
               printf("Hint 1: Its magnetic field is 20,000 times stronger than Earth's.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'E' || ans == 'e') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: It has at least 90 moons, including Ganymede.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'E' || ans == 'e') {
                       printf(GREEN "Correct!\n" RESET);
                       correct++;
                       break;
                   }
                   else {
                       printf("Incorrect.\nHint 3: It’s the largest planet in the Solar System.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                       scanf(" %c", &ans);
                       if (ans == 'E' || ans == 'e') {
                           printf(GREEN "Correct!\n" RESET);
                           correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Jupiter.\n" RESET);
                           break;
                       }
                   }
               }

           case 5:
               printf("Hint 1: It’s less dense than water.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'F' || ans == 'f') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: It has over 80 moons, including Titan.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'F' || ans == 'f') {
                       printf(GREEN "Correct!\n" RESET);
                       correct++;
                       break;
                   }
                   else {
                       printf("Incorrect.\nHint 3: It’s known for its beautiful rings.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                       scanf(" %c", &ans);
                       if (ans == 'F' || ans == 'f') {
                           printf(GREEN "Correct!\n" RESET);
                           correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Saturn.\n" RESET);
                           break;
                       }
                   }
               }

           case 6:
               printf("Hint 1: It was the first planet discovered with a telescope.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'G' || ans == 'g') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: It has a tilted axis of about 98 degrees.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'G' || ans == 'g') {
                       printf(GREEN "Correct!\n" RESET);
                       correct++;
                       break;
                   }
                   else {
                       printf("Incorrect.\nHint 3: It’s a blue-green planet that spins on its side.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                       scanf(" %c", &ans);
                       if (ans == 'G' || ans == 'g') {
                           printf(GREEN "Correct!\n" RESET);
                           correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Uranus.\n" RESET);
                           break;
                       }
                   }
               }

           case 7:
               printf("Hint 1: It was discovered mathematically before being seen through a telescope.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
               scanf(" %c", &ans);
               if (ans == 'H' || ans == 'h') {
                   printf(GREEN "Correct!\n" RESET);
                   correct++;
                   break;
               }
               else {
                   printf("Incorrect.\nHint 2: It has a moon named Triton that orbits backward.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                   scanf(" %c", &ans);
                   if (ans == 'H' || ans == 'h') {
                       printf(GREEN "Correct!\n" RESET);
                       correct++;
                       break;
                   }
                   else {
                       printf("Incorrect.\nHint 3: It’s the farthest known planet from the Sun.\nA. Mercury B. Venus C. Earth D. Mars E. Jupiter F. Saturn G. Uranus H. Neptune\n");
                       scanf(" %c", &ans);
                       if (ans == 'H' || ans == 'h') {
                           printf(GREEN "Correct!\n" RESET);
                           correct++;
                           break;
                       }
                       else {
                           printf(RED "Incorrect. The correct answer is: Neptune.\n" RESET);
                           break;
                       }
                   }
               }
       }
       attempts++;
       printf("\nType -1 to exit or any other number to play again: ");
       scanf("%d", &x);
   }


   score =  100 * ((float)correct/attempts);
   if (score>=90.0) {
       printf("Wow, great job! %d/%d --> score: %.2f. You really know your planets!\n", correct, attempts, score);
   }
   else if (score>=80.0) {
       printf("%d/%d --> score: %.2f. You're pretty good.\n", correct, attempts, score);
   }
   else if (score>=70.0) {
       printf("%d/%d --> score: %.2f. Solid performance.\n", correct, attempts, score);
   }
   else if (score >=60.0) {
       printf("%d/%d --> score: %.2f. Good effort.\n", correct, attempts, score);
   }
   else if (score >=50.0) {
       printf("%d/%d --> score: %.2f. You were hit or miss.\n", correct, attempts, score);
   }
   else {
       printf("%d/%d --> score: %.2f. Just don't call yourself a space expert.\n", correct, attempts, score);
   }
}

void nameOrder() {
   char planet[20];
   int correct=1;
   printf("You must name the planets of the solar system in order. Easy, right?\n");
   while (correct==1) {
       printf(" 1. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Mercury") != 0 && strcmp(planet, "mercury") !=0 ) {
           correct=-1;
           break;
       }
       printf(" 2. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Venus") != 0 && strcmp(planet, "venus") !=0 ) {
           correct=-1;
           break;
       }
       printf(" 3. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Earth") != 0 && strcmp(planet, "earth") !=0 ) {
           correct=-1;
           break;
       }
       printf(" 4. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Mars") != 0 && strcmp(planet, "mars") !=0 ) {
           correct=-1;
           break;
       }
       printf(" 5. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Jupiter") != 0 && strcmp(planet, "jupiter") !=0 ) {
           correct=-1;
           break;
       }
       printf(" 6. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Saturn") != 0 && strcmp(planet, "saturn") !=0 ) {
           correct=-1;
           break;
       }
       printf(" 7. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Uranus") != 0 && strcmp(planet, "uranus") !=0 ) {
           correct=-1;
           break;
       }
       printf(" 8. ");
       scanf("%19s", planet);
       if (strcmp(planet, "Neptune") != 0 && strcmp(planet, "neptune") !=0 ) {
           correct=-1;
           break;
       }
   break;
}
   if (correct==1) {
       printf(GREEN "Perfect!" RESET);
   }
   else {
       printf(YELLOW "Not quite. Better luck next time!" RESET);
   }
}

void weightQuiz() {
   float weight, mercuryWeight, venusWeight, earthWeight, marsWeight, jupiterWeight, saturnWeight, uranusWeight, neptuneWeight;
   int randNum = 0;
   int choice = 0;
   int count = 0;
   int correct=0;
   printf("Enter your weight (in lbs): ");
   scanf("%f", &weight);
   mercuryWeight = weight * 0.38;
   venusWeight = weight * 0.91;
   earthWeight = weight;
   marsWeight = weight * 0.38;
   jupiterWeight = weight * 2.34;
   saturnWeight = weight * 1.06;
   uranusWeight = weight * 0.92;
   neptuneWeight = weight * 1.19;
   float weights[8] = {mercuryWeight, venusWeight, earthWeight, marsWeight, jupiterWeight, saturnWeight, uranusWeight, neptuneWeight};
   printf("We've just calculated what your weight would be on each new planet. It's time to guess which one's which!\n");
   while (count < 8) {
       randNum = rand() % 8;
       while (weights[randNum] == 0.0) {
           randNum = rand() % 8;
       }
       printf("\nYour weight: %.2f\n", weights[randNum]);
       printf("Guess the planet: \n1. Mercury 2. Venus 3. Earth 4. Mars 5. Jupiter 6. Saturn 7. Uranus 8. Neptune\n");
       scanf("%d", &choice);
       if (weights[choice-1] == weights[randNum]) {
           printf(GREEN "Correct!\n" RESET);
           correct++;
       }
       else {
           printf(RED "Incorrect!\n" RESET);
       }
       weights[randNum] = 0.0;
       count++;
   }
   printf("You got %d out of %d right. ", correct, count);
}

void guessType() {
    const char *names[] = {"Andromeda", "Europa", "Sirius", "Titan", "Milky Way", "Betelgeuse", "Callisto", "Sombrero", "Altair", "Ganymede"};
    const char *answers[] = {"galaxy", "moon", "star", "moon", "galaxy","star", "moon", "galaxy", "star", "moon"};

    int correct=0;
    int total = 10;
    char guess[20];

    printf("Type your guess (star/moon/galaxy).\n");

    for (int i = 0; i < total; i++) {
        printf("%s — is it a star, moon, or galaxy? ", names[i]);
        scanf("%s", guess);

        toLowerCase(guess);

        if (strcmp(guess, answers[i]) == 0 ) {
            printf(GREEN "Correct!\n" RESET);
            correct++;
        } 
        else {
            printf(RED "Incorrect. " RESET); 
            printf("%s is a %s.\n", names[i], answers[i]);
        }
    }

    printf("You got %d out of %d correct.\n", correct, total);

    if (correct == total)
        printf(GREEN "Perfect! You're a space expert!\n" RESET);
    else if (correct >= 5)
        printf(MAGENTA "Nice work. You know outer space well.\n" RESET);
    else
        printf(RED "Study up and try again!\n" RESET);
}

void toLowerCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
}
