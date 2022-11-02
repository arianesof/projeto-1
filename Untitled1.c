/* com OK está pronto:
Utilizando os conceitos de vetor, implemente um algoritmo que:
inclua até 1000 usuários; ok 
edite um usuário;
exclua um usuário;
busque um usuário pelo email;
imprima todos os usuários cadastrados - ok case 5 pronto com bug;
faça backup dos usuários cadastrados;
faça restauração dos dados;

Dados do usuário:
Id (int) => preenchido automaticamente por números randômicos
Nome completo (string)
Email (string) => validação do campo: verificar se o caractere "@" aparece
Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Não declarar
Endereço (string)
Altura (double) => validação do campo: aceitar valores entre 1 e 2 m
Vacina (tomou a vacina? boolean)*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	int i=0, id[1000];
	char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][50], emailBusca[1000][50]; //tipo %s
	double altura[1000]; //%lf
	char vacina [1000][4]; //%s
	int menu;
	int x;
			
	do {
		printf("Digite a opcao desejada do menu:\n");
		printf ("1 - Cadastrar \n");
		printf ("2 - Editar \n");
		printf ("3 - Excluir \n");
		printf ("4 - Buscar pelo email \n");
		printf ("5 - Imprimir todos usuarios cadastrados \n");
		printf ("6 - Realizar backup \n");
		printf ("7 - Fechar o programa \n");
		fflush(stdin);
		scanf("%i", &menu);
				
	switch (menu){
		case 1:
	    id[i] = rand() %5000;
	    printf("Usuario:%d\n ID:%d\n", i +1,id[i]); // i+1 para saber em qual cadastro estar.
	    
		printf("Digite seu nome: \n");
		fflush(stdin);
		fgets(nome[i],50,stdin); //usa-se para uma string onde o usuario vai digitar nome composto;

		printf("Digite seu email: \n");
		scanf("%s", email[i]);
		getchar();
		
		if(strchr(email[i], '@') == 0){
			printf("Email invalido\n");
			
			printf("Forneca o email:");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
		
		}
		else{
			printf("Email valido\n");
		}
		
		printf(" Digite seu endereço: \n");
		fflush(stdin);
		fgets(endereco[i],50,stdin);
		
	printf("Digite seu sexo: feminino, masculino ou nao declarar: \n");
		fflush(stdin);
	 	scanf("%s", &sexo[i]);
		
		if(strcmp(sexo[i], "feminino")== 0 || strcmp(sexo[i], "masculino")==0 || strcmp(sexo[i], "nao declarar")==0){
			printf("Sexo valido\n");//não esta imprimindo valido mesmo a condição sendo verdadeira**arrumor**.
		}
		else{
			printf("Sexo invalido\n");
		}
					
		printf("Digite a altura: \n");
		scanf("%lf", &altura[i]);
		
		if(altura[i] > 1.00 && altura[i] < 2.00){
			printf("Altura valida\n");	
		 }
		 else{
		 	printf("Altura invalida\n");
		
		} 
				
		printf("Digite sim se voce foi vacinado ou nao: \n");
		fflush(stdin);
		scanf("%s", &vacina[i]);
					
		if (strcmp(vacina[i], "sim")==0){// o strcmp é utilizado para comparar uma string. "string comper"
			printf("voce tomou a vacina.\n");		
		}
		else{
			printf("voce nao tomou a vacina.\n");
		}
		i++;
		break;
		
		/*case 2: // arrumar
		int editar;
			
		printf("Deseja editar algum usuário 1 ou 0? ");
		fflush(stdin);
		scanf("%d", &editar);//editar [i]
	
		if(editar >= 1){
		int usuario, opcao;
		printf("Digite o index que você deseja editar: ");
		fflush(stdin);
		scanf("%d", &usuario); 

		printf("Qual informacao voce deseja alterar ?\n1: Nome\n2: Email\n3: Sexo\n4: Endereco\n5: Altura\n6: Vacina\n\nDigite o numero: ");
        fflush(stdin);
		scanf("%d", &opcao);}
		break;
		
		case 3:
		int excluir; */
		
		case 4: //buscar por email
	
		printf("\nDigite o email que deseja buscar: ");
    	scanf("%s", &emailBusca);
    	for(i=0;i<=1000;i++){
    	
        if(strcmp(email[i], emailBusca[i])==0){
        printf("\ID:%d\n Nome:%s\n Email:%s\n Endereco:%s\n Sexo:%s\n Altura:%.2lf\n Vacinado:%s\n", id[x], nome[x], email[x], endereco [x], sexo[x], altura[x], vacina[x]);
			fflush(stdin);
    }
	}
	break;
		
		case 5: // para imprimir usuarios cadastrados // 
			printf("Usuarios cadastrados:\n");
			
			for (x=0; x<i; x++){
			printf("ID:%d\n Nome:%s\n Email:%s\n Endereco:%s\n Sexo:%s\n Altura:%.2lf\n Vacinado:%s\n", id[x], nome[x], email[x], endereco [x], sexo[x], altura[x], vacina[x]);
			fflush(stdin);
		}
			break;
		}
	}while (menu!=7);
		
	return 0;	
}
