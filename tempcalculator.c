#include <stdio.h>
#include <ctype.h>  


int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); // to uppercase

    if(unit == 'C'){
        printf("\n Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n The temperature in Fahrenheit is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\n Enter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\n The temperature in Celsius is: %.1f", temp);
    }
    else{
        printf("\n %c is not a valid unit of measurement.", unit);
    }

    return 0; // comment 
}