#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


double quad_cubo(double r, double *r3){ //função para calcular o quadrado e cubo de R

  double quad;
  
  quad = r * r;

  *r3 = quad * r;

  return quad;
  
}

int main(void){
  setlocale(LC_ALL, "Portuguese");
  
  double r, r3, quad_r; //variáveis
  
  printf("Escolha um valor para R: \n");
  scanf("%lf", &r);

  quad_r = quad_cubo(r, &r3); //chamada da função

  printf("O quadrado de R é: %.02lf\nO cubo de R é: %.02lf", quad_r, r3);

return 0;
  
}