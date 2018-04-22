#include <stdio.h>
#include <conio.h>
#include <string.h>

	struct giris{
		char isim[21];
		char soyisim[21];
		char numara[11];
		char puan[200];
		char yoklama[50];
		};
void menu();
int notekle();
int notbilgisi();
int devamsizlik();
int devamsizlikekle();
int dersprogram();

void menu(){
	printf("                ALI VELI I.O.O'na HOSGELDINIZ              ");
	printf("                                                        		\n");
	printf("  OGRENCI GIRISI				OGRETMEN GIRISI             \n");
	printf("	1. NOT BILGISI				4.NOT GIRISI	            \n");
	printf("	2. DEVAMSIZLIK BILGISI			5.YOKLAMA GIRISI			\n");
	printf("	3. DERS PROGRAMI											\n");
	printf(" 							6. CIKIS 							\n");
	printf("----------------------------------------------------------------\n");
	}
	
	int notekle(){
		struct giris yenigiris;
		FILE *notveritabani;
	
	notveritabani=fopen("C:\\Users\\USER\\Desktop\\fuzuli\\c++ workouts\\ramazan\\notveritabani.txt","a");
	
	printf("\n\n");
	printf("isim giriniz: ");
	scanf("%s",yenigiris.isim);	
	printf("soyisim giriniz: ");
	scanf("%s",yenigiris.soyisim);
	printf("numara giriniz: ");
	scanf("%s",yenigiris.numara);
	printf("puan girisi yapiniz: ");
	scanf("%s",yenigiris.puan);
	fprintf(notveritabani,"\n%s\t%s\t%s\t%s",yenigiris.isim,yenigiris.soyisim,yenigiris.numara,yenigiris.puan);
	
	fclose(notveritabani);
	return 0;
	}
		int notbilgisi(){
		FILE *notveritabani;
		char veri[500];
		
		notveritabani=fopen("C:\\Users\\USER\\Desktop\\fuzuli\\c++ workouts\\ramazan\\notveritabani.txt","r+");
		printf("\n");
		fread(veri,sizeof(char),1000,notveritabani);
		puts(veri);
		
	
fclose(notveritabani);

}
  
int devamsizlikekle(){

	struct giris yenigiris;
	FILE *devamsizlik;
	
	devamsizlik=fopen("C:\\Users\\USER\\Desktop\\fuzuli\\c++ workouts\\ramazan\\devamsizlik.txt","a");
	
	printf("\n\n");
	printf("isim giriniz:");
	scanf("%s",yenigiris.isim);	
	printf("soyisim giriniz: ");
	scanf("%s",yenigiris.soyisim);
	printf("numara giriniz: ");
	scanf("%s",yenigiris.numara);
	printf("devamsizligi giriniz: ");
	scanf("%s",yenigiris.yoklama);
	fprintf(devamsizlik,"\n%s\t%s\t%s\t%s",yenigiris.isim,yenigiris.soyisim,yenigiris.numara,yenigiris.yoklama);
	
	fclose(devamsizlik);
}
int devamsizlik(){
	FILE *devamsizlik;
		char yok[500];
		
		devamsizlik=fopen("C:\\Users\\USER\\Desktop\\fuzuli\\c++ workouts\\ramazan\\devamsizlik.txt","r+");
		printf("\n");
		fread(yok,sizeof(char),1000,devamsizlik);
		puts(yok);
fclose(devamsizlik);
	
}
int dersprogram(){
		FILE *dersprogrami;
		char ders[500];
		
		dersprogrami=fopen("C:\\Users\\USER\\Desktop\\fuzuli\\c++ workouts\\ramazan\\dersprogrami.txt","r+");
		printf("\n");
		fread(ders,sizeof(char),1000,dersprogrami);
		puts(ders);
fclose(dersprogrami);
}

int main() {
	char secim='0';
	int notbul=-1;
	int program;
	int devamsiz;
	char sifre[10];
	int aramayap(char *);
	
	menu();
	do{
		printf("\n\nSeciminiz:  ");
		secim=putch(getch());
		
		switch(secim){
			case '1':
				
				notbul=notbilgisi();		
				printf("",notbul);
			
				break;
			case '2':
				devamsiz=devamsizlik();
				break;
				
			case '3':
				program=dersprogram();
				break;
		
			case '4':
				printf("\nOgretmenler icin yetkili alan. Lutfen sifreyi giriniz: "); //sifre:12345a
				gets(sifre);
			if(!strcmp(sifre,"12345a")==0){
				printf("\nhatali sifre tekrar deneyiniz");	
				break;
		}
				if(notekle()==0){
					printf("\nNot kaydedildi!!");
				}
				break;
			case '5':
				printf("\nOgretmenler icin yetkili alan. Lutfen sifreyi giriniz: "); //sifre:12345a
				gets(sifre);
			if(!strcmp(sifre,"12345a")==0)//strcmp eþitlik test fonksiyonu
			{
				printf("\nhatali sifre tekrar deneyiniz");	
				break;
		}
				if(devamsizlikekle()==0){
					printf("\nDevamsizlik kaydedildi!!");
				}else {printf("hata");}
				break;
			case '6':
				printf("\n---------------------------TESEKKURLER--------------------------------");
				
	}}while(secim!=6);

getch();
return(0);
}

