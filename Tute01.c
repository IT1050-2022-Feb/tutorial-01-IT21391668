/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub01 , sub02 , avg , tot ;
  printf("Enter the marks of subject 01 : ");
  scanf("%f", &sub01);
  printf("Enter the marks of subject 02 : ");
  scanf("%f", &sub02);
  tot = sub01 + sub02 ;
  avg = tot / 2.0 ;
  printf("The average of the two subjects are %.2f ",avg);

  
  return 0;
}

