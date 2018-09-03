#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int contador=0;
    int contadorPos=0;
    int contadorNeg=0;
    int cantCeros=0;
    int cantPares=0;
    int cantImpar=0;
    int sumaPos=0;
    int sumaNeg=0;
    float promedioPos=0;
    float promedioNeg=0;
    int max=0;
    int min=0;
    char resp='s';

    do
    {
        printf("================================");
        printf("\nIngrese un numero: ");
        scanf("%d", &num);
        getchar();
        printf("================================");
        printf("\nDesea ingresar otro numero(s/n): ");
        fflush(stdin);
        scanf("%c", &resp);


        contador++;

        if ( num % 2 == 0 )
        {
            cantPares++;
        }

        if( num % 2 != 0)
        {
            cantImpar++;
        }

        if(num > max)
        {
            max = num;
        }

        if(num < min)
        {
            min = num;
        }

        //fin de determinacion de maximo y minimo

           if(num>0)
            {
                contadorPos++;
                sumaPos=sumaPos+num;
            }

            if(num<0)
            {
                contadorNeg++;
                sumaNeg=sumaNeg+num;
            }

            else if(num==0)
            {
                cantCeros++;
            }



    }while(resp !='n');

        promedioPos = sumaPos / contadorPos;
        promedioNeg = sumaNeg / contadorNeg;

    system("cls");

    printf("\n=====================================\n");
    printf("\n========PRESENTACION DE DATOS========\n");
    printf("\n=====================================\n");
    printf("Cantidad de Positivos: %d", contadorPos);
    printf("\n=====================================\n");
    printf("Cantidad de Negativos: %d", contadorNeg);
    printf("\n=====================================\n");
    printf("Cantidad de Ceros: %d", cantCeros);
    printf("\n=====================================\n");
    printf("Cantidad de numeros: %d", contador);
    printf("\n=====================================\n");
    printf("Suma de Positivos: %d", sumaPos);
    printf("\n=====================================\n");
    printf("Suma de Negativos: %d", sumaNeg);
    printf("\n=====================================\n");
    printf("Promedio de Positivos: %.2f", promedioPos);
    printf("\n=====================================\n");
    printf("Promedio de Negativos: %.2f", promedioNeg);
    printf("\n=====================================\n");
    printf("El maximo es: %d", max);
    printf("\n=====================================\n");
    printf("El minimo es: %d", min);
    printf("\n=====================================\n");
    printf("Cantidad de pares: %d", cantPares);
    printf("\n=====================================\n");
    printf("Cantidad de Impares: %d", cantImpar);
    printf("\n=====================================\n");

    return 0;
}
