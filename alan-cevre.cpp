#include <stdio.h>
#include <conio.h>

void main()
{
	float ycap,double alan, double cevre;
	
	printf("Dairenin alanını ve yarıçapını giriniz: ");
	scanf("%f", &ycap);
	
	alan  = 3.14 * ycap *ycap;
	cevre = 2 * 3.14 * ycap;

	printf("\n Dairenin Alani : %f", alan);
	printf("\n Dairenin Cevresi : %f", cevre);
	getch();
}
