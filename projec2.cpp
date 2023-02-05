#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main () {

	
	int pilih, ulang;
	char pilihan;
	float y,t, e;
	menu:
	system ("cls");
	cout << "================Ayo Bermain================" << endl;
	cout << " 1. Tebak Angka" << endl;
	cout << " 2. Suit" << endl;
	cout << endl;
	cout << " Pilih Permainan (1/2) :";
	cin >> pilih ;

	switch (pilih)
	{
		case 1 :
			system ("cls");
			int tebak, angka, a=0;
			tebakangka:
			string  kategori[]= { " =Lumayan= ", " =Bagus= "," =Smart= ", " =Lebih Keras lagi= "};
			srand (time (NULL));
			angka = rand () % 100 + 1;

			cout << "===============Ayo Bermain Tebak Angka==============" << endl;
			cout << "---------------------------------------------------" << endl;
			cout << "Dari angka 1-100 Tebaklah angka yang saya pikirkan!" << endl;
			cout << "---------------------------------------------------" << endl;
			do{
				a++;
				cin >> tebak ;
				 if (tebak > angka ){
					cout << "Jawaban Kamu Salah!! Angka yang kamu masukan terlalu Besar. Coba Lagi" << endl;
				 }else if (tebak < angka){
					cout << "Jawaban Kamu Salah!! Angka yang kamu masukan terlalu Kecil. Coba Lagi" << endl;
				 }
			}while (tebak!=angka);
			cout << "Jawaban Kamu Benar yayy!!!\n"  ;

			if (a>=6){
				cout << kategori[01] << endl;
			}else if (a<=5){
				cout << kategori [02] << endl;
			}else if (a<=3){
				cout << kategori[03]<< endl;
			}else {
				cout << kategori [04] << endl;
			}


			cout << "\nTebak Lagi ? (y/t) / EXIT (e) ? :  ";
                cin >> pilihan ;
                if (pilihan == 'y' ) {
                    system ("cls");
                    goto tebakangka;
                  }
                  if (pilihan == 't') {
                    system ( "cls" );
                    goto menu;
                  }	else{
                  	system ("cls");
				  }

                  break;
                  
              }
              
              
              switch (pilih)
				{
	
					case 2 :
         				system ("cls");
         				int again, choice;
						suit :
						
         				cout << "===============Ayo Bermain Suit==============" << endl;
         				cout << " 1.Gajah \n 2.Semut \n 3.Orang \n";
         				cout << endl;
         				cout << "Pilih Karaktermu :";
         				cin >> pilih ;
         				
         				if (pilih == 1 )
						 {
         					cout << "Kamu Gajah" << endl;
         					int com = rand()%10;
							srand (time(NULL));
         					
							 
							 if (com<3 && com>=1)
							 {
							 
         						cout << "Aku Gajah" << endl;
         						cout << "=====Kita Seri====" << endl;
         						
							 }
							 else if (com <=6 && com >=4)
							 {
							 	cout << "Aku Orang" << endl;
							 	cout << "=====Kamu Menang=====" << endl;
							 	
							 }
							 else
							 {
							 	cout << "aku semut" << endl;
							 	cout << "=====Kamu Kalah=====" << endl;
						
						 	}
						 	
						}
						else if (pilih == 2)
						{
							cout << "Kamu Semut" << endl;
							int com = rand()%10;
							srand (time(NULL));
							
								
							if (com <=3 && com >=1)
							{
								cout << "Aku Semut" << endl;
								cout << "=====Kita Seri=====" << endl;
								
							}else if (com <=6 && com >=4)
							{
							 	cout << "Aku Gajah" << endl;
							 	cout << "=====Kamu Menang=====" << endl;
							 	
							 }else
							 {
							 	cout << "aku Orang" << endl;
							 	cout << "=====Kamu Kalah=====" << endl;
						
						}
						
					
						 }
						 else if (pilih == 3)
						 {
							cout << "Kamu Orang" << endl;
							int com = rand()%10;
							srand (time(NULL));
							 if (com <=3 && com >=1)
							 {
								cout << "Aku Orang" << endl;
								cout << "=====Kita Seri=====" << endl;
								
							}
							else if (com <=6 && com >=4)
							{
							 	cout << "Aku semut" << endl;
							 	cout << "=====Kamu Menang=====" << endl;
							 	
							 }
							 else
							 {
							 	cout << "aku Gajah" << endl;
							 	cout << "=====Kamu Kalah=====" << endl;
						
							}
						}else
						{ 
						cout << "Yang Kamu Input salah" << endl;
						}
						
					
						cout << "\nSuit Lagi ? (y/t) / EXIT (e) ? :  ";
               			 cin >> pilihan ;
               				 if (pilihan == 'y' ) {
                  			  system ("cls");
                   			 goto suit;
                   			 
                 			}if (pilihan == 't') {
                 			system ( "cls" );
                    		goto menu;
                  			}else{
                  			system ("cls");
				  			}

                  break;
                  
				}
			
		}
								
								
								
					 
						 
		




	



