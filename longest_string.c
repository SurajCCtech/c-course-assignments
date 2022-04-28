#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   if (argc == 1)
      puts("");
    
   else
   {
      char *MAX = argv[1];
      for (int i = 1; i < argc; i++)
      {
         if (strlen(MAX) < strlen(argv[i]))
         {
            MAX = argv[i];
         }
      }
      puts(MAX);
   }
   return EXIT_SUCCESS;
}