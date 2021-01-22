// For harvard cs50 in their IDE

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    
    int y = get_int("y: ");
    
    printf("%li\n", x + y);
}
//another example
{
    // get numbers from user
    int x = get_int("x: ");

     int y = get_int("y: ");

     float z = (float) x / (float) y;
     printf("%f\n", z);
}
//conditons

{
   char c = get_char("Do you agree?");
   if(c == 'y' || c == 'Y')
   {
       printf("agreed.\n");
   }
   else if (c == 'n' || c == 'N')
   {
       printf("not agreed \n");
   }
}
// more
void meow(void)
{
    printf("meow\n");
}

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
      meow();
  }
}
