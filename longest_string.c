#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char *max ="";

   for (int i = 1; i < argc; i++)
      {
         if (strlen(max) < strlen(argv[i]))
         {
            max = argv[i];
         }
      }
      puts(max);

   return EXIT_SUCCESS;
}