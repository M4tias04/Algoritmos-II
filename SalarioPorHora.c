#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
	int totalhoras;
	float salhora,salmensal;
	
	printf("Digite o salário hora do funcionário:\n");
	scanf("%f",&salhora);
	printf("Digite o total de horas trabalhadas do funcionário:\n");
	scanf("%d",&totalhoras);
	salmensal=totalhoras*salhora;
	printf("\n\nO salário mensal é: %.2f", salmensal);
	
	return 0;
	
}