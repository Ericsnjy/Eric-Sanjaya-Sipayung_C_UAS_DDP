#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <curses.h>

using namespace std;

//Prosedur DELAY
	void delay(void){
	int delay;
	delay=1;
	while(delay<100000000)
	{delay++;}
}

//goto xy
void gotoxy(int x,int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
	int main(){
		system("color 60");
		int i,j;
	for(i=20; i<50; i++){
		gotoxy(i,12);
		printf("-");
		gotoxy(i,14);
		printf("-");
		delay();}
		
		for(i=1; i<=100; i++){
		gotoxy(20,13);
		cout<< "G A M E  L O A D I N G "<<i<<"%"<<endl;
		
		system ("cls");
	
	}

	
    // Pilihan Player
    
    int y, t;
    char pilih, lagi;
    menu:
	cout << "===============================================" << endl;
    cout << " Selamat datang di GAME SUWIT JAWA KELOMPOK 14 " << endl;
    cout << "===============================================" << endl << endl;
    cout << " Kamu Pilih ?" << "\n\n";
    cout << " 1. GAJAH, \n 2. SEMUT, \n 3. ORANG" << "\n";
    cout << " Silahkan Pilih  1/2/3 : => ";
    pilih=getche();
    if(pilih=='1')
    {
        cout << "\n Kamu = GAJAH" << endl;
        srand(time(NULL)); // bilangan random/acak
        int com = rand() % 10;
        if (com<=3 && com>=1)
            {
                cout << " Computer = GAJAH" << "\n\n";
                cout << " ==============" << endl;
                cout << " ==> SERI ! <==" << endl;
                cout << " ==============" << endl;
            }
        else if (com<=6 && com>=4)
            {
                cout << " Computer = ORANG" << "\n\n";
                cout << " =====================" << endl;
                cout << " ==> Kamu Menang ! <==" << endl;
                cout << " =====================" << endl;
            }
        else
            {
                cout << " Computer = SEMUT" << "\n\n";
                cout << " ====================" << endl;
                cout << " ==> Kamu Kalah ! <==" << endl;
                cout << " ====================" << endl;
            } cout << endl;
    }
    else if(pilih== '2')
    {
        cout << "\n Kamu = SEMUT" << endl;
        srand(time(NULL));  // bilangan random/acak
        int com = rand() % 10;
        if (com<=3 && com>=1)
            {
                cout << " Computer = SEMUT" << "\n\n";
                cout << " ==============" << endl;
                cout << " ==> SERI ! <==" << endl;
                cout << " ==============" << endl;
            }
        else if (com<=6 && com>=4)
            {
                cout << " Computer = GAJAH" << "\n\n";
                cout << " =====================" << endl;
                cout << " ==> Kamu Menang ! <==" << endl;
                cout << " =====================" << endl;
            }
        else
            {
                cout << " Computer = ORANG" << "\n\n";
                cout << " ====================" << endl;
                cout << " ==> Kamu Kalah ! <==" << endl;
                cout << " ====================" << endl;
            } cout << endl;
    }
    else if(pilih=='3')
    {
        cout << "\n Kamu = ORANG" << endl;
        srand(time(NULL));  // bilangan random/acak
        int com = rand() % 10;
        if (com<=3 && com>=1)
            {
                cout << " Computer = ORANG" << "\n\n";
                cout << " ==============" << endl;
                cout << " ==> SERI ! <==" << endl;
                cout << " ==============" << endl;
            }
        else if (com<=6 && com>=4)
            {
                cout << " Computer = SEMUT" << "\n\n";
                cout << " =====================" << endl;
                cout << " ==> Kamu Menang ! <==" << endl;
                cout << " =====================" << endl;
            }
        else
            {

                cout << " Computer = GAJAH" << "\n\n";
                cout << " ====================" << endl;
                cout << " ==> Kamu Kalah ! <==" << endl;
                cout << " ====================" << endl;
            } cout << endl;
    }
    else
    {
        cout << "yang anda input salah !!" << endl;
    }
    
    cout << "Coba Lagi? : "<<endl;
    cout << "JIKA IYA,KETIK y"<<endl;
    cout << "JIKA TIDAK,KETIK t"<<endl;
    cin >> lagi;
    
    	if(lagi== 'y'){
    	system ("cls");
    	goto menu;
    }
	else{cout<< "TERIMA KASIH TELAH BERMAIN"<<endl;}
		   
    
}
