#include<stdio.h>
#include<math.h>
int main()
{
   int start,end,num; 
   int originalnum,rem,digit;
   long long sum;
   printf("Enter starting number;");
   scanf("%d",&start);
   printf("Enter ending number:");
   scanf("%d",&end);
   printf("Armstrong numbers are:\n");
   //Check every number in the range
   for(num=start;num<=end;num++)
   {
    originalnum=num;
    digit=0;
    sum=0;
    //Count digits
    while(originalnum!=0){
        digit++;
        originalnum/=10;
    }
    //Restore original num
    originalnum=num;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        sum+=(int)pow(rem,digit);
        originalnum/=10;
    }
    //Check Armstrong condition
    if(sum==num){
        printf("%d\n",num);
    }
   }
   return 0;

}
    