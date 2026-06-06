#include<stdio.h>
int main()
{
    //WRITE A PROGRAM  TO COUNT SET BITS IN A NUMBER
    //BIT Value 1 is called SET BIT
    int n;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        //n%2 gives last binary digit
        if(n%2==1){
            count++;//Increase count as we found a set bit
        }
        n=n/2;//Remove last binary digit
   
    }
    printf("Number of SET BITS=%d\n",count);
    return 0;
}

