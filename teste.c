#include <stdio.h>
int main (){
    float nota1, nota2, nota3, media;
    char turno;

    printf("Digite o turno: \n");
    scanf("%c", &turno);
    
    printf("Digite a 1 nota:\n");
    scanf("%f", &nota1);

    printf("Digite a 2 nota:\n");
    scanf("%f", &nota2);

    printf("Digite a 3 nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) /3;

    printf("nota final foi de: %f \n", media);
    
    if (turno == 'N' || turno== 'n') {
            printf("Turno do aluno: Noturno \n");
        }
            else if (turno== 'M' || turno== 'm'){
                printf("Turno do aluno: Matutino \n");
            }
    if (media>=7) {
        printf("Aprovado!");
    }
        else if (media >=6.9 && media <7){
            media = 7;
            printf("Aprovado!! Por arredondamento!");
        }
             else {
                 printf("Reprovado!");
            }
    if (media >= 9) {
        media=10;
    }
    if (media == 10){
        printf("Com nota maxima!");
    }
        else if (media < 7 && media >= 6.5) {
            printf("Por pouco nao passou!");
        }
    return 0;
 }