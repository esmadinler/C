#include <stdio.h>
#include <conio.h>
 
main()
{
    int vize, final;
	  float ortalama;
Bsl:
    printf("vize-final")	;
	
Dvm:   
    printf("Vize notunu giriniz: "); scanf("%d", &vize);
    printf("Final notunu giriniz: "); scanf("%d", &final);
   
Hsp:
	ortalama=(vize*0.40)+(final*0.60);
	printf("\n ortalama not=%f",ortalama);
	if(ortalama<50){printf("\t kalır,başrısız"); goto Son;}
	else if (ortalama=>50 and ortalama<60){printf("\t borçlu geçer"); goto Son;}
	else if(ortalama=>60){printf("\t geçer,başarılı"); goto Son;}
	else {printf("\n hesaplama hatası var");goto Son;}
Son:
	printf("\n\n program bitti"); getch();
}
