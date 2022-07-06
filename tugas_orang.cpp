#include <stdio.h>
#include <stdlib.h>


// GAK PERLU PAKAI GINI KEBANYAKAN BARIS Hapus aja kalau mau
//void kecepatan (int *jarak, int *waktu, int *rata)
//{
//    *rata = *jarak / *waktu ;
//}

int main ()
{
	
	//	VARIABEL
	char jeniskendaraan [30];
	int jarak, waktu, rata;
	char pg,jwbn;
	
	pg = true;
	while (pg)
	{
			
		printf("\nJenis Kendaraan : \n");
		printf("1. Kereta Api \n");
		printf("2. Mobil \n");
		printf("3. Sepeda motor \n");
	
		printf("\n");
		printf("-----------------------------------------------------------\n");
		
		// INPUT JENIS KENDARAAN
		printf ("Masukkan Jenis Kendaraan: ");
		// scanf ("%s", &jeniskendaraan); JANGAN PAKAI GINI GK BISA SPASI 
	
		scanf(" %[^\n]c", &jeniskendaraan); // pakai cara ini agar pas di looping bisa spasi
		
		
 	
 	
		// 	INPUT JARAK
		printf ("Masukan Jarak Tempuh (KM) : ");
		scanf ("%d",&jarak);
 
		// INPUT WAKTU
		printf ("Masukan Waktu Tempuh (Jam) : ");
		scanf ("%d",&waktu);
	
		rata = jarak/waktu; // RUMUS 
	
		printf ("----------------------------------------------------\n\n");
		
		// Hasil	
		printf("jenis Kendaraan : %s \n", jeniskendaraan);
		printf ("Kecepatan Kendaraan : %d KM/Jam \n", rata);
		if(rata >= 80){
			printf("Kriteria : Sangat Cepat");
		} else if(79 >= rata >= 60){
 			printf("Kriteria : Cepat");
		} else if(59 >= rata >= 40){
 			printf("Kriteria : Sedang");
		} else if(39 >= rata >= 25){
 			printf("Kriteria : Lambat");
		} else {
			printf("Kriteria : Sangat Lambat");	
		}
	
		// EXIT CODE	
		printf ("\nExit ? (y/n) ");
		scanf("%s", &jwbn);
	
		if(jwbn == 'y'){
			printf("Program Selesai");
			break;
		} 	
	}
	

}


