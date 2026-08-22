//Sistema para cadastrar produto.
#include <stdio.h>

int main()
{
  int quantidade = 35;
  float preco = 89.90;
  char categoria = 'A';

  printf("Produto: Mouse Gamer\n");
  printf("Preco: R$%.2f\n",preco);
  printf("Estoque: %d\n" ,quantidade);
  printf("Classe: %c\n" ,categoria);

  return 0;
}
//Esse tipo de programa já se aproxima de sistemas reais.