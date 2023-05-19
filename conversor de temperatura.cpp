/*
Programmer Bruno Gonçalves
Date: 19/05/2023
Description: Conversor de temperatura.
News: 
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	
	float celsius, fah, kelvin, conv1, conv2;
	
	printf ("Informe uma temperatura em Celsius: ");
	scanf ("%f", & celsius);
	printf ("Informe uma temperatura em Fahrenheit: ");
	scanf ("%f", & fah);
	printf ("Informe uma temperatura em Kelvin: ");
	scanf("%f", & kelvin);
	
	conv1 = (celsius*1.8)+32;
	conv2 = celsius+273.15;
	printf("\nA temperatura Celsius %.2fº convertida:\nFahrenheit: %.2fº.\nKelvin: %.2fº",celsius ,conv1 ,conv2 );
	printf("\n\n~~~~~~~~~~~~~		###		~~~~~~~~~~~~~~~\n\n");
	
	conv1 = 5*(fah-32)/9;
	conv2 = (fah-32)*5/9+273.15;
	printf("A temperatura Fahrenheit %.2fº convertida:\nCelsius: %.2fº.\nKelvin: %.2fº",fah ,conv1 ,conv2 );
	printf("\n\n~~~~~~~~~~~~~		###		~~~~~~~~~~~~~~~\n\n");
	
	conv1 = kelvin - 273.15;
	conv2 = (kelvin-273.15)*9/5+32;
	printf("A temperatura Kelvin %.2fº convertida:\nCelsius: %.2fº.\nFahrenheit: %.2fº\n",kelvin ,conv1 ,conv2 );
	return 0;
}
