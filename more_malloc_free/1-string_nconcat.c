#include <stdlib.h> /* For malloc and NULL */
#include <string.h> /* For strlen and strcpy/strncat (though manual copy is safer with n) */

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
static unsigned int _strlen(char *s)
{
    unsigned int len = 0;
    if (s == NULL)
        return (0);
    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concatenated_string;
    unsigned int len1;
    unsigned int len2;
    unsigned int total_len;
    unsigned int i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = _strlen(s1);
    len2 = _strlen(s2);

    if (n >= len2)
        n = len2;

    total_len = len1 + n;

    concatenated_string = malloc(sizeof(char) * (total_len + 1));

    if (concatenated_string == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
    {
        concatenated_string[i] = s1[i];
    }

    for (j = 0; j < n; j++)
    {
        concatenated_string[i + j] = s2[j];
    }

    concatenated_string[total_len] = '\0';

    return (concatenated_string);
}

