#include <stdio.h> //biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de aloocaçao de espaço de memoria
#include <locale.h> //biblioteca de alocaçoes de texto por regiao
#include <string.h> //biblioteca responsavel  por cuidar das string

int registro()
{
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
    printf("digite o cpf a ser cadastrado: ");
    scanf("%s", cpf);
    
    strcpy(arquivo, cpf);//responsavel por copiar os valores das string
    
    FILE *file;//cria o arquivo
    file = fopen(arquivo, "w");//cria o arquivo
    fprintf(file,cpf);//salvo o valor  da variavel
    fclose(file);//fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("digite o nome a ser cadastrado: ");
   scanf("%s",nome);
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
   printf("digite o sobrenome a ser cadastrado: ");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("digite o cargo a ser cadastrado: ");
   scanf("%s",cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
   
   system("pause");
   
   
   
   

}
    


int consulta()
{
	 setlocale(LC_ALL, "prtuguese");//defininco lingiuagem
	
    char cpf[40];
    char conteudo[200];
    
    printf("digite o cpf a ser consultado");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("nao foi possivel abrir o arquivo,nao localizado\n");
    	
	}
	
	while(fgets(conteudo, 200, file)!= NULL);
	{
		printf("\nessas sao as informacoes do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
    system("pause");
	
	
	
}


int deletar()
{
	printf("voce escolher deletar nomes\n");
	system("pause");
}



int main()
{

    
    
	int opcao=0;//definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	   system("cls");
	
	
    setlocale(LC_ALL, "prtuguese");//defininco lingiuagem
	
	printf("###cartorio da ebac###\n\n");//inicio do menu
    printf("ecolha a opcao desejada do menu:\n\n");
    printf("\t1 - resgistrar nomes\n");   
    printf("\t2 - conultar nomes\n");
    printf("\t3 -deletar nomes\n\n");
    printf("\t4 -sair do sistema\n\n");
    printf("opcao:");//dim do menu
	
	    
    scanf("%d", &opcao); //armazendo a opcao do usuario   
	
	system("cls");
	
	
	switch(opcao)
	{
		case 1:
        registro();
		break;
		
		case 2:
	    consulta();
		break;
		
		case 3:
	    deletar();
		break;
		
		case 4:
		printf("obrigado por utilizar o sistema!\n");
		return 0;
		break;
		
		default:
		printf("essa opcao nao esta disponivel\n");
		system("pause");	
			
			
	}
	
     

   
	
	

		
		
		

  
  }


  
}


		
	
		
	
	
	
	            

   
     
	
    
   
   
   
   
    

