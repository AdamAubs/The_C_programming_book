#include <stdio.h>

/*print Fahrenheit-Celsius table 
for fahr = 0, 20, ..., 300*/

int main()
{
    /*float fahr, celsius;
    float lower, upper, step;

    lower = 0;  //lower limit of temp scale
    upper = 300;    //upper limit
    step = 20;  //step size

    printf("fahrenheit Celsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    */

/*print celsius-fahrenheit table*/

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius fahrenheit\n");

    celsius = lower;
    while(celsius <= upper)
    {
        fahr = (9.0/5.0 * celsius) + 32;
        printf("%3.0f\t %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
