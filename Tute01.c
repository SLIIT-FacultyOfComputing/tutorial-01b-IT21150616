/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1;//subject1
  int sub2;//subject2
  float avg;//Average

  printf("The subject 1 mark:");
  scanf("%d",&sub1);//input subject1 mark
  printf("The subject 2 mark:");
  scanf("%d",&sub2);//input subject2 mark
  avg=(sub1+sub2)/2.0;

  printf("The average is:%.2f",avg);//display Average mark

  return 0;
}

