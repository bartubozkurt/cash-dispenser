#include<stdio.h>
#define TRUE 1
int main () {
	int islem,islem2;
	int bakiye =1000;
	int tutar;
	while (TRUE) {
		printf("Islemler\n1:para cekme\n2:para yatirma\n3:Havale yapma\n4:Bakiye Sorgulama\n5:Kart iade:\n6:Odemeler\n\n\n");

	printf("Islem seciniz:");
	scanf("%d",&islem);


	switch(islem) {

		case 1:

			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilecek tutar:");
			scanf("%d", &tutar);
			if (tutar > bakiye) {

			printf("Bakiyeniz yetersiz\n");

			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d\n",bakiye);
			break;

	    case 2:

			printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatirilacak tutar:");
			scanf("%d",&tutar);


			bakiye += tutar;
			printf("Bakiyeniz: %d\n",bakiye);
			break;

		case 3:
		printf("Bakiyeniz: %d\n",bakiye);
		printf("Havale yap�lacak tutar:");
		scanf("%d",&tutar);

		if (tutar > bakiye) {

			printf("Bakiyeniz yetersiz\n");


		}
		bakiye -= tutar;
		printf("Bakiyeniz %d\n",bakiye);
		break;

		case 4:
		printf("Bakiyeniz: %d\n",bakiye);
				break;

		case 5:

			printf("Kart iade edildi. \n");
			break;

		case 6:
			printf("odemeler:\n");
			scanf("%d",&islem2);

		switch 	(islem2){

			case 1:
			printf("Yurt Taksidi");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("Bakiyeniz Yetersiz!\n");
				break;
			}
			bakiye-=tutar;
			printf("%d\n",bakiye);
			break;
		}
	    default:

		printf("Bilinmeyen islem\n");
		break;
	}
}
	return 0;
}
