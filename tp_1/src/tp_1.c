/*
 ============================================================================
 Name        : tp_1.c
 Author      : Gaston Praettestein
 Version     :
 Copyright   : Your copyright notice
 Description : Trabajo Practico Agencia de Viajes
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "operaciones.h"

int main(void)
{
	setbuf(stdout, NULL);
    float kmTotales;
	int opcion;
    float precioAerolineas;
    float precioLatam;
    float precioDebLatam;
    float precioDebAero;
    float precioCreditoLatam;
    float precioCreditoAereo;
    float precioBTCLatam;
    float precioBTCAereo;
    float precioUnitarioLatam;
    float precioUnitarioAereo;
    float difPreciosLatamAereo;
    float descuento;
    float interes;
    float btc;


    kmTotales=0;
    precioAerolineas=0;
    precioLatam=0;

    descuento=10;
    interes=25;
    btc=4579979.89;

    do
    {
        opcion = menu(kmTotales,precioAerolineas,precioLatam);

        switch(opcion)
        {
            case 1:
                kmTotales = get_Float("Ingrese kilometros: ");
            break;
            case 2:
                precioAerolineas = get_Float("Ingrese precio de vuelo de Aerolineas:");
                precioLatam = get_Float("Ingrese el precio de vuelo de Latam: ");
            break;
            case 3:
                calculaCostos(descuento,interes,precioLatam,precioAerolineas,btc,kmTotales,&precioDebLatam,&precioDebAero,&precioCreditoLatam,&precioCreditoAereo,&precioBTCLatam,&precioBTCAereo,&precioUnitarioLatam,&precioUnitarioAereo,&difPreciosLatamAereo);
            break;
            case 4:
                if(kmTotales!=0 && precioLatam!=0 && precioAerolineas!=0)
                {
            	    informarResultados(precioDebLatam, precioDebAero, precioCreditoLatam, precioCreditoAereo,precioBTCLatam, precioBTCAereo, precioUnitarioLatam, precioUnitarioAereo, difPreciosLatamAereo);
                }
            	 else
                {
                    printf("No hay vuelos ingresados.\n");
                }
            break;
            case 5:
				kmTotales=7090;
				precioAerolineas=162965;
				precioLatam=159339;
                calculaCostos(descuento,interes,precioLatam,precioAerolineas,btc,kmTotales,&precioDebLatam,&precioDebAero,&precioCreditoLatam,&precioCreditoAereo,&precioBTCLatam,&precioBTCAereo,&precioUnitarioLatam,&precioUnitarioAereo,&difPreciosLatamAereo);
			    informarResultados(precioDebLatam, precioDebAero, precioCreditoLatam, precioCreditoAereo,precioBTCLatam, precioBTCAereo, precioUnitarioLatam, precioUnitarioAereo, difPreciosLatamAereo);
			break;
            default:
            	printf("Programa finalizado con exito.\n");
            break;
        }
    }while(opcion!=6);
	return 0;
}

