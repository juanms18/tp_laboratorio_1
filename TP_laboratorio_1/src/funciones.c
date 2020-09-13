/*
 * funciones.c
 *
 *  Created on: 12 sep. 2020
 *      Author: juan manuel sanchez */

#include <stdio.h>
#include <stdlib.h>


//obtener un float y validar
 float obtenerFloat(char mensaje[],char mensajeError[],float maximo, float minimo)
 {
    float buffer;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%f",&buffer);
     while(buffer<minimo || buffer>maximo)
     {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%f",&buffer);
    }
    return buffer;
 }

 //obtener un char y validar

 char obtenerChar(char mensaje[],char mensajeError[],char maximo, char minimo)
 {
     char buffer;
     printf("%s",mensaje);
     fflush(stdin);
     scanf("%c",&buffer);

      while(buffer<minimo || buffer>maximo)
      {
         printf("%s",mensajeError);
         fflush(stdin);
         scanf("%c",&buffer);
     }
     return buffer;
  }

 float promedio (int numero[], int cantidad)
 {
     int suma=0;
     float resultadoProm;
     int i;
     for (i=0; i<cantidad;i++)
     {

         suma = suma + numero[i];

     }
     resultadoProm = (float)suma / cantidad;

     return resultadoProm;
 }

 int max(int numero[], int cantidad)
 {
     int flag=0;
     int i;
     int max;
     for (i=0; i<cantidad; i++)
     {
         if (flag == 0)
         {
             flag = 1;
             max = numero[i];
         }

         if(numero[i]>max)
         {
             max = numero[i];
         }
     }
     return max;
 }

 int min(int numero[], int cantidad)
 {
     int min;
     int i;
     int flag=0;

     for (i=0; i<cantidad; i++)
     {
         if (flag == 0){
             flag = 1;
             min = numero[i];
         }
         if (numero[i]<min){
             min = numero[i];
         }
     }
     return min;
 }

 int minIndice(int numero[], int cantidad)
 {
     int minIndice, min;
     int i;
     int flag=0;

     for (i=0; i<cantidad; i++)
     {
         if (flag == 0){
             flag = 1;
             min = numero[i];
             minIndice=i;
         }
         if (numero[i]<min){
             min = numero[i];
             minIndice=i;
         }
     }
     return minIndice;
 }

 int compactar(int numero[], int cantidad, int eliminar)
 {
     int i;
     for(i=eliminar;i<cantidad;i++)
     {
         numero[i]=numero[i+1];
     }
     return cantidad-1;
 }


void ordernar(int numero[], int cantidadArray,int array2[])
 {
     int indiceMenor;
     int iterar=cantidadArray;
     int i;
     for(i=0;i<iterar;i++){
         indiceMenor=minIndice(numero,cantidadArray);
         array2[i]=numero[indiceMenor];
         cantidadArray=compactar(numero,cantidadArray,indiceMenor);
     }
 }



 void validar(int opcion)
 {
     while(opcion>5||opcion<0)
     {
        printf("Valor incorrecto!.\nSolo puede elegir las opciones entre 1 y 5.\nPor favor, vuelva a ingresar una opcion: \n");
     }
 }

 float promedioUno(float numerosSumados,float cantidadDeVeces)
 {
    float resultado;
    resultado = numerosSumados/cantidadDeVeces;
    return resultado;
}

 float suma(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     result = numero1 + numero2;
     return result;
 }

 float resta(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     result = numero1 - numero2;
     return result;
 }

 float division(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     while(numero2<=0)
     {
         printf("No se puede realizar una division por 0 o menor a 0. Ingrese nuevos valor para el numero b: ");
         fflush(stdin);
         scanf("%f",&numero2);
     }
     result = numero1/numero2;
     return result;
 }

 float multiplicacion(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     result = numero1 * numero2;
     return result;
 }

 float factorial(float numero){
     float result=1.0;
     for(;numero>0;numero--){
         result = result*numero;
     }
     return result;
 }
