#include <stdio.h>

/* print Farenheit-Celcius table
 for fahr = 0, 20, ..., 300 */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature scale */ 
  upper = 300; /* upper limit */
  step = 20; /* step size */
  
  printf("Fahr     Celsius  \n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}

