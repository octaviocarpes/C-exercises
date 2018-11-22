#include <stdio.h>

float convertToCelcius(int temperature)
{
    return ((float)5 / 9) * (temperature - 32);
}

int main(int argc, char const *argv[])
{

    printf("The temperature in Celcius is: %.2f\n", convertToCelcius(455));

    return 0;
}
