/*
 * menu.c
 *
 *  Created on: 15 abr 2022
 *      Author: gaston
 */

#include "menu.h"
int menu(float kmTotales, float precioAerolineas, float precioLatam)
{
    int opcion;

    printf("\n1. Ingresar Kilometros: (km=%.2f)\n",kmTotales);
    printf("2. Ingresar Precio de Vuelos(Aereolineas= $%.2f, Latam= $%.2f)\n",precioAerolineas,precioLatam);
    printf("3. Calcular los costos\n");
    printf("4. Mostrar costos \n");
    printf("5. Carga forzada de datos \n");
    printf("6. Salir\n");

    printf("Ingrese la opcion: ");
    scanf("%d",&opcion);

    while(opcion<1 || opcion>6)
    {
            printf("ERROR: Ingrese nuevamente la opcion: ");
            scanf("%d",&opcion);
    }
    return opcion;
}
float get_Float(char dato[]){
    float valor;
    printf("%s",dato);
    scanf("%f",&valor);
    while(valor<0){
        printf("Error. %s nuevamente: ",dato);
        scanf("%f",&valor);
    }
    return valor;
}

