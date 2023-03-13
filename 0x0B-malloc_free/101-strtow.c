#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: string provided.
 * Return: NULL if str == NULL OR str == ""
 */
char **strtow(char *str)
{
    if (str == NULL)
    {
        return NULL;
    }

    int i, j, k, len, word_count;
    char **words;

    len = 0;
    word_count = 0;
    while (str[len] != '\0')
    {
        if (str[len] != ' ' && (str[len + 1] == ' ' || str[len + 1] == '\0'))
        {
            word_count++;
        }
        len++;
    }

    if (word_count == 0)
    {
        return NULL;
    }

    words = malloc(sizeof(char *) * (word_count + 1));

    if (words == NULL)
    {
        return NULL;
    }

    i = 0;
    while (i < len)
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }

        j = i;
        while (str[j] != ' ' && str[j] != '\0')
        {
            j++;
        }

        words[k] = malloc(sizeof(char) * (j - i + 1));
        if (words[k] == NULL)
        {
            return NULL;
        }

        j = 0;
        while (i < len && str[i] != ' ')
        {
            words[k][j] = str[i];
            i++;
            j++;
        }

        words[k][j] = '\0';
        k++;
    }

    words[k] = NULL;
    return words;
}
