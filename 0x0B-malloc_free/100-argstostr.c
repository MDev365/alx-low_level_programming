#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: arguments array
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
  char *astr;
  int i, j, str_size, k;
  
  if (ac == 0 || av == NULL)
  {
    return (NULL);
  }
  
  str_size = 0;
  for (i = 1; i < ac ; i++)
  {
    for (j = 0; av[ac] != '\0'; j++)
    {
      str_size++;
    }
    str_size++;
  }
  
  astr = malloc(sizeof(char) * str_siz + 1);
  
  if (astr == NULL)
  {
    return (NULL);
  }
  
  k = 0;
  for (i = 0; i < ac ; i++)
  {
    for (j = 0; av[i][j] != '\o' ; j++)
    {
      astr[k] = av[i][j];
      k++;
    }
    astr[k] = '\n';
    k++;
  }
  astr[k] = '\0';
  return (astr);
}
      
      
