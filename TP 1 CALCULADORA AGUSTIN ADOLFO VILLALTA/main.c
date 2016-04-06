#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>
#include <math.h>

/** CALCULADORA

Hecha por Agustin Adolfo Villalta

**/

int main()
{
    char seguir='s';
    int opcion;
    float Number1, Number2; //Declaro los dos numeros, A y B


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:
                printf("Ingrese el 1er Operando: ");
                scanf("%f", &Number1);
                system("cls");
                continue;

            case 2:
                printf("Ingrese el 2do Operando: ");
                scanf("%f", &Number2);
                system("cls");
                continue;


            case 3:
                system("cls");


                printf("El resultado de la Suma es: %.2f ", CalculateSum(Number1, Number2));

                getch();
                system("cls");
                continue;



            case 4:
                system("cls");

                printf("El resultado de la Resta es: %.2f ", CalculateRest(Number1, Number2));

                getch();
                system("cls");
                continue;


            case 5:
                system("cls");

                printf("El resultado de la Division es: %.2f ", CalculateDivision(Number1, Number2));

                getch();
                system("cls");
                continue;



            case 6:
                system("cls");

                printf("El resultado de la Multiplicacion es: %.2f ", CalculateMultiplication(Number1, Number2));

                getch();
                system("cls");
                continue;



            case 7:
                system("cls");

                printf("El resultado del Factorial es: %.2f ", CalculateFactorial(Number1));

                getch();
                system("cls");
                continue;

            case 8:
                system("cls");

                printf("El resultado de la Suma es: %.2f \n", CalculateSum(Number1, Number2));
                printf("El resultado de la Resta es: %.2f \n", CalculateRest(Number1, Number2));
                printf("El resultado de la Division es: %.2f \n", CalculateDivision(Number1, Number2));
                printf("El resultado de la Multiplicacion es: %.2f \n", CalculateMultiplication(Number1, Number2));
                printf("El resultado factorial del 1er operando es: %.2f \n", CalculateFactorial(Number1));
                getch();
                system("cls");
                continue;

            case 9:
                seguir = 'n';
                break;
        }

}
}
