#include<iostream>
#include "kmin_console.h"
#define draw_snake 254
using namespace std;
int main()
{
	system("cls");
	/*for (int i = 0; i < 256; i++) {
		cout << i <<": " <<(char)i<<endl;
	}*/
	int x = 0, y = 0;
	while (1) {
		system("cls");
		gotoXY(x, y);
		cout << (char)draw_snake ;
		Sleep(500);
		x++;
		
	}
	






	system("pause");
	return 0;

}