#include <stdio.h>
#include <stdlib.h>

void main (){

    float salario=0, impostos=0, sal_impostos=0, aumento=0;
    int id, tempo=0;

	printf("\n--------------------------------------");
	printf ("\nID -       CARGOS         -  BENEFICIO");	
	printf ("\n1  - Analista de sistemas - R$ 7500.00");
	printf ("\n2  - Programador          - R$ 5000.00");
	printf ("\n3  - Operador de sistemas - R$ 2000.00");	
	printf ("\n4  - Gerente de Projetos  - R$ 9000.00");	
	printf ("\n5  - Tecnico de Suporte   - R$ 3500.00");	
	printf("\n--------------------------------------\n");
    
	printf("\nInforme Codigo do Cargo: ");
	scanf("%i",&id);	
	fflush(stdin);
    	
	switch (id){
		
		case 1: 
		
        salario = (7500 + (7500 * 0.10)) + 100;
        aumento = ((7500 * 0.10) + 100);
        
		printf("\nInforme os anos de Casa [em anos]: ");
	    scanf("%i",&tempo);	
	    fflush(stdin);
	    
	    if (tempo > 5) {
                 salario + 500;
                 }
     
        sal_impostos = salario - (salario * 0.05);
        impostos = (7500 * 0.05);
		
	printf("\n--------------------------------------");
	printf("\n          Resumo Completo");
	printf("\n--------------------------------------\n");
    printf("Cargo: Analista de sistemas\n");
	printf("Salario Original: 7500.00");	
	printf("\nTempo de Casa [anos]: %i", tempo);
	printf("\nAumento: %.2f", aumento);
	
	if (tempo > 5) {
        printf("\nBonus: 500 R$"); }
    else {
    	printf("\nBonus: Nao Aplicavel");
     }
		
	printf("\nImpostos: %.2f", impostos);
	printf("\nSalario Liquido: %.2f", sal_impostos);
	printf("\n-------------------------------------\n\n");  
		break;
		
		//Fim das informações do cargo
		
		case 2: 
		
        salario = (5000 + (5000 * 0.15)) + 200;
        aumento = ((5000 * 0.15) + 200);
        
		printf("\nInforme os anos de Casa: ");
	    scanf("%i",&tempo);	
	    fflush(stdin);
	    
	    if (tempo > 3) {
                 salario + 300;
                 }
     
        sal_impostos = salario - (salario * 0.08);
        impostos = (5000 * 0.08);
		
	printf("\n--------------------------------------");
	printf("\n          Resumo Completo");
	printf("\n--------------------------------------\n");
    printf("Cargo: Programador\n");
	printf("Salario Original: 5000.00");	
	printf("\nTempo de Casa [anos]: %i", tempo);
	printf("\nAumento: %.2f", aumento);
	
	if (tempo > 3) {
        printf("\nBonus: 300 R$"); }
    else {
    	printf("\nBonus: Nao Aplicavel");
     }
		
	printf("\nImpostos: %.2f", impostos);
	printf("\nSalario Liquido: %.2f", sal_impostos);
	printf("\n-------------------------------------\n\n");  
		break;
		
		//Fim das informações do cargo
		
		case 3: 
		
        salario = (2000 + (2000 * 0.25)) + 50;
        aumento = ((2000 * 0.25) + 50);
        
		printf("\nInforme os anos de Casa: ");
	    scanf("%i",&tempo);	
	    fflush(stdin);
	    
	    if (tempo > 2) {
                 salario + 200;
                 }
     
        sal_impostos = salario - (salario * 0.07);
        impostos = (2000 * 0.07);
		
	printf("\n--------------------------------------");
	printf("\n          Resumo Completo");
	printf("\n--------------------------------------\n");
    printf("Cargo: Operador de sistemas\n");
	printf("Salario Original: 2000.00");	
	printf("\nTempo de Casa [anos]: %i", tempo);
	printf("\nAumento: %.2f", aumento);
	
	if (tempo > 2) {
        printf("\nBonus: 200 R$"); }
    else {
    	printf("\nBonus: Nao Aplicavel");
     }
		
	printf("\nImpostos: %.2f", impostos);
	printf("\nSalario Liquido: %.2f", sal_impostos);
	printf("\n-------------------------------------\n\n");  
		break;
		
		//Fim das informações do cargo
		
		case 4: 
		
        salario = (9000 + (9000 * 0.20)) + 150;
        aumento = ((9000 * 0.20) + 150);
        
		printf("\nInforme os anos de Casa: ");
	    scanf("%i",&tempo);	
	    fflush(stdin);
	    
	    if (tempo > 7) {
                 salario + 700;
                 }
     
        sal_impostos = salario - (salario * 0.10);
        impostos = (9000 * 0.10);
		
	printf("\n--------------------------------------");
	printf("\n          Resumo Completo");
	printf("\n--------------------------------------\n");
    printf("Cargo: Gerente de Projetos\n");
	printf("Salario Original: 9000.00");	
	printf("\nTempo de Casa [anos]: %i", tempo);
	printf("\nAumento: %.2f", aumento);
	
	if (tempo > 7) {
        printf("\nBonus: 700 R$"); }
    else {
    	printf("\nBonus: Nao Aplicavel");
     }
		
	printf("\nImpostos: %.2f", impostos);
	printf("\nSalario Liquido: %.2f", sal_impostos);
	printf("\n-------------------------------------\n\n");  
		break;
		
		//Fim das informações do cargo
		
 		case 5: 
		
        salario = (3500 + (3500 * 0.18)) + 80;
        aumento = ((3500 * 0.18) + 80);
        
		printf("\nInforme os anos de Casa: ");
	    scanf("%i",&tempo);	
	    fflush(stdin);
	    
	    if (tempo > 1) {
                 salario + 100;
                 }
     
        sal_impostos = salario - (salario * 0.06);
        impostos = (3500 * 0.06);
		
	printf("\n--------------------------------------");
	printf("\n          Resumo Completo");
	printf("\n--------------------------------------\n");
    printf("Cargo: Tecnico de Suporte\n");
	printf("Salario Original: 3500.00");	
	printf("\nTempo de Casa [anos]: %i", tempo);
	printf("\nAumento: %.2f", aumento);
	
	if (tempo > 1) {
        printf("\nBonus: 100 R$"); }
    else {
    	printf("\nBonus: Nao Aplicavel");
     }
		
	printf("\nImpostos: %.2f", impostos);
	printf("\nSalario Liquido: %.2f", sal_impostos);
	printf("\n-------------------------------------\n\n");  
		break;
		
		default:
		printf("\n-------------------------------------\n");
		printf("Numero Invalido - Digite um ID valido");
		printf("\n-------------------------------------\n");
	    printf("\n");		
        system("pause");
		exit(main);
	    }
    	
  getchar();
}
