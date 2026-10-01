#include <stdio.h>
#include <locale.h> 
main()
{
	setlocale(LC_ALL,"RUS");
	int a, b, c;
	puts("Перед вами знак, указывающий направление\n");
	puts("Введите значение датчиков traffic flow (a и b):\n");
	scanf("%d %d",&a,&b);
	c = (a%2==0 && b%2!=0) || (a % 2 != 0 && b % 2 == 0);
	printf("\nЗнак указывает направление (1 - Налево, 0 - Направо): %d\n", c);
	return 0;
}