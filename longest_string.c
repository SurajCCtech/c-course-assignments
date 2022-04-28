#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   if (argc == 1)
      puts("");
      
   else
   {
      for (int i = 1; i < argc; i++)
      {
         if (strlen(argv[1]) < strlen(argv[i]))
         {
            argv[1] = argv[i];
         }
      }
      puts(argv[1]);
   }
   return EXIT_SUCCESS;
}
