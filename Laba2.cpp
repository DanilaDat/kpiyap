#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
using namespace std;
class automobile {
private:
	int id;
	string name;
	int mileage;
public:
	automobile() {
		this->id = 0;
		this->name = ' ';
		this->mileage = 0;
	}
	automobile(int ID, string fio) {
		this->id = ID;
		this->name = fio;
		this->mileage = 0;
	}
	~automobile() {};
	friend void print(automobile &avto);
	friend class STO;
	friend void input_id(automobile &avt);
	friend void set_id(int ID, string fio, automobile &avto) {
		avto.id = ID;
		avto.name = fio;
	};
};
void print(automobile &avto) {
	cout << "Уникальный номер автомобиля - " << avto.id << endl;
	cout << "ФИО владельца автомобиля - " << avto.name << endl;
	cout << "Пробег автомобиля - " << avto.mileage << endl;
}
void input_id(automobile &avto) {
int ID;
	string fio;
	bool a = true;
	do
	{
		cout << "Введите id: ";
		cin >> ID;
		if (cin.fail())
			cout << "Повторите попытку" << endl;
		else
			a = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a);
	cout << "Введите ФИО владельца автомобиля - ";
	cin >> fio;
	set_id(ID, fio,avto);
};
class STO {
private:
	int Mileage;
public:
	STO() {
		this->Mileage = 0;
	}
	STO(int Mil) {
		this->Mileage = Mil;
	}
	~STO() {};
	void input_mileage() {
		bool a = true;
		do
		{
			cout << "Введите пробег автомобиля - ";
			cin >> Mileage;
			if (cin.fail())
				cout << "Повторите попытку" << endl;
			else
				a = false;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
		} while (a);
		STO m(Mileage);
	};
	void install_mileage(automobile &avto) {
		avto.mileage = Mileage;
	}
};

int main() {
	system("chcp 1251>null");
	STO m1;
	automobile Avto[10];
	int i = 0,answ=0,count=0;
	do {
		cout << "Добавить автомобиль в базу?(Да-1)" << endl;
		int answer = 0;
		answ = 0;
		cin >> answer;
		if (answer == 1)
		{input_id(Avto[i]);
		cout << "========================================" << endl;
		print(Avto[i]);
		cout << "========================================" << endl;
		m1.input_mileage();
		m1.install_mileage(Avto[i]);
		cout << "========================================" << endl;
		print(Avto[i]);
		i++;
		count++;
	}
	cout << "========================================" << endl;
	cout << "Хотите прродолжить работу? (Да-1)" << endl;
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
		cin >> answ;
	} while (answ == 1 && i != 10);
	cout << "Хотите вывести информацию о всех автомобилях? ";
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	int answ1;
	cin >> answ1;
	if (answ1 == 1) {
		system("CLS");
		for (int j = 0; j < count; j++)
		{
			cout << "Автомобиль № " << j + 1 << endl;
			print(Avto[j]);
			cout << "========================================" << endl;
		}
	}
	return 0;
}
