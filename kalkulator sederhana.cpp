#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int angka1, angka2;
	char symbol;
	string result = "Hasil : ";
	cout << "KALKULATOR SEDERHANA";
	cout << "\n\n";
	cout << "Angka pertama : ";
	cin >> angka1;
	cout << "\n";
	cout << "Angka kedua : ";
	cin >> angka2;
	cout << "\n";
	cout << "Operasi : ( 1 = +, 2 = -, 3 = /, 4 = *, 5 = %)";
	cout << "\n";
	cout << " ==>> ";
	cin >> symbol;
	if(symbol = 1){
		cout << result << angka1 + angka2;
	} else if(symbol = 2){
		cout << result << angka1 - angka2;	
	} else if(symbol = 3){
		cout << result << angka1 / angka2;
	} else if(symbol = 4){
		cout << result << angka1 * angka2;
	} else if(symbol = 5){
		cout << result << angka1 % angka2;
	} else {
		cout << "salah";
	}
	
	return  getch(); 0;
	
}
