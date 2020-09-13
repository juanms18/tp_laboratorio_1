/*
 ============================================================================
 Name        : TP_laboratorio_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


 int main()
{
    char seguir='s';
    int opcion;
    char mensaje[]="\nValor: ";
    char menError[]="\nValor fuera del rango permitido, ingrese otro de nuevo: ";
    float max=3000.0;
    float min=0.0;
    float numA,numB;
    float resultado1;
    float resultado2;
	float resultado3;
	float resultado4;
	float resultado5;
	float resultado6;
    int flag=0;
    while(seguir=='s')
    {
    	printf("\n1- Ingresar 1er operando (A=x)\n");
    	printf("2- Ingresar 2do operando (B=y)\n");
    	printf("3- Calcular todas las operaciones \n");
    	printf("4- Mostrar resultados \n");
    	printf("5- Salir\n");
    	printf("\n\nIngrese su opcion: ");
    	scanf("%d", &opcion);
    	if (opcion<1  ||  opcion>5)
    	{
    		printf("\n Opcion incorrecta");

    	}
    	else{

           switch(opcion)
        {
            case 1:
            	system("cls");
            	numA=obtenerFloat(mensaje,menError,max,min);
                break;
            case 2:
            	system("cls");
                numB=obtenerFloat(mensaje,menError,max,min);
                break;
            case 3:
            	system("cls");
                resultado1=suma(numA,numB);
                resultado2=resta(numA,numB);
                resultado3=division(numA,numB);
                resultado4=multiplicacion(numA,numB);
                resultado5=factorial(numA);
                resultado6=factorial(numB);
                flag+1;
                printf("\nCalculando Operaciones!!\n\n\n  ");
                break;
            case 4:
            	if(flag=0)
            	{
            		printf("\nDebe ejecutar la opcion 3 para poder ver los resultados\n");
            	}
            	else
            	{
            	system("cls");
            	printf("\nEl resultado de A+B es: %.3f\n",resultado1);
                printf("\nEl resultado de A-B es: %.3f\n",resultado2);;
                printf("\nEl resultado de A/B es: %.3f\n",resultado3);
                printf("\nEl resultado de A*B es: %.3f\n",resultado4);
                printf("\nEl factorial de A es : es: %.3f\n",resultado5);
                printf("\nY factorial de b es : es: %.3f\n",resultado6);
            	}
                break;
            case 5:
            	system("cls");
            	seguir = 'n';
                break;

        }
    	}

    }
   return 0;
}


