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

bool proporcaoArea (struct Parede parede){
	float area = ( parede.altura*parede.largura) /2;
	float totalPortas = 1.52* parede.qntPorta;
	float totalJanelas = 2.4* parede.qtdJanela;
	
//	printf("Metade da area da parede:  %.2f", area);
//	printf( "total das portas: %.2f",  totalPortas);
//	printf("total das janelas: %.2f",totalJanelas);
	
	
	if ((totalPortas+totalJanelas)<=area) {
		return true;
	}
	else {
		return false;
	}
}

bool alturaMinima( float altura, int qtdPortas){
	
	if ((qtdPortas  > 0 && (altura-0.3) >= 1.9) || qtdPortas == 0) {
		return true;
	}
	else {
		return false;
	}
	
}

int quantidadeDeTinta (struct Comodo comodo){
	float altura = comodo.paredes[0].altura + comodo.paredes[1].altura + comodo.paredes[2].altura + comodo.paredes[3].altura;
	float largura = comodo.paredes[0].largura + comodo.paredes[1].largura + comodo.paredes[2].altura + comodo.paredes[3].altura;
	float janelas = comodo.paredes[0].qtdJanela + comodo.paredes[1].qtdJanela + comodo.paredes[2].qtdJanela + comodo.paredes[3].qtdJanela;
	float portas = comodo.paredes[0].qntPorta + comodo.paredes[1].qntPorta + comodo.paredes[2].qntPorta + comodo.paredes[3].qntPorta;

    return (((altura*largura) - ((janelas * 2.4) + (portas * 1.52))) / 5);
    
}

void CaculaLatas(struct Comodo comodo) {
    float latas[4] = {18, 3.6, 2.5, 0.5};
    int tintaNecessaria = 19;
    int i = 0;
    int cont = 0;
    
    printf("Voce pode comprar essas latas\n\n");
    
    while (i <= 3){
        while(tintaNecessaria >= latas[i]) {
            tintaNecessaria = tintaNecessaria - latas[i];
            cont++;
        }
        if (cont > 0) {
            printf("%d latas de %.2f litros\n", cont, latas[i]);
            
        }
        else {
            cont = 0;
        }
        
        i++;
	}
    
    
    
}

int main (){
	
	struct Comodo comodo;
	int i = 0;
	
	/*while (i < 4)  {

		printf ("\nParede %d\n--------------------\n", i+1);
		printf ("Altura: ");
		scanf ("%f",&comodo.paredes[i].altura);
		
		printf ("Largura: ");
		scanf ("%f",&comodo.paredes[i].largura);
		
		printf ("Quantidade de Portas (0 senao houver): ");
		scanf ("%d",&comodo.paredes[i].qntPorta);
		printf ("Quantidade de Janelas (0 senao houver): ");
		scanf ("%d",&comodo.paredes[i].qtdJanela);
		
		
		if (calculaAreaMinima(comodo.paredes[i].altura, comodo.paredes[i].largura)){
			if(proporcaoArea(comodo.paredes[i])) {
				if( alturaMinima(comodo.paredes[i].altura,comodo.paredes[i].qntPorta)) {
					i++;
				}	
				
				else {
					clearscreen();
			
					printf ("Erro: a parede tem que ter pelo menos 30 cm a mais do que a porta");
					
				}
			}
			else {
				clearscreen();
			
				printf ("Erro: soma da area total de janelas e portas nao pode ultrapassar metade da area da parede");	
			}
		}		
		else {
			clearscreen();
		
			printf ("Erro: Area da parede tem que estar entre 1 e 15 metros quadrados");
	
		}
	}*/
	
	CaculaLatas(comodo);
}
