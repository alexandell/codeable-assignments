#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    int countletters = 0;
    int countword = 1;
    int countsentence = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            countletters++;
        }
        else if (text[i] == ' ')
        {
            countword++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            countsentence++;
        }
    }

    float L = 100 * (float)countletters / (float)countword;
    float S = 100 * (float)countsentence / (float)countword;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 0 && index < 16)
    {
        printf("%i\n", (int)round(index));
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}