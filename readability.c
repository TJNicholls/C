#include <cs50.h> //include all libraries used
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text); // add proototypes for whats to come
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //prompt user for text
    string text = get_string("Text: \n");

    // count number of letters in text
    int count_letters(string text);
    int letters = 0;

    for (int i = 0; i < strlen(text); i++)

    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
    }

    // count number of words in text
    int count_words(string text);
    int words = 1;

    for (int i = 0; i < strlen(text); i++)

    {
        if (text[i] == ' ')
        {
            words++;
        }
    }

    // count number of sentences in text
    int count_sentences(string text);
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)

    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }


    int grade;
    float L, S;
    // find average num of letters and setences per 100 words. this requires float not int
    L = ((float)letters / words * 100);
    S = ((float)sentences / words * 100);
    grade = round(0.0588 * L - 0.296 * S - 15.8); //Use Coleman-Liau index

// print grades
    {
        if (grade < 1)
        {
            printf("Before Grade 1\n");
        }
        else if (grade >= 16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %i\n", grade);
        }
    }
}
