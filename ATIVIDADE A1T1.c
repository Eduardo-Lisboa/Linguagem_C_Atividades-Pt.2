//Universaidade Positivo - Londrina PR.

//Alunos responsaveis pela criação do sistema -->

//Arthur Bitencourt Silva
//Eduardo Henrique lisboa alves
//Gabriel Watanabe Pereira
//João Vitor Bortoliero Silva
//José Henrique Yudi Kiyuna

/////////////////////////////////////////////////////////////////////////

/*****
DESENVOLVER A CODIFICAÇÃO EM LINGUAGEM CONFORME OS REQUISITOS ABAIXO. O RESULTADO 
ESPERADO É UM ÚNICO PROGRAMA EM LINGUAGEM C CAPAZ DE RESOLVER OS PROBLEMAS 
ESPERADOS PELO ENUNCIADO.
• Elabore um programa que exiba um menu de opções, onde o usuário poderá escolher dentre as 3 opções 
diferentes listadas abaixo:
a. Se ele escolher a opção 1 será executado o ALGORITMO NEGATIVO.
b. Se ele escolher a opção 2 será executado o ALGORITMO DESPESA.
c. Se ele escolher a opção 3 será executado o ALGORITMO MULTIPLO.
O QUE FAZ CADA OPÇÃO ESCOLHIDA:
• ALGORITMO NEGATIVO
a. O programa deverá efetuar a leitura de 2 números INTEIROS NEGATIVOS digitados pelo usuário e na 
sequência apresentar os números digitados pelo usuário bem como o resultado da operação de 
multiplicação. NÃO PERMITIR calcular a operação caso o usuário digite algum número positivo, informando 
a mensagem: “Você não digitou números negativos”.
• ALGORITMO DESPESA
a. Ler os valores de 4 quatro despesas de um funcionário e calcular a soma destas despesas. Caso a despesa 
for menor que R$ 5.000,00, informar a mensagem: “Você economizou este mês”. Caso contrário solicitar ao 
funcionário o valor do seu salário e subtrair das despesas que ele obteve. Se o salário não for suficiente 
para manter as despesas abaixo de R$ 5.000,00 informar a mensagem: “Você necessita de um 
empréstimo”. Caso contrário informe ao usuário a mensagem: “Desta vez você levou sorte”. Ao término 
apresente o total das despesas bruto e quando for o caso também o valor líquido (subtraído do salário).
• ALGORITMO MULTIPLO
a. Fazer a leitura de 3 valores numéricos inteiros. O programa deverá verificar destes 3 números inteiros quais 
são múltiplos de 2, 3 e 4 ao mesmo tempo. 
b. Deve informar ao usuário a mensagem: “Os números XXXXX são múltiplos de 2, 3 e 4 ao mesmo tempo e 
os números YYYYY não fazem parte!”
c. Entende-se por XXXX os números digitados que se enquadram na condição lógica por YYYYY os números 
digitados pelo usuário que não se enquadram.
MAIS INFORMAÇÕES
• Caso o usuário digite alguma opção não listada no menu, deve-se apresentar a mensagem:
a. Você não digitou nenhuma opção válida do menu!
• Termine seu programa com a mensagem:
a. Obrigado, Volte Sempre!
***/


#include <stdio.h>

int main(int argc, char const *argv[])
{
     int opcao = 0;


   
    int escolha =0;
    int numero1 =0;
    int numero2 =0;
    int resultado =0;
    
     
    double desp1, desp2, desp3, desp4, somaDespesa, resto;
    double salario = 0;
   
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
     


    printf("---------------------------------\n");
    printf("Digite 1 para ALGORITIMO NEGATIVO!\n");
    printf("---------------------------------\n");
    printf("Digite 2 para ALGORITIMO DESPESA!\n");
    printf("---------------------------------\n");
    printf("Digite 3 para ALGORITIMO MULTIPLO!\n");
    printf("---------------------------------\n\n");

    printf("-----------------\n");
    printf("Digite sua opcao: ");
  
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("Por favor digite um número negativo: \n");
    scanf("%d", &numero1);
    printf("Digite o próximo número negativo: \n");
    scanf("%d", &numero2);
    if(numero1 >= 0 || numero2 >= 0){
         printf("Voce não digitou números negativos.\n");
    }
    else if(numero1 < 0 && numero2 < 0){
            resultado = numero1 * numero2;
        printf("O primeiro número digitado foi: %d \n", numero1);
        printf("O segundo número digitado foi: %d \n", numero2);
        printf("O resultado da multiplicação foi: %d \n", resultado);
    }

        break;
    
    case 2:
           printf("Insira o valor de 4 desepesas. \n");
    printf("Valor da 1ª desepesa: ");
    scanf("%lf", &desp1);
    printf("Valor da 2ª desepesa: ");
    scanf("%lf", &desp2);
    printf("Valor da 3ª desepesa: ");
    scanf("%lf", &desp3);
    printf("Valor da 4ª desepesa: ");
    scanf("%lf", &desp4);

    somaDespesa = desp1 + desp2 + desp3 + desp4;

    if (somaDespesa < 5000.00) {
        printf("Você economizou este mês. \n");
    } else if (somaDespesa > 5000.00) {
        printf("Insira seu salário: ");
        scanf("%lf",&salario);
        resto = salario - somaDespesa;
            if ((salario > somaDespesa) && (somaDespesa < 5000)) {
                printf("Desta vez você levou sorte. \n"); 
            } else if (salario < somaDespesa) {
                printf("Você necessita de um empréstimo.\n");
            }
        }
    if (somaDespesa > salario) {
        printf("O total de suas despesas foram R$%.2lf.\n", somaDespesa);
        printf("O valor liquido de suas despesas é de R$%.2lf.\n", resto);
    } else 
        printf("O total de suas despesas foram R$%.2lf.",somaDespesa);

    



        break;

    case 3:
       
        printf("---------------------------------------\n\n");
        printf("Digite aqui o Primeiro numeiro interio: "); 
        scanf("%d", &num1);
        printf("Digite aqui o Segundo numeiro interio: ");
        scanf("%d", &num2);
        printf("Digite aqui o Terceiro numeiro interio: ");     
        scanf("%d", &num3);


       
        if ( num1%2 == 0 && num1%3== 0 && num1%4 == 0 )
        {
               printf("Número %d é divisivel por 2,3 e 4.\n", num1);
        } else
               printf("O número %d não é divisel por 2, 3 e 4.\n", num1);
            
         
        if ( num2%2 == 0 && num2%3== 0 && num2%4 == 0 )
        {
                printf("Número %d é divisivel por 2,3 e 4.\n", num2);
        } else
               printf("O número %d não é divisel por 2, 3 e 4. \n", num2);


         if ( num3%2 == 0 && num3%3== 0 && num3%4 == 0 )
        {
               printf("Número %d é divisivel por 2,3 e 4.\n", num3);
        } else
               printf("O número %d não e divisel por 2, 3 e 4.\n", num3);
        
        break;

        
        default:
        printf("---------------------------------------\n\n");
        printf(" Você não digitou nenhuma opção valida do menu!.\n");
        printf("---------------------------------------\n\n");
        break;
    }

         printf("Obrigado volte sempre!");







    return 0;
}
