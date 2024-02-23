#include <stdio.h>
#include <stdlib.h>
  int Solve(char questions[3][100], char answers[3][100], int score){
   char useranswer[3][100];
   printf("%s", questions);
   printf("Enter your Answer: \n");
   scanf("%s",&useranswer);
   if (strcmp(useranswer, answers)==0){
        score=score+30;
    printf("Correct Answer\n");
    printf("you have scored %d points\n", score);
   } else{
     printf("Wrong Answer\n");
     printf("you have scored %d points\n", score);}
    return score;
        }
 int main(){
int score=0;
  char questions[3][100]={"1)What is the capital of Australia?\n",
                          "2)What is 2 + 2?\n",
                          "3)What is the capital of Pakistan?\n"};
   char answers[3][100]= {"Canberra",
                          "4",
                         "Islamabad"};
                         int numQuestions= sizeof(questions)/
                         sizeof(questions[3]);
   char useranswer[3][100];
   for (int i= 0; i<numQuestions; i++){
   score=Solve(questions[i], answers[i], score);
   }
       if(score>=60){
        printf("Congratulations! you've successfully passed the quiz.Excellent job!");
       }
       else{
        printf("Thanks for attempting the quiz.While you didn't score as high as you might have hoped.");
         }
    return 0;
}


