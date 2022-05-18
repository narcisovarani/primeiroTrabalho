#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Parede {
	
	float altura;
	float largura;
	int qntPorta;
	int qtdJanela;
		 		
}parede;


struct Comodo {
	
	int id;
	struct Parede paredes[4];
	
}comodo;

void clearscreen (){
	
	system ("@cls || clear");
}

bool calculaAreaMinima (float altura, float largura){
	
	float area = altura * largura;
	
	if (area >=1 && area <=15){
		return true;
	}
	
	else {return false;
	}
}
bool areaPortasJanelas (struct Parede parede){
	float areaParede = (parede.altura * parede.largura);
	parede.qntPorta 
	
	
}

int main (){
	
	struct Comodo comodo;
	int i = 0;
	
	while (i < 4)  {

		printf ("\nParede %d\n--------------------\n", i+1);
		printf ("Altura: ");
		scanf ("%f",&comodo.paredes[i].altura);
		
		printf ("Largura: ");
		scanf ("%f",&comodo.paredes[i].largura);
		
		printf ("Quantidade de Portas (0 senao houver): ");
		scanf ("%f",&comodo.paredes[i].qntPorta);
		printf ("Quantidade de Janelas (0 senao houver): ");
		scanf ("%f",&comodo.paredes[i].qtdJanela);
		
		
		if (calculaAreaMinima(comodo.paredes[i].altura, comodo.paredes[i].largura)){
		i++;
		
		
		}
					
		
		else {
		
		clearscreen();
		
			printf ("Erro: Area da parede tem que estar entre 1 e 15 metros quadrados");
	
		}
		
		
		
	}
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	

