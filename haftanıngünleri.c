#include <stdio.h>
#include <conio.h>

int main()

{	int gun = 0;
	
	printf("\n Lutfen Gun Numarasini Giriniz :");
	scanf("%d", &gun);
	
	if(gun == 1)
	printf("\n Pazartesi");
	
	else if(gun == 2)
	printf("\n Salı");
		
	else if(gun == 3)
	printf("\n Çarsamba");
		
	else if(gun == 4)
	printf("\n Perşembe");
		
	else if(gun == 5)
	printf("\n Cuma");
		
	else if(gun == 6)
	printf("\n Cumartesi");
		
	else if(gun == 7)
	printf("\n Pazar");
	
	else
	printf("Hatalı bir değer ");
	
	getch();
}
