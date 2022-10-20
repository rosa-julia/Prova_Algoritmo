#include <stdio.h>
#include <math.h>

int main(){
	char questao;
	char nomeObra[50];
	float a , b, c, seno, hip; 
	int ano, mesInicio, mesTermino, codigo, execucao;
	printf(" Disciplina: Algoritmo e Programacao \n Professora: Joyce Siqueira \n Aluna: Julia Cerqueira Brito Rosa \n Matricula: UC22200243 Curso: Analise e Desenvolvimento de Sistemas \n Repositorio: https://github.com/rosa-julia/Prova_Algoritmo \n Dev C++ \n");
	
	printf("Digite a letra da questao que sera executada: \n");
	scanf("%s", &questao);
	switch (questao){
		
		case 'a':
		printf("Insira os valores do cateto oposto e do cateto adjacente, respectivamente: \n");
		scanf("%f%f", &b, &c);
		seno = b/a;
		 a = pow (a,2);
		 b = (b*b); //coloquei assim para nao interferir no seno
		 c = pow (c,2);
		 a = b + c;
		 a = sqrt(a);
		 seno = sqrt (b)/a;
	
		 printf("Valor da hipotenusa: %.3f \n", a);
		 printf("Valor do seno: %.3f", seno);
		break;
		
		case 'b':
		printf ("Opcao invalida! \n");
		
		break;
		
		case 'c':
		printf("Insira o nome da obra \n");
		fflush(stdin);
		fgets(nomeObra,50,stdin);
		printf("Insira o mes de inicio \n");
		scanf("%d", &mesInicio);
		printf("Insira o mes de termino \n");
		scanf("%d", &mesTermino);
		printf("Insira o codigo da situacao \n");
		scanf("%d", &codigo);
		
		execucao = mesTermino - mesInicio;
		
		printf("Nome da obra:%s, Situacao:%d, Tempo de Execucao:%d, \n", nomeObra, codigo, execucao);
		if (codigo==1)
		printf("Obra Concluída");
		else if (codigo==2)
		printf("Problemas no projeto");
		else if (codigo==3)
		printf("Atraso nos repasses financeiros");
		else if (codigo==4)
		printf("Greve dos trabalhadores");
		else if (codigo==5)
		printf("Falta de materiais");
		else if (codigo==6)
		printf("Falta de equipamentos");
		
		break;
	}
}
