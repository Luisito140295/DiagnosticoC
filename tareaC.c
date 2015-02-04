#include<stdio.h>

void main ()
{
    int i=0, j=0, ii=0, jj=0, a=0, b=0, v=0;/*Siempre inicializar las variables*/
    int s=0, t=0, c=0, d=0, q=0, r=0;
    printf("¿Cuantos periodos contiene cada anio? \n");/*"i" Para columnas=Periodos*/
    scanf ("%d", &jj);
    j=jj-1;
    printf("¿Cuantos anios proporcionara? \n");/*"j" Para filas=anios*/
    scanf ("%d", &ii);
    i=ii-1;
    int DatosArreglo[j][i];//Declaro un arreglo BiDimencional de i x j tamño
                           //El primer sub ́ındice indica la fila y el segundo sub ́ındice indica la columna.
                           //Trabajar con Arreglos: No excederse, el compilador quizá no lo marque como error.
                           //Primero lee x=Columnas=j
                           //Segundo lee y=filas=i
    int AniosArreglo[i];//Aqui se almacenara la suma de cada año
    int PeriodosArreglo[j];//Aqui se almacenara la suma de cada periodo

    for (j=0; j<jj; j++){//Inici el arreglo en 0's para que no halla basura en memoria
        PeriodosArreglo[j]=0;
    }

    for (i=0; i <ii; i++) {
        for (j=0; j <jj; j++) {
            /*printf("------------------\n");
            printf("El valor de i %d: \n ", i);
            printf("El valor de j %d: \n ", j);
            printf("------------------\n");*/
            printf("Ingrese el valor del Anio %d: \n ", a=i+1);
            printf("Ingrese el valor del Periodo %d: \n ", b=j+1);
            scanf("%d",&v);
            s=s+v;
            t=v;
            //t=t+PeriodosArreglo[j];
            PeriodosArreglo[j]=PeriodosArreglo[j]+t;
            }
        AniosArreglo[i]=s;
        s=0;
    }

printf("------------------\n");
printf("------------------\n");

    for (i=0; i<ii; i++){/*for para mostrar las sumas de los ANIOS*/
        printf("La suma del anio %d es: \n", q=i+1);
        c=AniosArreglo[i];
        printf("%d \n", c);
    }

printf("------------------\n");
printf("------------------\n");

    for (j=0; j<jj; j++){/*for para mostrar las sumas de los PERIODOS*/
        printf("La suma del periodo %d es: \n", r=j+1);
        d=PeriodosArreglo[j];
        printf("%d \n", d);
        printf("------------------\n");
    }
}

