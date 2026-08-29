#include <stdio.h>

int main()
{
   float preco, valor_total, valor_parcelado;
   int quantidade, opcao_cartao, parcelas;

   printf("Informe o preço do produto: ");
   scanf("%f" ,&preco);

   printf("Informe a quantidade comprada: ");
   scanf("%d" ,&quantidade);

   printf("Você possui o cartão da loja?\n");
   printf("1 = Sim | 2 = Não\nDigite sua opção: ");
   scanf("%d" ,opcao_cartao);

   printf("Informe a quantidade desejada de parcelas: ");
   scanf("%d" ,parcelas);

   valor_total = preco * quantidade;
   printf("O valor total da compra é: R$%.2f" ,valor_total);

   valor_parcelado = valor_total / parcelas;
   printf("Parcelando a compra em %d vezes, o valor de cada parcela fica no total de: R$%.2f" ,parcelas ,valor_parcelado);

   if (quantidade % 2 == 0) {
	printf("A quantidade comprada de %d é par." ,quantidade);
   }
   else {
	printf("A quantidade comprada de %d é ímpar." ,quantidade);
   }

   return 0;
}