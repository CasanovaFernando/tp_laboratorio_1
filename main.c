#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int num1=0, num2=0, flag=0;

           do{
        printf("\n1- Ingresar 1er operando (A=%d)\n",num1);
        printf("2- Ingresar 2do operando (B=%d)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingrese numero");
                scanf("%d",&num1);
                flag = 1;
                break;
            case 2:
                system("cls");
                printf("Ingrese numero");
                scanf("%d",&num2);
                flag = 1;
                break;
            case 3:
                if(flag == 0)
                {
                    system("cls");
                    printf("Por favor ingrese los numeros primero");
                }
                else{
                system("cls");
                suma(num1,num2);
                }
                break;
            case 4:
                if(flag == 0)
                {
                    system("cls");
                    printf("Por favor ingrese los numeros primero");
                }
                else{
                system("cls");
                resta(num1,num2);
                }
                break;
            case 5:
                if(flag == 0)
                {
                    system("cls");
                    printf("Por favor ingrese los numeros primero");
                }
                else{
                system("cls");
                if(num2 == 0)
                {
                    printf("Error, no se puede dividir por cero,reingrese numero");
                    scanf("%d",&num2);
                }
                division(num1,num2);
                }
                break;
            case 6:
                if(flag == 0)
                {
                    system("cls");
                    printf("Por favor ingrese los numeros primero");
                }
                else{
                system("cls");
                multiplicacion(num1,num2);
                }
                break;
            case 7:
           if(flag == 0)
                {
                    system("cls");
                    printf("Por favor ingrese los numeros primero");
                }
                else{
                     factorial(num1);
                }
                break;
            case 8:
                if(flag == 0)
                {
                    system("cls");
                    printf("Por favor ingrese los numeros primero");
                }
                else{
            suma(num1,num2);
            resta(num1,num2);
            division(num1,num2);
            multiplicacion(num1,num2);
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }


        }while(seguir == 's');

        system("pause");
    return 0;
}








