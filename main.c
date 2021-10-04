#include <stdio.h>

void maior_menor(){
  int maior = 0, menor = 0, a[3];
  printf("\nEscolha 3 valores: ");
  for(int i = 0; i<3; i++){
    scanf("%d", &a[i]);
    if(maior < a[i])
      maior = a[i];
  }
  menor = a[1];
  for(int i = 0; i<3; i++){
    if(a[i] < menor)
      menor = a[i];
  }
  printf("Maior = %d\nMenor = %d", maior, menor);
}

void idade(){
  int idade;
  printf("\nDigite uma idade: ");
  scanf("%d", &idade);
  if(idade >= 0 && idade < 18)
    printf("É uma criança");
  else if(idade >= 18 && idade <=60)
    printf("É um adulto");
  else
    printf("É um idoso");
}

void diferenca(){
  int a, b;
  printf("\nDigite 2 valores: ");
  scanf("%d %d", &a, &b);
  if (a > b)
    printf("A diferença entre os dois valores é igual a %d", a-b);
  else
    printf("A diferença entre os dois valores é igual a %d", b-a);
}

void pos_neg_nulo(){
  int N;
  printf("\nDigite um valor positivo, negativo ou nulo: ");
  scanf("%d", &N);
  if(N==0)
    printf("Valor Nulo");
  else if(N>0)
    printf("Valor positivo");
  else
    printf("Valor negativo");
}
void altura(){
  double maria = 1.10;
  double joao = 1.50;
  int anos = 0;
  while (maria<joao){
    maria += 0.03;
    joao += 0.02;
    anos++;
  }
  printf("\nPrecisa de %d anos para que Maria seja maior que João", anos);
}

void um_dez(){
  int i = 1;
  do{
    printf("%d - ", i);
    i++;
  } while(i<=10);
}

void media(){
  double a[50], media = 0;
  for(int i=0; i<50; i++){
    scanf("%lf", &a[i]);
    media += a[i];
  }
  media = media/50;
  printf("Media = %lf", media);
}

void adivinha(){
  int a, acertou = 0, tentativas = 0, valor;
  printf("\nEscolha um valor: ");
  scanf("%d", &a);

  printf("\nAgora, tente adivinhar: ");
  while(acertou != 1){
    scanf("%d", &valor);
    if(valor > a){
      printf("\nO chute foi alto. Tente um número menor\n");
      tentativas++;
    }
    else if (valor < a){
      printf("\nO chute foi baixo. Tente um número maior\n");
      tentativas++;
    }
    else{
      printf("Acertou!!!!");
      acertou = 1;
    }
  }
  printf("\nQuantidade de tentativas: %d", tentativas);
}

void impares(){
  int i, soma=0;
  for(i=0; i< 500; i++){
    if (i%2==1)
      if(i%3==0)
        soma= soma + i;
  }
  printf("\nSoma total: %d", soma);
}

void maior_vinte(){
  int a[20], maior = 0, menor = 0;
  printf("Escolha 20 números inteiros: ");
  for(int i = 0; i<20; i++){
    scanf("%d", &a[i]);
    if(maior < a[i])
      maior = a[i];
  }
  menor = a[1];
  for(int i = 0; i<20; i++){
    if(a[i] < menor)
      menor = a[i];
  }
  printf("Maior = %d\nMenor = %d", maior, menor);
}

int main(void) {
  int escolha = 0;
  printf("Digite a função desejada:\nMaior e menor entre 3 valores(1)\nIdade(2)\nDiferença(3)\nPositivo, Negativo ou Nulo(4)\nAltura(5)\nUm a dez(6)\nMedia(7)\nAdivinhar(8)\nSoma dos ímpares(9)\nMaior e menor entre 20 valores(10)\n");
  scanf("%d", &escolha);
  switch(escolha){
    case 1: maior_menor();
      break;
    case 2: idade();
      break;
    case 3: diferenca();
      break;
    case 4: pos_neg_nulo();
      break;
    case 5: altura();
      break;
    case 6: um_dez();
      break;
    case 7: media();
      break;
    case 8: adivinha();
      break;
    case 9: impares();
      break;
    case 10: maior_vinte();
      break;
    default: printf("Escolha um valor entre 1 e 10 e rode novamente o programa");
      break;
  }
  
}