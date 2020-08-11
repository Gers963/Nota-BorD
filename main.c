#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *pont_arq;
	  
    int quantidade, codigo, data, total, totall;
    float preco, valor, valor1;
    char cliente[100];
    
    printf("insira o nome do cliente: ");
      scanf("%s", &cliente);
      
	if (stricmp(cliente, "amaury")==0){
	while(codigo >= 1){
	 printf("\n(!!!insira o codigo do bordado!!!) \n\n\nPRINCESA APLIQUE       (1)\nLILICA APLIQUE (nova)  (2)\n");
     printf("LILICA APLIQUE (velha) (3)\nSO COROA               (4)\n");
	 printf("SO NOME LILICA         (5)\nLRI                    (6)\n");
	 printf("BORBOLETA              (7)\n\n\n\n");
	  printf("codigo: ");
	   scanf("%d", &codigo);
	   fflush(stdin);
		if(codigo == 1){
			preco = 0.90;
		}else if(codigo == 2){
			preco = 0.90;
		}else if(codigo == 3){
			preco = 0.90;
		}else if(codigo == 4){
			preco = 1.50;
		}else if(codigo == 5){
			preco = 1.60;
		}else if(codigo == 6){
			preco = 1.70;
		}else if(codigo == 7){
			preco = 1.80;
		}else if(codigo == 0){
			 printf("\no total a pagar sera de %.2f\n\n\n\n\n\n", valor1);
			   pont_arq = fopen("NOTAamaury.txt", "a");
			    fprintf(pont_arq, "valor total: %.2f\n", valor1);
			   fclose(pont_arq);
			   pont_arq = fopen("TOTAL.txt", "a");
			    fprintf(pont_arq, "total: %d\n", totall);
			  fclose(pont_arq);
			 printf("SALVO COM SUCESSO ");
			 system("pause"); 
			 return(0);
		}
		

	 do{
	 	printf("insira a quantidade de produzida: ");
	 	  scanf("%d", &quantidade);
	 	   fflush(stdin);
	 	total = (total+quantidade);
	 }while (quantidade >= 1);
	 totall = total;
	 valor = (total*preco);
	 valor1 = (valor1 + valor);
  }
   }else if(stricmp(cliente, "ivanildo")==0){
   	while(codigo >= 1){
	 printf("\n(!!!insira o codigo do bordado!!!) \n\n\nUFC/MMA       (1)\nPUMA (nova)   (2)\n\n");
	  printf("codigo: ");
	   scanf("%d", &codigo);
	   fflush(stdin);
		if(codigo == 1){
			preco = 0.30;
		}else if(codigo == 2){
			preco = 0.30;
		}else if(codigo == 0){
			 printf("\no total a pagar sera de %.2f\n\n\n\n\n\n", valor1);
			   pont_arq = fopen("NOTAivanildo.txt", "a");
			    fprintf(pont_arq, "valor total: %.2f\n", valor1);
			  fclose(pont_arq);
			   pont_arq = fopen("TOTAL.txt", "a");
			    fprintf(pont_arq, "total: %d\n", totall);
			  fclose(pont_arq);
			 printf("SALVO COM SUCESSO ");
			 system("pause"); 
			 return(0);
		}
		

	 do{
	 	printf("insira a quantidade de produzida: ");
	 	  scanf("%d", &quantidade);
	 	   fflush(stdin);
	 	total = (total+quantidade);
	 }while (quantidade >= 1);
     totall = total;
	 valor = (total*preco);
	 valor1 = (valor1 + valor);
   }
   }else if(stricmp(cliente, "mary")==0){
   	do{
	 	printf("insira a quantidade de produzida: ");
	 	  scanf("%d", &quantidade);
	 	   fflush(stdin);
	 	total = (total+quantidade);
	 }while (quantidade >= 1);
	 totall = total;
	 valor = (total*preco);
	 valor1 = (valor1 + valor);
	  pont_arq = fopen("TOTAL.txt", "a");
		fprintf(pont_arq, "total: %d\n", totall);
	  fclose(pont_arq);
   }

  return(0);
}
