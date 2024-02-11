#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;
  char ans1[] = "Canberra";
  char userans1[100];
  printf("1)What is the capital of Australia?\n");
  printf("Enter your answer: ");
  scanf("%s", &userans1);

  if(strcmp(userans1, ans1)== 0)
  {
      printf("Correct Answer\n");
      i =i+30;
      printf("You have scored %d points\n", i);
  }
  else{
    printf("Wrong Answer\n");
    printf("You have scored %d points\n", i);
  }

  char ans2[] = "4";
  char userans2[100];
  printf("2)What is 2 +2 ?\n");
  printf("Enter your answer: ");
  scanf("%s", &userans2);

  if(strcmp(userans2, ans2)== 0)
  {
      printf("Correct Answer\n");
      i =i+30;
      printf("You have scored %d points\n", i);
  }
  else{
    printf("Wrong Answer\n");
    printf("You have scored %d points\n", i);
  }
  char ans3[] = "Islamabad";
  char userans3[100];
  printf("3)What is the capital of pakistan?\n");
  printf("Enter your answer: ");
  scanf("%s", &userans3);

  if(strcmp(userans3, ans3)== 0)
  {
      printf("Correct Answer\n");
      i =i+30;
      printf("You have scored %d points\n", i);
  }
  else{
    printf("Wrong Answer\n");
    printf("You have scored %d points\n", i);
  }
  if(i>=60){
    printf("Congratulations! you've successfully passed the quiz.Excellent job!");
  }
  else{
    printf("Thank you for attempting the quiz.While you didn't score as high as you might have hoped, remember that every attempt is an oppurtunity to learn and improve.Better luck next time");
  }
    return 0;
}
