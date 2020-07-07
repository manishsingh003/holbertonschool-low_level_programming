#include "holberton.h"
#include <stdlib.h>

/**
 * 
 * 
 * 
 */
char *_strdup(char *str)
{
      char *p;
      int i, j ;

      if (str == '\0')
            return ('\0');

      i = 0;
      while (str[i])
	{
		i++;
	}
      p = malloc(sizeof(char) * i); /* is not necesary to put space to NULL */
      if (!p)
            return ('\0');

      j = 0;
      while (j <= i)
      {
            p[j] = str[j];
            j++;
      }
return (p);
}