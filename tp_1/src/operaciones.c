/*
 * operaciones.c
 *
 *  Created on: 15 abr 2022
 *      Author: gaston
 */

#include "operaciones.h"
float precioDebito(float precio,float descuento)
{
    float totalDebito;
    totalDebito= precio - (precio*descuento/100);
    return totalDebito;
}
float precioCredito(float precio, float interes)
{
    float totalCredito;
    totalCredito=  interes*precio/100 + precio;
    return totalCredito;
}
float division(float numerador,float denominador)
{
    float resultado;

    resultado=numerador/denominador;
    return resultado;
}
float resta(float precio1, float precio2)
{
    float diferencia;
    diferencia=precio1-precio2;
    return diferencia;
}
void informarResultados(float precioDebLatam,float precioDebAero,float precioCreditoLatam,float precioCreditoAereo,float precioBTCLatam,float precioBTCAereo,float precioUnitarioLatam,float precioUnitarioAereo,float difPreciosLatamAereo)
{
    printf("\nAerolineas: \n");
    printf("Precio con tarjeta de debito: %.2f\n",precioDebAero);
    printf("Precio con tarjeta de credito: %.2f\n",precioCreditoAereo);
    printf("Precio pagado con Bitcoin: %f\n",precioBTCAereo);
    printf("Precio unitario: %.2f\n",precioUnitarioAereo);

    printf("\nLatam: \n");
    printf("Precio con tarjeta de debito: %.2f\n",precioDebLatam);
    printf("Precio con tarjeta de credito: %.2f\n",precioCreditoLatam);
    printf("Precio pagado con Bitcoin: %f\n",precioBTCLatam);
    printf("Precio unitario: $%.2f\n",precioUnitarioLatam);

    printf("\nLa diferencia de precio es: %.2f\n",difPreciosLatamAereo);
}
void calculaCostos(float descuento,float interes,float precioLatam,float precioAerolineas,float btc,float kmTotales,float *precioDebLatam,float *precioDebAero,float *precioCreditoLatam,float *precioCreditoAereo,float *precioBTCLatam,float *precioBTCAereo,float *precioUnitarioLatam,float *precioUnitarioAereo,float *difPreciosLatamAereo)
{
    float resultado;
    if(kmTotales!=0 && precioLatam!=0 && precioAerolineas!=0)
    {
        *precioDebLatam=precioDebito(precioLatam,descuento);
	    *precioDebAero=precioDebito(precioAerolineas,descuento);
	    *precioCreditoLatam=precioCredito(precioLatam,interes);
	    *precioCreditoAereo=precioCredito(precioAerolineas,interes);
	    *precioBTCLatam=division(precioLatam,btc);
	    *precioBTCAereo=division(precioAerolineas,btc);
	    *precioUnitarioLatam = division(precioLatam,kmTotales);
	    *precioUnitarioAereo = division(precioAerolineas,kmTotales);

	    resultado = resta(precioLatam,precioAerolineas);
	    if(resultado<0)
	    {
	        resultado=resultado*(-1);
	    }

	    *difPreciosLatamAereo = resultado;
        printf("\nSe calcularon con exito los costos.\n");
    }
    else
    {
        printf("No se pueden calcular los costos. No hay vuelos ingresados.\n");
    }
}
