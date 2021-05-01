#include <stdio.h>

#include <string.h>

#include <ctype.h>

#define KEYMAX 32

 

struct keyword

{

    char word[10];

    int occur;

};

 

int binarysearch(char [], struct keyword[]);

 

int main()

{

    int i = 0, j = 0, pos;

    char string[100], unit[20], c;

    struct keyword key[32] = {"auto", 0, "break", 0, "case", 0,

                          "char", 0, "const", 0, "continue", 0,

                          "default", 0, "do", 0, "double", 0,

                          "else", 0, "enum", 0, "extern", 0,

                          "float", 0, "for", 0, "goto", 0,

                          "if", 0, "int", 0, "long", 0,

                          "register", 0, "return", 0, "short", 0,

                          "signed", 0, "sizeof", 0, "static", 0,

                          "struct", 0, "switch", 0, "typedef", 0,

                          "union", 0, "unsigned", 0, "void", 0,

                          "volatile", 0, "while", 0,};

 

    printf("Enter string: ");

    do

    {

        fflush(stdin);

        c = getchar();

        string[i++] = c;

 

    } while (c != '\n');

    string[i - 1] = '\0';

    printf("The string entered is: %s\n", string);

    for (i = 0; i < strlen(string); i++)

    {

        while (i < strlen(string) && string[i] != ' ' && isalpha(string[i]))

        {

            unit[j++] = tolower(string[i++]);

        }

        if (j != 0)

        {

            unit[j] = '\0';

            pos = binarysearch(unit, key);

            j = 0;

            if (pos != -1)

            {

               key[pos].occur++;

            }

        }

    }

    printf("***********************\n   Keyword\tCount\n***********************\n");

    for (i = 0; i < KEYMAX; i++)

    {

        if (key[i].occur)

        {

            printf("    %s\t  %d\n", key[i].word, key[i].occur);

        }

    }

 

    return 0;

}

 

int binarysearch(char *word, struct keyword key[])

{

    int low, high, mid;

 

    low = 0;

    high = KEYMAX - 1;

    while (low <= high)

    {

        mid = (low + high) / 2;

        if (strcmp(word, key[mid].word) < 0)

        {

            high = mid - 1;

        }

        else if (strcmp(word, key[mid].word) > 0)

        {

            low = mid + 1;

        }

        else

        {

            return mid;

        }

    }

 

    return -1;

}
