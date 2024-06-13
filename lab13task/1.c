#include <stdio.h>

int main(void)
{
      char string[20];

      printf("Enter the string  : ");
      fgets(string, sizeof(string), stdin);
      int i, count = 0;
    for (i = 0; i < 20; i++)
    {
     
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            count = count + 1;
          }
       }
  printf("Number of Vowels : %d", count);

      return 0;
}

