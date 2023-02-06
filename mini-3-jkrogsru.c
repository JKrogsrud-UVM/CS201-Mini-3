#include "mini-3-jkrogsru.h"
#include <ctype.h>
#include <stdlib.h>

int convertString(char *inString, char** outString)
{
    if (inString == NULL || outString == NULL)
    {
        return -1;
    }
    else
    {
        int len = size(inString);
        *outString = malloc(sizeof(char[len]));
        char *newString = *outString;

        for (int index=0; index < len; index++)
        {
            newString[index] = tolower(inString[index]);
        }
        // Add string terminating character
        newString[len] = '\0';

        // printf("%s\n", newString);

        *outString = newString;

        return len;
    }
}

int size(char* string)
{
    int loc = 0;
    int count = 0;

    // We loop through the character array that is being pointed to and count until we hit the
    // null character
    while (*(string + loc) != '\0')
    {
        count++;
        loc++;
    }

    return count;
}