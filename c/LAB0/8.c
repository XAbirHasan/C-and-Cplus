#include<stdio.h>

int countDigits(int num);

int main(){
  int num,i;

  printf("Enter a number: ");
  scanf("%d",&num);

  i = countDigits(num);

  printf("Total digits is:  %d",i);
  return 0;
}

int countDigits(int num){
    static int i = 0;

    if(num>0){
          i++;
         countDigits(num/10);
    }

    return i;
}
