/*
1CM4
Examen departamental 1 fundamentos de programacion
*/
#include<stdio.h>

int main(){
    int opc = 0;                    //opcion del menu
    //variables del programita 1
    int valreg = 0;                 //varible de la cuenta regresiva
    int i = 0;
    //variables del programita 2
    int j = 0;                      //contador de valores ingresados
    int num;                        //valor ingresado por el usuario
    int suma = 0;                   //variable para la suma
    float promed;                   //variable para el promedio 
    //variables del programita 3
    int n, m;               //esto son los valores iniciales
    int a = 0, b = 0;               //valores temporales para la validacion
    float serie;
    int k = 0;                      //iterador de incremento
    int l = 0;                      //iterador de decremento
    int u = 1;
    float temp;
    //

    //do while del menu
    do{
                
        printf("\nbienvenido al menu\n");
        printf("====================================================\n");
        printf("1) cuenta regresiva\n");
        printf("2) suma de numeros hasta que ingreses 0\n");
        printf("3) serie de suma n/m hasta m/n\n");
        printf("elige alguna opcion: ");
        scanf("%d", &opc);

        //system("cls"); 

        switch (opc)
        {
            //la opcion de la cuenta regresiva
            case 1:                 
                printf("eligio la cuenta regresiva, por favor ingrese un numero: ");
                scanf("%d", &valreg);

                //valida que el usuario meta un valor correcto
                if(valreg > 0){
                    //decrementa e imprime
                    for(i = valreg ; i >= 0; i--){
                        printf("%d\n",i);
                    }
                } else {
                    printf("numero no valido\n");
                }

                printf("========================================================================\n");
                break;

            //suma de un num hasta que ingrese un 0 ahi se muere
            case 2:
                printf("ingresa numeros, si desea terminar introdusca 0\n");
                
                num = 1;
                //hace la suma y toda la cosa
                while (num != 0){
                    printf("ingrese un numero: ");
                    num = 0;
                    scanf("%d", &num);
                    suma += num;
                    j += 1;
                }
                printf("====================================================\n");

                j--;

                //valida si el usuario metio solo un valor
                if(j != 0){
                    promed = suma / j;
                    printf("la suma de los valores es: %d\n", suma);
                    printf("los cantidad de valores ingresados son: %d\n", j);
                    printf("el promedio de los numeros es: %f\n", promed);
                } else {
                    j = 1;
                    promed = suma / j;
                    printf("la suma de los valores es: %d\n", suma);
                    printf("los cantidad de valores ingresados son: %d\n", j);
                    printf("el promedio de los numeros es: %f\n", promed);
                }
                num = 1;
                promed = 0;
                suma = 0;

                break;
            
            //opcion 3 que es la serie
            case 3:
                printf("ingresa un valor n, m: ");
                scanf("%d %d", &n, &m);

                //valida que se pueda hacer
                if(m != 0 && m > n){
                    a = n;
                    b = m;

                    while ((n <= b) && (m >= a)){
                            printf("%d", m);
                            serie = n/m;

                            printf("n/m es %d/%d\n",n,m);
                            
                            temp += serie;
                            printf("valor acual de la serie: 0%f", temp);

                            n += i++;
                            m += j--;
                        
                    }
                } else {
                    printf("opcion no valida");
                }

                break;       
            default:
                printf("\nopcion no valida\n");

                break;
        }
    } while (opc != 4);

    return 0;
}
