#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main()
{
	char name[30]; 
	char pizza1[]="Pepperoni" ,pizza2[]="Chicken BBQ" ,pizza3[]="Mushroom" ,pizza4[]="Creamy Max"; 
	char roll1[]="Chicken Chatni Roll", roll2[]="Chicken Mayo Roll", roll3[]="Veg Roll With Fries";
	char bur1[]="Zinger Burger",bur2[]="Chicken Burger",bur3[]="Beef Burger";
	char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extream Veg Sandwich";
	char bir1[]="Chicken Biryani", bir2[]="Prawn Biryani", bir3[]="Beef Biryani",gotostart ;
	int choice=0,pchoice,pchoice1, quantity;// time=40;
	beginning:
	system("CLS");
	printf("\t\t\t----------Lil's Fast Food-----------\n\n");
	printf("Silahkan Masukkan Nama Anda: ");
	gets(name);
	printf("Hallo",name,"\n\n Apa yang akan Kamu pesan?\n\n");

	printf("\t\t\t\t--------Menu--------\n\n");

	printf("1) Pizzas\n");
	printf("2) Burgers\n");
	printf("3) Sandwich\n");
	printf("4) Rolls\n");
	printf("5) Biryani\n\n");
	printf("\nSilahkan masukkan pesanan Anda: ");
	scanf("%d", &choice);


	if(choice==1){
		printf("\n1)",pizza1,"\n");
		printf("2)" ,pizza2,"\n");
		printf("3)" ,pizza3,"\n");
		printf("4)" ,pizza4,"\n");
		printf("\nSilahkan Masukkan Rasa yang Kamu inginkan?:");
		scanf("%d", &pchoice);
		if(pchoice>=1 && pchoice<=5){
			printf("\n1) Personal Rp 15.000\n");
			printf("2) Regular Rp 35.000\n");
			printf("3) Jumbo Rp 55.000\n");
			printf("\nSilahkan pilih ukuran yang Kamu inginkan:");
			scanf("%d", &pchoice1);
			if(pchoice1>=1 && pchoice1<=3){
				printf("\nSilahkan Masukkan Jumlahnya: ");
				scanf("%d", &quantity);
			}
			
			switch(pchoice1){
							case 1: choice = 15.000*quantity;
							break;

							case 2: choice = 35.000*quantity;
							break;

							case 3: choice = 55.000*quantity;
							break;
							}
			system("CLS");
			switch (pchoice1)
							{
								case 1:
									printf("\t\t\t--------Pesanan Kamu---------\n");
									printf("",quantity," ",pizza1);
									printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
									printf("\n\nTerima Kasih Telah Memesan dari Lil's Fast Food'\n");
									break;
								 
								case 2:
									printf("\t\t--------Pesanan Kamu---------\n");
									printf("",quantity,"  ",pizza2);
									printf("\nTotal Tagihan Kamu adalah ",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
									printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
									break;
								 
								case 3:
									printf("\t\t--------Pesanan Kamu---------\n");
									printf("",quantity," ",pizza3);
									printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
									printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
									break;
								 
								case 4:
									printf("\t\t--------Pesanan Kamu---------\n");
									printf("",quantity," ",pizza4);
									printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
									printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
									break;
							}
			printf("Apakah ada tambahan Pesanan? Y / N:");
			scanf("%s", &gotostart);
			if(gotostart=="Y" || gotostart=="y")
			{
			  goto beginning;
			  //return 0;
			}
		}
	}else if(choice==2){
		printf("\n1",bur1," Rp 18.000","\n");
		printf("2 ",bur2," Rp 15.000","\n");
		printf("3 ",bur3," Rs 16.000","\n");
		//cout<<"4 "<<pizza4<<"\n";
		printf("\nSilahkan Masukkan Burger yang ingin Anda Pesan?: ");
		scanf("%d", &pchoice1);
		if(pchoice1>=1 && pchoice1<=3)
		{
			printf("\nSilahkan Masukkan Jumlahnya: ");
			scanf("%d",&quantity);
			switch(pchoice1)
							{
								case 1: 
									choice = 18.000*quantity;
									break;
					
								case 2: 
									choice = 15.000*quantity;
									break;
					
								case 3: 
									choice = 16.000*quantity;
									break;
							}
			system("CLS");
			switch (pchoice1)
							{
								case 1:
									printf("\t\t--------Pesanan Kamu---------\n");
									printf("",quantity," ",bur1);
									printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
									printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
									break;
								case 2:
									printf("\t\t--------Pesanan Kamu---------\n");
									printf("",quantity,"  ",bur2);
									printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
									printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
									break;
								case 3:
									printf("\t\t--------Pesanan Kamu---------\n");
									printf("",quantity," ",bur3);
									printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
									printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
									break;		
							}
			printf("\nApakah ada tambahan Pesanan? Y / N:");
			scanf("%s", &gotostart);
			if(gotostart=="Y" || gotostart=="y")
			{
			  goto beginning;
			  //return 0;
			}
		}
	}else if(choice==3){
		printf("\n1  ",sand1," Rp 24.000","\n");
		printf("2  ",sand2," Rp 16.000","\n");
		printf("3  ",sand3," Rp 10.000","\n");
		//cout<<"4 "<<pizza4<<"\n";
		printf("\nSilahkan Masukkan Sandwich yang ingin Anda Pesan?:");
		scanf("%d", &pchoice1);
		if(pchoice1>=1 && pchoice1<=3)
		{
			printf("\nSilahkan Masukkan Jumlahnya: ");
			scanf("%d", &quantity);
			switch(pchoice1)
						{
						case 1: 
						choice = 24.000*quantity;
						break;
			
						case 2: 
						choice = 16.000*quantity;
						break;
			
						case 3: 
						choice = 10.000*quantity;
						break;
			
						}
			system("CLS");
			switch (pchoice1)
						{
						 case 1:
							 printf("\t\t--------Pesanan Kamu---------\n");
							 printf("",quantity," ",sand1);
							 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
							 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
							 break;
						 case 2:
							 printf("\t\t--------Pesanan Kamu---------\n");
							 printf("",quantity,"  ",sand2);
							 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
							 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
							 break;
						 case 3:
							 printf("\t\t--------Pesanan Kamu---------\n");
							 printf("",quantity," ",sand2);
							 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
							 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
							 break;
			
			
						}
			printf("Apakah ada tambahan Pesanan? Y / N:");
			scanf("%s", &gotostart);
			if(gotostart=="Y" || gotostart=="y")
			{
			  goto beginning;
			  //return 0;
			}
		}
	}else if(choice==4){
		printf("\n1 ",roll1," Rp 15.000 \n");
		printf("2 ",roll2," Rp 10.000 \n");
		printf("3 ",roll3," Rp 12.000 \n");
		//cout<<"4 "<<pizza4<<"\n";
		printf("\nSilahkan Masukkan Rools yang ingin Anda Pesan?: ");
		scanf("%d", &pchoice1);
		if(pchoice1>=1 && pchoice1<=3)
		{
			printf("\nSilahkan Masukkan jumlahnya: ");
			scanf("%d", &quantity);
			switch(pchoice1)
			{
			case 1: 
			choice = 15.000*quantity;
			break;

			case 2: 
			choice = 10.000*quantity;
			break;

			case 3: 
			choice = 12.000*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 printf("\t\t--------Pesanan Kamu---------\n");
			 printf("",quantity," ",roll1);
			 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
			 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
			 break;
			 case 2:
			 printf("\t\t--------Pesanan Kamu---------\n");
			 printf("",quantity,"  ",roll2);
			 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
			 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
			 break;
			 case 3:
			 printf("\t\t--------Pesanan Kamu---------\n");
			 printf("",quantity," ",roll3);
			 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
			 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
			 break;
			}
		}
	}else if(choice==5){
		printf("\n1 ",bir1," Rp 16.000 \n");
		printf("2 ",bir2," Rp 22.000 \n");
		printf("3 ",bir3," Rp 14.000 \n");
		//cout<<"4 "<<pizza4<<"\n";
		printf("\nSilahkan Masukkan Rools yang ingin Anda Pesan?:");
		scanf("%d", &pchoice1);
		if(pchoice1>=1 && pchoice1<=3){
			printf("\nSilahkan Masukkan Jumlahnya: ");
			scanf("%d", &quantity);
			switch(pchoice1)
			{
			case 1: 
			choice = 16.000*quantity;
			break;

			case 2: 
			choice = 22.000*quantity;
			break;

			case 3: 
			choice = 14.000*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 printf("\t\t--------Pesanan Kamu---------\n");
			 printf("",quantity," ",bir1);
			 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
			 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
			 break;
			 case 2:
			 printf("\t\t--------Pesanan Kamu---------\n");
			 printf("",quantity,"  ",bir2);
			 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
			 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
			 break;
			 case 3:
			 printf("\t\t--------Pesanan Kamu---------\n");
			 printf("",quantity," ",bir3);
			 printf("\nTotal Tagihan Kamu adalah",choice,"\nPesanan Kamu akan sampai dalam 40 Menit");
			 printf("\nTerima Kasih Telah Memesan dari Lil's Fast Food\n");
			 break;


			}
			printf("Apakah ada tambahan Pesanan? Y / N:");
			scanf("%s", &gotostart);
			if(gotostart=="Y" || gotostart=="y")
			{
			  goto beginning;
			  //return 0;
			}
		}
	}else{
			system("CLS");
			printf("Silahkan memilih opsi yang tepat: \n");
			printf("Apakah Anda ingin memulai program lagi? Y / N: ") ;
			scanf("%s", &gotostart);

		if(gotostart=="Y" || gotostart=="y")
		{
			goto beginning;
			//return 0;
		}
	}

getch();
}
