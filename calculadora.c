#include <stdio.h>
 int main (){
   
    char operacao;
    float  num1, num2, resultado;

    printf ("Qual a operacao? Soma(S)/Subtracao(s)/Multiplicacao(x)/Divisao(d)\n");
    scanf("%c", &operacao);

            if (operacao == 'S') { 
                  printf ("Primeiro numero: \n");
                    scanf("%f", &num1);

                    printf ("Segundo numero:\n");
                    scanf("%f", &num2);

                    resultado = num1 + num2;

                    printf ("O resultado da soma e de: %f", resultado);
                }
            
            else if (operacao == 's') { 
                    printf ("Primeiro numero: \n");
                    scanf("%f", &num1);

                    printf ("Segundo numero:\n");
                    scanf("%f", &num2);

                    resultado = num1 - num2;

                    printf ("O resultado da subtracao e de: %f", resultado);
            }   

             else if (operacao == 'x') { 
                    printf ("Primeiro numero: \n");
                    scanf("%f", &num1);

                    printf ("Segundo numero:\n");
                    scanf("%f", &num2);

                    resultado = num1 * num2;

                    printf ("O resultado da multiplicacao e de: %f", resultado);

            }

            else if (operacao == 'd') { 
                    printf ("Primeiro numero: \n");
                    scanf("%f", &num1);

                    printf ("Segundo numero:\n");
                    scanf("%f", &num2);

                    resultado = num1 / num2;

                    printf ("O resultado da divisao e de: %f", resultado);

            }

    return 0;

 }
