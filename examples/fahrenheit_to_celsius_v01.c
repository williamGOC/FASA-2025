/* Fahrenheit to Celsius conversion table (K&R page 12) */
#include <stdio.h>

int main(int argc, char const *argv[]){
    
    float fahr, celsius;
    int lower, upper, step;

    /* Set lower and upper limits of the temperature table (in Fahrenheit)
    along with the table increment step-size */
    lower = 0;
    upper = 300;
    step = 20;

    /* Create convrsion table using equation: C = (5/9)(F - 32) */
    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
