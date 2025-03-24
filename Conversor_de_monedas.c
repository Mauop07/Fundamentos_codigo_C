#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    int moneda;
    int moneda_conv;
    float cantidad;
    float conversion;
    
    printf("CONVERSOR DE MONEDAS \n\n");
    printf("¿Cual es la moneda que desea convertir? \n\n 1) Quetzales \n 2) Dolares \n 3) Euros \n\n");
    printf("Opcion: ");
    scanf("%d", &moneda);

    // BLOQUE DE QUETZALES
    if (moneda == 1){
        printf("\nIngrese la cantidad en quetzales: ");
        scanf("%f", &cantidad);

        printf("\n¿A que moneda quiere convertir?: \n\n 1) Dolares \n 2) Euros \n\n");
        printf("Opcion: ");
        scanf("%d", &moneda_conv);
        
        // QUETZALES A DOLARES
        if (moneda_conv == 1){
            printf("\nCONVERSION:\n");
            conversion = (cantidad*0.1297);
            printf("%.2f", cantidad);
            printf(" quetzales son: ");
            printf("%.2f", conversion);
            printf(" dolares.\n\n");
        }
        // QUETZALES A EUROS
        if (moneda_conv == 2){
            printf("\nCONVERSION:\n");
            conversion = (cantidad*0.1187);
            printf("%.2f", cantidad);
            printf(" quetzales son: ");
            printf("%.2f", conversion);
            printf(" euros.\n\n");
        }
    }
    // BLOQUE DE DOLARES
    else if (moneda == 2){
        printf("\nIngrese la cantidad en dolares: ");
        scanf("%f", &cantidad);
        
        printf("\n¿A que moneda quiere convertir?: \n\n 1) Quetzales \n 2) Euros \n\n");
        scanf("%d", &moneda_conv);
        
        // DOLARES A QUETZALES
        if (moneda_conv == 1){
            printf("\nCONVERSION:\n");
            conversion = (cantidad*7.7076);
            printf("%.2f", cantidad);
            printf(" dolares son: ");
            printf("%.2f", conversion);
            printf(" quetzales.\n\n");
        }
        // DOLARES A EUROS
        if (moneda_conv == 2){
            printf("\nCONVERSION:\n");
            conversion = (cantidad*0.9157);
            printf("%.2f", cantidad);
            printf(" dolares son: ");
            printf("%.2f", conversion);
            printf(" euros.\n\n");
        }
    }
    // BLOQUE DE EUROS
    else if (moneda == 3){
        printf("\nIngrese la cantidad en euros: ");
        scanf("%f", &cantidad);
        
        printf("\n¿A que moneda quiere convertir?: \n\n 1) Quetzales \n 2) Dolares \n\n");
        scanf("%d", &moneda_conv);
        
        // EUROS A QUETZALES
        if (moneda_conv == 1){
            printf("\nCONVERSION:\n");
            conversion = (cantidad*8.4171);
            printf("%.2f", cantidad);
            printf(" euros son: ");
            printf("%.2f", conversion);
            printf(" quetzales.\n\n");
        }
        // EUROS A DOLARES
        if (moneda_conv == 2){
            printf("\nCONVERSION:\n");
            conversion = (cantidad*1.0919);
            printf("%.2f", cantidad);
            printf(" euros son: ");
            printf("%.2f", conversion);
            printf(" dolares.\n\n");
        }        
    }
    return (0);
}