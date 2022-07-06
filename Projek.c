/* Nama File: Projek.c
	Program aplikasi sederhana berbasis teks tentang Perlomba Layangan*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define phi 3.14
#define N 3

typedef struct Peserta{
	char nama[20];
	char nomor[10];
}Peserta;

typedef struct Pertandingan{
	double sudut;
	double pjgbenang;
	double tinggipeserta;
	double tinggilayangan;
}Pertandingan;

typedef struct Data{
	Peserta anggota;
	Pertandingan hasil;
} Data;

void judul();
void menu();
void entripeserta();
void entripertandingan();
void infopeserta();
void mencaripeserta();
int caripeserta(char nomornya[]);

void hasilpertandingan();
void menampilkan(int i);
double ketinggian(double pjgbenang, double sudut);
void urutkan();

Data lomba[N];

main(){
	char jawab = 'Y';

	judul();
	do{
		menu();
		printf("\nKembali ke Menu Pilihan (Y/T)?: ");
		jawab = getche();
	} while(toupper(jawab)=='Y');
	printf("\nTerima kasih...");
	getchar();

}

void judul(){
	printf("=====================================================\n");
	printf("Program Lomba Layang-Layang\n");
	printf("Programmer: Lilla Ainil Fitri\n");
	printf("=====================================================\n");
	printf("Tekan tombol enter...");
	getchar();
}

void menu(){
	int pilihan;
	printf("\nMENU PILIHAN\n");
	printf("=============================================\n");
	printf("1. Entri Data Peserta\n");
	printf("2. Entri Data Pertandingan\n");
	printf("3. Melihat Data Peserta\n");
	printf("4. Mencari Data Peserta\n");
	printf("S. Melihat Daftar Juara\n");
	printf("0. Keluar\n");
	printf("=============================================\n");
	printf("Ketikan nomor pilihan: ");
	scanf("%d", &pilihan), fflush(stdin);

	switch(pilihan){
		case 0: printf("Keluar dari Program\n");
						printf("Terima kasih... Tekan Enter");
						getchar();
						exit(1);
		case 1: entripeserta();
						printf("\nTekan enter untuk kembali ke Manu Pilihan...");
						getchar();
						menu();
						break;
		case 2: entripertandingan();
				printf("\nTekan enter untuk kembali ke Manu Pilihan...");
				getchar();
				menu();
				break;
		case 3: infopeserta();
				printf("\nTekan enter untuk kembali ke Manu Pilihan...");
				getchar();
				menu();
				break;
		case 4: mencaripeserta();
				printf("\nTekan enter untuk kembali ke Manu Pilihan...");
				getchar();
				menu();
				break;
		case 5: hasilpertandingan();
				printf("\nTekan enter untuk kembali ke Manu Pilihan...");
				getchar();
				menu();
		default:printf("\nNomor pilihan tidak ada... Tekan Enter...");
				getchar();
				menu();
	}
}

void entripeserta(){
	int i;
	char namanya[20],nomornya[10];
	printf("\nMemasukan Data Peserta\n");
	printf("=============================================\n");
	printf("Jumlah Peserta: %d Orang\n", N);

	for(i=0;i<N;i++) {
		printf("Ketikkan Nama Peserta ke-%d : ", i+1);
		gets(namanya), fflush(stdin);
		printf("Ketikkan Nomor Peserta :");
		gets(nomornya); fflush(stdin);

		strcpy(lomba[i].anggota.nama,namanya);
		strcpy(lomba[i].anggota.nomor,nomornya);

	}
}
double ketinggian(double pjgbenang, double sudut) {
	double tinggilayangan;

	tinggilayangan=pjgbenang*sin(sudut*phi/180);

	return tinggilayangan;
}

void entripertandingan() {
	int i;
	char namanya[20],nomornya[10];
	double sudutnya,pjgbenangnya, tinggipesertanya, tinggilayangan;

	for(i=0;i<N;i++){
		strcpy(namanya,lomba[i].anggota.nama);
		strcpy(nomornya,lomba[i].anggota.nomor);

		printf("Peserta ke-%d\n",i+1);
		printf("Nama Peserta : %s\n", namanya);
		printf("Nomor Peserta: %s\n", nomornya);
		printf("Panjang Benang : ");
		scanf("%lf", &pjgbenangnya); fflush(stdin);
		printf("Tinggi Peserta : ");
		scanf("%lf", &tinggipesertanya); fflush (stdin);
		printf("Sudut :");
		scanf("%lf", &sudutnya); fflush(stdin);

		lomba[i].hasil.pjgbenang=pjgbenangnya;
		lomba[i].hasil.sudut=sudutnya;
		lomba[i].hasil.tinggipeserta=tinggipesertanya;

		tinggilayangan=tinggipesertanya+ketinggian(pjgbenangnya,sudutnya);
		lomba[i].hasil.tinggilayangan=tinggilayangan;
	}	
}

void infopeserta() {
	int i;
	char namanya[20],nomornya[10];

	printf("Daftar Peserta Lomba Lempar Lembing\n");
	printf("=============================================\n");

	if(!strcmp(lomba[0].anggota.nomor,"")){
		printf("\nData masih Kosong... Tekan enter_.");
		getchar();
	}
	else{
		for(i=0;i<N;i++) {
			strcpy(namanya,lomba[i].anggota.nama);
			strcpy(nomornya,lomba[i].anggota.nomor);
			
			printf("Nama Peserta : %s\n", namanya);
			printf("Nomor Peserta : %s\n", nomornya);
			printf("===============================================\n");
		}
	}
}

void menampilkan(int i){
	char namanya[20],nomornya[10];
	double sudutnya,pjgbenangnya,tinggipesertanya,tinggilayangan;
	
	strcpy(namanya,lomba[i].anggota.nama);
	strcpy(nomornya,lomba[i].anggota.nomor);

	tinggipesertanya=lomba[i].hasil.tinggipeserta;
	pjgbenangnya=lomba[i].hasil.pjgbenang;
	sudutnya=lomba[i].hasil.sudut;
	tinggilayangan=lomba[i].hasil.tinggilayangan;

	printf("Nama Peserta    : %s\n",namanya);
	printf("Nomor Peserta   : %s\n",nomornya);
	printf("Tingggi Peserta : %.1fm\n",tinggipesertanya);
	printf("Sudut Layangan 	: %.1fderajat\n",sudutnya);
	printf("Panjang Benang  : %.1fm\n",pjgbenangnya);
	printf("Tingsi Layangan : %.2fm\n",tinggilayangan);
	printf("===============================================\n");
}

void mencaripeserta(){
	char nomornya[10];
	int posisi;

	if(!strcmp(lomba[0].anggota.nomor, "")){
		printf("\nData masih Kosong... Tekan enter... ");
	}
	else{
		printf("Ketik Nomor Peserta yang dicari : ");
		gets(nomornya); fflush(stdin);
		posisi = caripeserta(nomornya);
		if(posisi == -999){
			printf("\nData tidak ditemukan... Tekan enter...");
			getchar();
		}
		else{
			printf("\nData ditemukan\n");
			menampilkan(posisi);
		}
	}
}

int caripeserta(char nomornya[]){
	int i, posisi;

	for(i=0;i<N;i++){
		if(!strcmp(nomornya, lomba[i].anggota.nomor)) {
			posisi =i;
			break;
		}
		else {
			posisi = -999;
		}
	}
	return posisi;
}

void hasilpertandingan(){
	int i;

	printf("\nPara Juara dengan Ketinggian Layangan Tertinggi\n");
	printf("=========================================================\n");

	if(lomba[0].hasil.tinggilayangan == 0.0){
		printf("\nData masih kosong... tekan enter...");
		getchar();
	}
	else{
		urutkan();
		for(i=0;i<3;i++) {
			printf("Juara ke-%d\n", i+1);
			menampilkan(i);
		}
	}
}

void urutkan() {
	int tertinggi,i,j;
	Data kosong;

	for(i= 0; i<N-1; i++) {

		tertinggi = i;
		
		for(j = i+1; j<N;j++) {
			if(lomba[j].hasil.tinggilayangan > lomba[tertinggi].hasil.tinggilayangan) {
				tertinggi =j;
			}
		}

		if(tertinggi != i) {
			kosong = lomba[tertinggi];
			lomba[tertinggi] = lomba[i];
			lomba[i] = kosong;
		}
	}
}
