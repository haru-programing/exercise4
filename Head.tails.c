#include<stdio.h>
#include<stdlib.h>

int main() {

  int h=0,t=0;
  int i,r;
  char name[8];

  printf("Who are you?\n");
  scanf("%s",&name);
  printf(">%s\n",name);
  printf("Tossing a coin...\n");

  for(i=0;i<3;i++) {
    printf("Round%d: ",i+1);
    r = rand()%2;
    if(r==0) {
      printf("Tails\n");
      t++;
    } else {
      printf("Heads\n");
      h++;
    }
  }
  printf("Heads:%d,Tails:%d\n",h,t);

  return 0;

}
