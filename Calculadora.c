x//GabrielRC0 La Salle 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()  // Foi utilizado de referencia a calculadora desse site https://www.javatpoint.com/calculator-program-in-c
{  
    // Declarar as variadas operações;  
    int op, n1, n2; 
    int base, exp;
    long long int value=1;
    float res;
    long double result = 1.0;
    char ch;  
    do  
    {  
        // Demonstra para o usuario a parte de escolha  
        printf (" Ola meu rei, essa calculadora aqui foi feita com amor e carinho por: \n Gabriel Ribeiro Camargo (202213168) do curso de Analise e Desenvolvimento de Sistemas da La Salle Canoas!");
        printf (" Selecione a operação desejada ");  
        printf (" \n 1 Soma  \t \t 2 Menos \n 3 Multiplicação \t 4 divisão \n 5 Potencia \t \t 6 raiz quadrada \n 7 Fechar \n \n Escolhe ai, Irmão ");      
          
        scanf ("%d", &op); // aceita um valor para encaminhar a operação desejada  
      
      
    switch (op)  
    {  
        case 1:  
            // soma dois numeros  
            printf (" Você escolheu: Soma");  
            printf ("\n Digite o primeiro Numero: ");  
            scanf (" %d", &n1);  
            printf (" Digite o segundo numero: ");  
            scanf (" %d", &n2);  
            res = n1 + n2; // soma dois numeros  
            printf (" O resultado é: %.2f", res);  
            break; // break the function  
              
        case 2:  
            // diminui 
            printf (" Você escolheu: Menos");  
            printf ("\n Digite o primeiro numero: ");  
            scanf (" %d", &n1);  
            printf (" Digite o segundo numero: ");  
            scanf (" %d", &n2);  
            res = n1 - n2; // Diminui dois numeros  
            printf (" o resultado é: %.2f", res);  
            break;  
              
        case 3:  
            // Multiplica  
            printf (" Voce escolheu: Multiplicação");  
            printf ("\n Digite o primeiro numero: ");  
            scanf (" %d", &n1);  
            printf (" Digite o segundo numero: ");  
            scanf (" %d", &n2);  
            res = n1 * n2; // multiplica ambos  
            printf (" O resultado é: %.2f", res);  
            break; 
              
        case 4:  
            // Divisão
            printf (" Voce escolheu: divisão");  
            printf ("\n Digite o primeiro numero ");  
            scanf (" %d", &n1);  
            printf (" Digite o segundo numero: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {  
                    printf (" \n BIP BOP ERROR ERROR, BOTE OUTRO DIVISOR SENÃO DEVEREI LIGAR AAUTODESTRUIÇÃO DO COMPUTADOR EM 3.2.1..... ");  
                    scanf ("%d", &n2);        
                }  
            res = n1 / n2; // divide dois n°  
            printf (" O resultado é: %.2f", res);  
            break;  
              
        case 5:  
            // Potencia
            printf (" Voce escolheu: Potencia"); 
            printf(" Digite o primeiro numero: ");
            scanf("%d", &base);
            printf("Mete o expoente: ");
            scanf("%d", &exp);

            while (exp != 0) {
            result *= base;
            --exp;
            }
            printf("Answer = %.0Lf", result); // faz a potenciação
            break;  
              
        case 6:  
            // Raiz quadrada grande!
            printf (" Voce escolheu: Raiz quadrada");  
            printf ("\n Digite o primeiro numero: ");  ++
            ++++++++++++++++++++
            scanf (" %d", &n1);  
              
            res = sqrt(n1); // sqrt para ter a raiz quadrada  
            printf (" A raiz quadrada de  %d é: %.2f", n1, res);  
            break; 
              
        case 7:  
            printf (" ATÉ LOGO AMIGO TENHA UM BOM DIA VIU");  
            exit(0);   
            break; 
              
        default:  
            printf(" AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA DEU ERRO PO!! ");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (op != 7);  
  
    return 0;        
}  