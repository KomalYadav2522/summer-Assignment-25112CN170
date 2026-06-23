#include<stdio.h>
#include<string.h>
int main()
{
    //Write a program to check anagram strings
    //Two strings are anagram if they contain the same characters with the same frequency
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    // Check length first
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not anagrams.");
        return 0;
    }
    // Increase frequency for first string
    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[str1[i]]++;
    }
    // Decrease frequency for second string
    for(i = 0; str2[i] != '\0'; i++)
    {
        freq[str2[i]]--;
    }
    // Check frequencies
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("Strings are not anagrams.");
            return 0;
        }
    }
    printf("Strings are anagrams.");
    return 0;
}