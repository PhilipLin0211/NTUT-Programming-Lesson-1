#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
 
    // Take the input from the user and save it to 'ch' variable
    printf("Enter any character :");
    scanf("%c", &ch);
 
    // Check if the given input is Alphabet or not.
    // isaplha() function returns Non-zero for alphabet, Zero for non-alphabet
    if(isalpha(ch))
    {
        // Given number is Alphabet.
        // Check if the alphabet is Upper case or Lower case.
        // We will use isupper() function, Which return Non-zero for Upper case
        // Zero for Lower case
        if(isupper(ch))
        {
            // Given Character is upper-case
            // So we need to Add 32 to given alphabet.
            // Ascii Values of A is 65 and a = 97, similarly B=66,b=98 so difference is 32  
            printf("Given Character : %c \n", ch);
            printf("After Case changing : %c \n", ch+32);
        }
        else
        {
            // Given Character is Lower-case
            // So we need to Substract 32 to given alphabet.
            // Ascii Values of A is 65 and a = 97, similarly B=66,b=98 so difference is 32  
            printf("Given Character : %c \n", ch);
            printf("After Case changing : %c \n", ch-32);
        }
    }
    else
    {
        // Given Input is not a valid Alphabet. So display error message
        printf("Invalid Input: Please provide an Alphabet \n");
    }
    return 0;
}
