#include<iostream>
#include<stdlib.h>
using namespace std;

int hasil;

class calculator
{
	protected:
		int angka;
		int angka1;
	
	public:
		void setAngka(int x)
		{
			angka = x;
		}
		
		void setAngka1(int y)
		{
			angka1 = y;
		}
		
		int getAngka()
		{
			return angka;
		}
		
		int getAngka1()
		{
			return angka1;
		}
		
};

class FuncPenjumlahan : public calculator
{
	public:
		void penjumlahan()
		{
			hasil = angka + angka1;
		}
};

class FuncPengurangan : public calculator
{
	public:
		void pengurangan()
		{
			hasil = angka - angka1;
		}
};

class FuncPerkalian : public calculator
{
	public:
		void perkalian()
		{
			hasil = angka * angka1;
		}
};

class FuncPembagian : public calculator
{
	public:
		void pembagian()
		{
			hasil = angka / angka1;
		}
};

int main()
{
	int option;
	int input1,input2;
	do
	{
		system("cls");
		cout << "----------Calculator ----------" << endl;
		cout << " 1. Penjumlahan " << endl;
		cout << " 2. Pengurangan " << endl;
		cout << " 3. Perkalian "  << endl;
		cout << " 4. Pembagian " << endl;
		cout << " 5. Exit" << endl;
		cout << " Pilihan (1-5) :  ";
		cin >> option;
		switch(option)
		{
			case 1:
				system("cls");
				FuncPenjumlahan obj1;		
				cout << "Masukkan angka ke 1 	 : ";
				cin >> input1;
				cout << "Masukkan angka ke 2     : ";
				cin >> input2;
				obj1.setAngka(input1);
				obj1.setAngka1(input2);
				obj1.getAngka();
				obj1.getAngka1();
				obj1.penjumlahan();
				cout << "Hasil  : " << hasil << endl;
				system("PAUSE");
				break;
			
			case 2:
				system("cls");
				FuncPengurangan obj2;
				cout << "Masukkan angka ke 1 	: ";
				cin >> input1;
				cout << "Masukkan angka ke 2 	: " ;
				cin >> input2;
				obj2.setAngka(input1);
				obj2.setAngka1(input2);
				obj2.getAngka();
				obj2.getAngka1();
				obj2.pengurangan();
				cout << "Hasil  : " << hasil << endl;
				system("PAUSE");
				break;
			
			case 3:
				system("cls");
				FuncPerkalian obj3;
				cout << "Masukkan angka ke 1 	:";
				cin >> input1;
				cout << "Masukkan angka ke 2 	:";
				cin >> input2;
				obj3.setAngka(input1);
				obj3.setAngka1(input2);
				obj3.getAngka();
				obj3.getAngka1();
				obj3.perkalian();
				cout << "Hasil : " << hasil << endl;
				system("PAUSE");
				break;
			
			case 4:
				system("cls");
				FuncPembagian obj4;
				cout << "Masukkan angka ke 1	:	";
				cin >> input1 ; 
				cout << "Masukkan angka ke 2 	:	";
				cin >> input2;
				obj4.setAngka(input1);
				obj4.setAngka1(input2);
				obj4.getAngka();
				obj4.getAngka1();
				obj4.pembagian();
				cout << "Hasil : " << hasil << endl;
				system("PAUSE");
				break;
		}
		
		
	}
	while(option != 5);
	cout<<" BYE BYE ";
	return 0;
}
