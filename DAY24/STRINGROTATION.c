#include<stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100],temp[200];
    //Taking Input
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    //First check whether lengths are equal
    if(strlen(str1)!=strlen(str2))
    {
        printf("Strings are not rotation.");
        return 0;
    }
    //Copy first string into temp
    strcpy(temp,str1);
    //Concatenate first string again
    strcat(temp,str1);
    //Check whether second string exist in temp
    if(strstr(temp,str2)!=NULL){
        printf("Strings are rotation of each other.");
    }
    else{
        printf("Strings are not rotation.");
    }
    return 0;

}