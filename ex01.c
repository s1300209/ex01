#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int s1,s2,total;
  char name[50];
  srand(time(NULL));

  printf("What is your name?\n");
  printf(">");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  s1 = rand() % 6 + 1;
  s2 = rand() % 6 + 1;
  printf("Die 1: %d\n",s1);
  printf("Die 2: %d\n",s2);
  total = s1 + s2;
  printf("Total value: %d\n",total);
  if(total > 7){
    printf("%s won!\n",name);
 }
  else printf("%s lost!\n",name);

  return 0;
}
