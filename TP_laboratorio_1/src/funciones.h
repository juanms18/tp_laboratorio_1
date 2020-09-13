/*
 * funciones.h
 *
 *  Created on: 12 sep. 2020
 *      Author: Juan  Manuel Sanchez
 */


float obtenerFloat(char mensaje[],char mensajeError[],float maximo, float minimo); // Funcion para obtener un float
char obtenerChar(char mensaje[],char mensajeError[],char maximo, char minimo); //Funcion para obtener un char
float promedio (int numero[], int cantidad); //funcion para obtener promedio
int max(int numero[], int cantidad);// funcion para obterner maximo
int min(int numero[], int cantidad);//funcion para obtener minimo
int minIndice(int numero[], int cantidad);//funcion para indice
int compactar(int numero[], int cantidad, int eliminar);
void ordernar(int numero[], int cantidadArray,int array2[]);
 float promedioUno(float numerosSumados,float cantidadDeVeces);// saco promedio
 float suma(float numero1, float numero2); //calculo suma
 float resta(float numero1, float numero2);// calculo resta
 float division(float numero1, float numero2);//calculo division
 float multiplicacion(float numero1, float numero2);//calculo multiplicacion
 float factorial(float numero);//calculo factorial
 void validar(int opcion);// valido que el ingreso sea correcto
