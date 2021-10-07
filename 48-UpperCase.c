#include <stdio.h>


int main()
{
   char string[100];
   
   printf("Enter a string to convert it into upper case\n");
   gets(string);
   
   upper_string(string);
   
   printf("The string in upper case: %s\n", string);
     
   return 0;
}

void upper_string(char st[]) {
   int c = 0;
   
   while (st[c] != '\0') {
      if (st[c] >= 'a' && st[c] <= 'z') {
         st[c] = st[c] - 32;
      }
      c++;
   }
}
