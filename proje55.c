#include <stdio.h>
#include <stdlib.h>

int main() {
	
    double sayi,sonuc,sonuc2;
	
	printf("Sayiyi Girin: ");
	scanf("%lf",&sayi);
	
	sonuc=fabs(sayi);
	
	printf("Sonuc: %.lf",sonuc);
     
    printf("\n");
    
    sonuc2=log(sayi);

    printf("Sonuc Logaritma: %.4lf",sonuc2);



	//double sayi,sonuc;
	
	//printf("Sayiyi Girin: ");
	//scanf("%lf",&sayi);
	
	//sonuc=fabs(sayi);
	
	//printf("Sonuc: %.lf",sonuc);
	
	
	
	
	return 0;
}
