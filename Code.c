#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define T 51
char verifica(char nome[]);//FAZER
int main () {
	char nome[T], aux;
	int i, Verificador=1, simb=0, n, letra=0, dig=0;
	printf("Digite o seu nome\n");
	for(i=0;i==i;i++){
		if(i<T-1){
			nome[i]=getche();
			if(nome[i]==13){
				nome[i]='\0';
				break;
			}
			if(nome[i]==' ')
				simb=simb-1;
			n=isalpha(nome[i]);
			if(n!=0)
				letra=letra+1;
			else{
				n=isdigit(nome[i]);
				if(n!=0)
					dig=dig+1;
				else
					simb=simb+1;
			}
		}
		else{
			aux=getch();
			if(aux==13)
				printf("\n");
				break;
		}
	}
	if(dig==0&&simb==0){
		nome[T-1]='\0';
		printf("\nOla %s, BEM VINDO!\n",nome);
	}
	else
		printf("Nome INVALIDO\n");
	system("pause");
	return 0;
}
