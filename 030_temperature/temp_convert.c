#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float cToFahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}

float fToCelsius(float f)
{
    return (f - 32) * 5 / 9;
}

float cToKelvin(float c)
{
    return c + 273.15;
}

float kToCelsius(float k)
{
    return k - 273.15;
}

float kToFahrenheit(float k)
{
    return (k - 273.15) * (9/5) + 32;
}

float fToKelvin(float f)
{
    return (f - 32) * (5/9) + 273.15;
}

int main(int argc, char const *argv[])
{
    float Result = 0.0;
    if (argc < 3)
    {
        fprintf(stderr, "%s: error: Not enough arguments.\nUsage: %s INPUT_SCALE OUTPUT_SCALE [TEMPERATURE]...",argv[0],argv[0]);
    }

    if (argc >= 3)
    {
        if ((strcmp(argv[1],"C") == 0 || strcmp(argv[1],"c") == 0 || strcmp(argv[1],"Celcius") == 0 || strcmp(argv[1],"celcius") == 0 || strcmp(argv[1],"°C") == 0) &&
           (strcmp(argv[2],"F") == 0 || strcmp(argv[2],"f") == 0 || strcmp(argv[2],"Fahrenheit") == 0 || strcmp(argv[2],"fahrenheit") == 0 || strcmp(argv[2],"°F") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }
            
            for (int tempV = 3; tempV < argc; tempV++)
            {
                Result = cToFahrenheit(atof(argv[tempV]));
                printf("%.2f\n", Result);            
            }
        }

        else if ((strcmp(argv[2],"C") == 0 || strcmp(argv[2],"c") == 0 || strcmp(argv[2],"Celcius") == 0 || strcmp(argv[2],"celcius") == 0 || strcmp(argv[2],"°C") == 0) &&
           (strcmp(argv[1],"F") == 0 || strcmp(argv[1],"f") == 0 || strcmp(argv[1],"Fahrenheit") == 0 || strcmp(argv[1],"fahrenheit") == 0 || strcmp(argv[1],"°F") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }

            for (int tempV = 3; tempV < argc; tempV++)
            {
                Result = fToCelsius(atof(argv[tempV]));
                printf("%.2f\n",Result);            
            }
        }

        else if ((strcmp(argv[1],"C") == 0 || strcmp(argv[1],"c") == 0 || strcmp(argv[1],"Celcius") == 0 || strcmp(argv[1],"celcius") == 0 || strcmp(argv[1],"°C") == 0) &&
           (strcmp(argv[2],"K") == 0 || strcmp(argv[2],"k") == 0 || strcmp(argv[2],"Kelvin") == 0 || strcmp(argv[2],"kelvin") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }

            for (int tempV = 3; tempV < argc; tempV++)
            {
                Result = cToKelvin(atof(argv[tempV]));
                printf("%.2f\n",Result);            
            }
        }

        else if ((strcmp(argv[2],"C") == 0 || strcmp(argv[2],"c") == 0 || strcmp(argv[2],"Celcius") == 0 || strcmp(argv[2],"celcius") == 0 || strcmp(argv[2],"°C") == 0) &&
                 (strcmp(argv[1],"K") == 0 || strcmp(argv[1],"k") == 0 || strcmp(argv[1],"Kelvin") == 0 || strcmp(argv[1],"kelvin") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }

            for (int tempV = 3; tempV < argc; tempV++)
            {
                Result = kToCelsius(atof(argv[tempV]));
                printf("%.2f\n",Result);            
            }
        }

        else if ((strcmp(argv[2],"F") == 0 || strcmp(argv[2],"f") == 0 || strcmp(argv[2],"Fahrenheit") == 0 || strcmp(argv[2],"fahrenheit") == 0 || strcmp(argv[2],"°F") == 0) &&
                 (strcmp(argv[1],"K") == 0 || strcmp(argv[1],"k") == 0 || strcmp(argv[1],"Kelvin") == 0 || strcmp(argv[1],"kelvin") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }
            
            for (int tempV = 3; tempV < argc; tempV++)
            {
                Result = kToFahrenheit(atof(argv[tempV]));
                printf("%.2f\n", Result);            
            }
        }

        else if ((strcmp(argv[1],"F") == 0 || strcmp(argv[1],"f") == 0 || strcmp(argv[1],"Fahrenheit") == 0 || strcmp(argv[1],"fahrenheit") == 0 || strcmp(argv[1],"°F") == 0) &&
                 (strcmp(argv[2],"K") == 0 || strcmp(argv[2],"k") == 0 || strcmp(argv[2],"Kelvin") == 0 || strcmp(argv[2],"kelvin") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }

            for (int tempV = 3; tempV < argc; tempV++)
            {
                Result = fToKelvin(atof(argv[tempV]));
                printf("%.2f\n", Result);            
            }
        }
        
        /*else
        {
            fprintf(stderr,"%s: error: Not enough arguments.\nUsage: %s INPUT_SCALE OUTPUT_SCALE [TEMPERATURE]...",argv[0],argv[0]);
        }*/
    }
    return EXIT_SUCCESS;
}
