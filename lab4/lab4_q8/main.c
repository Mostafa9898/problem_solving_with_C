#include <stdio.h>
#include <stdlib.h>
#define STRING_SIZE 1000
//9) C Program to Remove all Characters in a String Except Alphabet

char* clean_str(const char* str, int length);
//simple solution
int main()
{
    char input;
    char clean_string[STRING_SIZE];
    int counter = 0;
    printf("Enter string: ");
    while(10 != input && counter < STRING_SIZE){
        // get user input
        scanf("%c", &input);
        //filter only alphabets
        if((input >= 65 && input <= 90) || (input >= 97 && input <= 122))
        {
            clean_string[counter] = input;
            counter++;
        }
    }
    // avoid printing the array if it's empty so it does not show garbage value
    if (!counter){
        printf("You did not enter valid value");
    }else{

        printf("%s", clean_string);
    }
    return 0;
}

/*
//solution with a function that can pass an array.
int main()
{
    // initialize a dummy value to start looping
    char input = 'i';
    int counter = 0;
    char dirty_str[STRING_SIZE];

    // get values from user
    printf("Enter a string: ");
    // Exit when ENTER is pressed or counter reached the maximum value
    while (counter < STRING_SIZE && 10 != input)
    {
        scanf("%c", &input);
        dirty_str[counter] = input;
        counter++;
    }

    // print the clean string
    char *clean = clean_str(dirty_str,counter);
    printf(">> %s", clean);

    return 0;
}
char* clean_str(const char* str, const int total_length)
{
    // to be able to return array in c we must \n
    // manually allocate memory so it does not vanish once the function exit.
    char* clean_str = malloc(total_length);
    // dirty string counter will not be the same as the clean one
    int clean_str_counter = 0;
    for(int i = 0; i < total_length; i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            clean_str[clean_str_counter] = str[i];
            clean_str_counter++;
        }
    }
    // if no values entered do not return clean_str array so it dose not show garbage values.
    if (!clean_str_counter)
    {
        printf("No valid values was entered!\n");
        return  NULL;
    }

    return clean_str;
}
*/

