 #include <stdio.h>
#include "isupper.h"

int main(int argc, char* argv[]) {
  
   char c;
   c = getchar();
   
   while (c != EOF) {
   
       if (!isupper(c))
       
         printf("%c",c);
         
       if (isupper(c))
         printf("%c",c+32);
         
       c = getchar();
   }

}