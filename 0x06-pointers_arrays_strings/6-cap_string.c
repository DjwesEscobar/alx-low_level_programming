#include "main.h"

/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analyzed string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s) 
{
    int i;
    if (s[0] >= 'a' && s[0] <= 'z') 
    {
        s[0] -= 32;
    }

    for (i = 1; s[i] != '\0'; i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z') 
	{
          
            if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
                s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
                s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
                s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == 
		'}') 
	    {
                s[i] -= 32; 
            }
        }
    }

    return s;
}
