#include <stdio.h>
#include <stdlib.h>

//algoritmo que le um conjunto de 20 números inteiros e mostra qual foi o maior e o menor valor fornecido
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

/* programa que verifica um valor recebido chamado idade e 
classifique-a como:
0 – 18 anos -> Criança
18 – 60 anos -> Adulto
Acima de 60 -> Idoso*/
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

//Le dois valores inteiros e apresenta a diferença do maior pelo menor.
void diferenca(){
  int a, b;
  printf("\nDigite 2 valores: ");
  scanf("%d %d", &a, &b);
  if (a > b)
    printf("A diferença entre os dois valores é igual a %d", a-b);
  else
    printf("A diferença entre os dois valores é igual a %d", b-a);
}

/* fluxograma que permita ler um número a partir 
do teclado, e apresentar a indicação de que é positivo, negativo ou nulo.
Descrição do problema:
Se N = 0 então N é nulo
Se N > 0 então N é positivo;
senão N é negativo*/
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

//Apresentar quantos anos são necessários para que Maria seja mais alta que João, sabendo que Maria tem 1,10 metros e cresce 3 cm por ano e João possui 1,50 e cresce 2 cm ao ano
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

//Imprimir na tela os números de 1 a 10, usando estrutura de repetição “do... until” (faça até).
void um_dez(){
  int i = 1;
  printf("\nPrintando os valores de 1 a 10...\n");
  do{
    printf("%d ", i);
    i++;
  } while(i<=10);
}

//algoritmo que lê a média anual de 50 alunos e calcula a média geral da turma.
void media(){
  double a, media = 0;
  printf("\nDigite todas as médias anuais dos 50 alunos: \n");
  for(int i=0; i<50; i++){
    printf("Média %d: ", i+1);
    scanf("%lf", &a);
    media += a;
  }
  media = media/50;
  printf("Media Geral da turma = %.2lf", media);
}

//Algoritmo que lê um número imaginado e depois pede para você adivinhar e 
void adivinha(){
  int a, acertou = 0, tentativas = 0, valor;
  printf("\nEscolha um valor: ");
  scanf("%d", &a);
  system("clear");

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

//algoritmo que efetua a soma de todos os números ímpares que são múltiplos de 3 e que se encontram no conjunto dos números de 1 até 500
void impares(){
  int i, soma=0;
  for(i=0; i< 500; i++){
    if (i%2==1)
      if(i%3==0)
        soma= soma + i;
  }
  printf("\nSoma total: %d", soma);
}

//algoritmo que le um conjunto de 20 números inteiros e mostra qual foi o maior e o menos valor fornecido
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

//somar dois números, e multiplicar o resultado pelo primeiro numero.
void soma_multiplicacao(){
  int a, b, multiplicacao;
  printf("\nDigite dois valores inteiros: ");
  scanf("%d %d", &a, &b);

  multiplicacao = (a+b)*a;
  printf("O resultado da soma e multiplicação é igual a %d", multiplicacao);
}

//algoritmo que calcula a area de um retangulo
void area_retangulo(){
  int base, altura, area;
  printf("\n\nDigite o valor da base e da altura do retangulo: ");
  scanf("%d %d", &base, &altura);

  printf("\nO valor da area do retangulo é igual a %d", base*altura);
}

//calcula a media de duas notas e imprime se o aluno foi aprovado ou não
void media_aprovado_reprovado(){
  double p1, p2, media;
  printf("\nInsira as duas notas: ");
  scanf("%lf %lf", &p1, &p2);
  media = (p1 + p2)/2;
  if(media>=5)
    printf("\nMedia = %.2lf\t-> Aluno aprovado!!", media);
  else
    printf("\nMedia = %.2lf\t-> Aluno reprovado", media);
}
int main(void) {
  int escolha = 0;
  printf("\nDigite a função desejada:\n-> Maior e menor entre 3 valores(1)\n-> Idade(2)\n-> Diferença(3)\n-> Positivo, Negativo ou Nulo(4)\n-> Altura(5)\n-> Um a dez(6)\n-> Media anual(7)\n-> Adivinhar(8)\n-> Soma dos ímpares(9)\n-> Maior e menor entre 20 valores(10)\n-> Soma e multiplicação(11)\n-> Area do retângulo(12)\n-> Media - aprovados ou reprovados(13)\n\nEscolha: ");
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
    case 11: soma_multiplicacao();
      break;
    case 12: area_retangulo();
      break;
    case 13:media_aprovado_reprovado();
      break;
    default: printf("Escolha um valor entre 1 e 10 e rode novamente o programa");
      break;
  }
  
}