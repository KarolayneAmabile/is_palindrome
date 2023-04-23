#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];
    printf("Type your string: ");
    scanf("%s", text);

    int size = strlen(text);
    if (size > 100)
    {
        printf("Error: the number of characters exceeds the supported limit.\n");
        return 0;
    }

    char just_letters[100];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if(isalpha(text[i]))
        {
            just_letters[j] = tolower(text[i]);
            j++;
        }
    }

    char reverse_text[100];
    for (int i = size - 1; i >= 0; i--)
    {
        reverse_text[size - 1 - i] = just_letters[i];
    }

    if (strcmp(just_letters, reverse_text) == 0)
    {
        printf("Yep, that's a palindrome.\n");
    }
    else
    {
        printf("Nop, that's not a palindrome.\n");
    }
    return 0;
}
