#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat(NULL, NULL, 1);
    printf("(%s) (nada)\n", concat);
    concat = string_nconcat("best ", "school", 2);
     printf("(%s) (best sc)\n", concat);
concat = string_nconcat(NULL, "sc", 2);
  printf("(%s) (sc)\n", concat);
concat = string_nconcat("best ", NULL, 6);
   printf("(%s) (best )\n", concat);
    free(concat);
    return (0);
}
