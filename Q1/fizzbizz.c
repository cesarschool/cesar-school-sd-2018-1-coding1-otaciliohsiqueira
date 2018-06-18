#include <stdio.h>
/**
 * Implemente a função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.
 * 
 * Função: void fizzBizz(int start, int end)
 * Input: inteiros (start < end) determinando os números de início e fim da contagem.
 * Output: utilize a função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
 * 
 */

void fizzBizz(int start, int end)
{

    printf("\nFizzBizz::START: %d, %d\n", start, end);
    for (int i = start; i < end; i ++) 
    {
        if ((i % 3 == 0) && (i % 5 == 0)) 
        {
            printf("FizzBizz\n");
        }
        else if (i % 3 == 0) 
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) 
        {
            printf("Bizz\n");
        }
        else 
        {
            printf("%d\n", i);
        }
    }
    printf("\nFizzBizz::END\n");
}


int main() 
{

    fizzBizz(1, 6);
    fizzBizz(1, 16);
    fizzBizz(1, 100);
    
    return 0;   
}
