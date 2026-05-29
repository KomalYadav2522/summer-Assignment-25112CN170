#include<stdio.h>
int main()
{
  //WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
  int num,originalnum,reversednum=0,remainder;
  printf("Enter an integer:");
  scanf("%d",&num);
  originalnum=num;
  while(num!=0){
    remainder=num%10;
    reversednum=reversednum*10+remainder;
    num/=10;
  } 
  if(originalnum==reversednum){
    printf("%d is a palindrome number.\n",originalnum);
  }
  else{
    printf("%d is not a palindrome number.\n",originalnum);
  }
  return 0;
}