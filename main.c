#include <stdio.h>
#include <stdlib.h>
int main(){
  int score = 0;
  char questions[3][100] = {"1)What is the capital of Australia?\n",
                            "2)What is 2 + 2?\n",
                            "3)What is the capital of Pakistan?\n"};
   char answers[3][100] = {"Canberra",
                           "4",
                           "Islamabad"};
  char useranswer[3][100];
  for (int i =0; i<3; i++){

    printf(questions[i]);
    printf("Enter your Answer: \n");
    scanf("%s", &useranswer[i]);
  if(strcmp(useranswer[i], answers[i])== 0){
      printf("Correct Answer\n");
      score =score+30;
      printf("You have scored %d points\n", score);
  }else{
    printf("Wrong Answer\n");
    printf("You have scored %d points\n", score);  }
  }
   if(score>=60){
    printf("Congratulations! you've successfully passed the quiz.Excellent job!");
  }
  else{
    printf("Thanks for attempting the quiz.While you didn't score as high as you might have hoped, remember that every attempt is an oppurtunity to learn and improve.Better luck next time");
  }
    return 0;
}
