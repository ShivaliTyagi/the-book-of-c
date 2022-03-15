#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */
  
  double inches, cms;
  printf("Enter the value of inches\n");
  scanf("%f",&inches);
  cms = inches * 2.54;
  print("The centimeter of input inches are : %.2f",cms);
  
  return 0;
}
