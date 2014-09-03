#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

//Função para cálculo da média aritmetica entre dois números
int mediaAritmetica(){
	float num1, num2, resultado;
	printf(" ------------------------------------------\n");
	printf("|  1 - Media entre números digitados       |\n");
	printf(" ------------------------------------------\n");
    //Entrada
	printf("Digite o primeiros número: ");
	scanf("%f", &num1);
	printf("Digite o primeiros número: ");
	scanf("%f", &num2);
	//Processamento
	resultado = ((num1 + num2) / 2 );
	//Saída
	printf("\n\nMédia: %.1f \n\n", resultado);
	printf("----------------------------------------------------\n");
    printf("Aperte qualquer tecla para voltar ao menu principal.");
}

//Função para calcular a diferença do maior e menor
int diferencaMaiorMenor(){
	int num1, num2, diferenca;
	printf(" ------------------------------------------\n");
	printf("|  2 - Diferença do maior pelo menor       |\n");	
	printf(" ------------------------------------------\n");
	//Entrada
	printf("Digite o primeiros número: ");
	scanf("%d", &num1);
	printf("Digite o primeiros número: ");
	scanf("%d", &num2);
	//Processamento
	if (num1 > num2){
		diferenca = (num1 - num2);
	}else
	  if (num2 > num1){
	  	diferenca = (num2 - num1);
	  }

	//Saída
	printf("\n\nDifença do maior pelo menor: %d \n\n", diferenca);
	
	printf("----------------------------------------------------\n");
    printf("Aperte qualquer tecla para voltar ao menu principal.");
}

//Função para calcular produto entre dois números
int produtoNumeros(){
	float num1, num2, produto;
	printf(" ------------------------------------------\n");
	printf("|  3 - Produto entre os números digitados  |\n");
	printf(" ------------------------------------------\n");
	//Entrada
	printf("Digite o primeiros número: ");
	scanf("%f", &num1);
	printf("Digite o primeiros número: ");
	scanf("%f", &num2);
	//Processamento
	produto = (num1 * num2);
	//Saída
	printf("\n\nProduto dos dois números: %2.f \n\n", produto);
	
	printf("----------------------------------------------------\n");
    printf("Aperte qualquer tecla para voltar ao menu principal.");
}

//Divisão do primeiro pelo segundo
int divisaoPrimeiroSegundo(){
	float num1, num2, divisao;
	printf(" ------------------------------------------\n");
	printf("|  4 - Divisão do primeiro pelo segundo    |\n");
	printf(" ------------------------------------------\n");
	//Entrada
	printf("Digite o primeiros número: ");
	scanf("%f", &num1);
	printf("Digite o primeiros número: ");
	scanf("%f", &num2);
	//Processamento
	divisao = (num1 / num2);
	//Saída
	printf("\n\nProduto dos dois números: %.2f \n\n", divisao);
	
	printf("----------------------------------------------------\n");
    printf("Aperte qualquer tecla para voltar ao menu principal.");

}

int menu(){	
	int opcaoEscolhida;

	//Menu de escolha para usuário
	while ((opcaoEscolhida != 1) && (opcaoEscolhida != 2) && (opcaoEscolhida != 3) && (opcaoEscolhida != 4)){
	printf(" ------------------------------------------\n");
	printf("|  1 - Media entre números digitados       |\n");
	printf("|  2 - Diferença do maior pelo menor       |\n");
	printf("|  3 - Produto entre os números digitados  |\n");
	printf("|  4 - Divisão do primeiro pelo segundo    |\n");
	printf("|  5 - Sair da aplicação                   |\n");
	printf(" ------------------------------------------\n");
	printf("\n\nDigite uma das opções acima: ");	
	scanf("%d", &opcaoEscolhida);
	system("cls");
	
	//Opção escolhida pelo usuário
	switch(opcaoEscolhida)
	  {
		case 1:
		mediaAritmetica();
		getch();
		system("cls");
		menu();
		break;
		case 2:
		diferencaMaiorMenor();
		getch();
		system("cls");
		menu();
		break;
		case 3:
		produtoNumeros();
		getch();
		system("cls");
		menu();
		break;
		case 4:
		divisaoPrimeiroSegundo();
		getch();
		system("cls");
		menu();
		break;
		case 5:
			return 0;
			break;
	  }
	}
}

main (){
	setlocale(LC_ALL, "Portuguese");
	menu();
	printf("\n\n\nDesenvolvido por Leonardo Marcão Florentino.");	
}
