#include<stdio.h>
void main(){
	int idade;
	printf("Digite sua idade por gentileza: ");
	scanf("%d",&idade);

	if (idade<18){
		printf("Você é menor de idade");
	}
	else{
		printf("Você é maior de idade");
	}
}
