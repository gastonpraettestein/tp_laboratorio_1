/*
 * operaciones.h
 *
 *  Created on: 15 abr 2022
 *      Author: gaston
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#include <stdio.h>
#include <stdlib.h>
/// @brief
///
/// @param precioDebLatam
/// @param precioDebAero
/// @param precioCreditoLatam
/// @param precioCreditoAereo
/// @param precioBTCLatam
/// @param precioBTCAereo
/// @param precioUnitarioLatam
/// @param precioUnitarioAereo
/// @param difPreciosLatam_y_Aereo
void informarResultados(float precioDebLatam,float precioDebAero,float precioCreditoLatam,float precioCreditoAereo,float precioBTCLatam,float precioBTCAereo,float precioUnitarioLatam,float precioUnitarioAereo,float difPreciosLatamAereo);
/// @brief
///
/// @param descuento
/// @param interes
/// @param precioLatam
/// @param precioAerolineas
/// @param btc
/// @param kmTotales
/// @param precioDebLatam
/// @param precioDebAero
/// @param precioCreditoLatam
/// @param precioCreditoAereo
/// @param precioBTCLatam
/// @param precioBTCAereo
/// @param precioUnitarioLatam
/// @param precioUnitarioAereo
/// @param difPreciosLatam_y_Aereo
void calculaCostos(float descuento,float interes,float precioLatam,float precioAerolineas,float btc,float kmTotales,float *precioDebLatam,float *precioDebAero,float *precioCreditoLatam,float *precioCreditoAereo,float *precioBTCLatam,float *precioBTCAereo,float *precioUnitarioLatam,float *precioUnitarioAereo,float *difPreciosLatamAereo);

/// @brief
///
/// @param precio
/// @param descuento
/// @return
float precioDebito(float precio, float descuento);
/// @brief
///
/// @param precio
/// @param interes
/// @return
float precioCredito(float precio,float interes);
/// @brief
///
/// @param precio
/// @param kmTotales
/// @return
float division(float precio,float kmTotales);
/// @brief
///
/// @param precio1
/// @param precio2
/// @return
float resta(float precio1, float precio2);

#endif /* OPERACIONES_H_ */
