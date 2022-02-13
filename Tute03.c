/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int num , sum = 0 ;
  int count = 1 ;
  printf("Enter a number : ");
  scanf("%i", &num);
  if(num > 0)
  {
    while ( count <= num )
    {
      sum = sum + count ;
      count ++ ;
    }
  }
  else 
  {
    printf("number cannot be a negative number.");
  }
  printf("The sum is %i", sum);

  
  return 0;
}

