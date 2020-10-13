#include <iostream>
#include <windows.h>
#include <iomanip>
class String {
private:
	int size;
	char* string;
public:
	String() {
		size = 1;
		string = new char[size];
		for (int i = 0; i < size; i++)
			string[i] = 0;
	};
	String(int size) {
		this->size = size;
		this->string = new char[size];
		std::cout << "Введите строку\n";
		for (int i = 0; i < size; i++)
			std::cin >> this->string[i];
	}
	String(String& Str) {
		this->size = Str.size;
		this->string = new char[Str.size];
		for (int i = 0; i < Str.size; i++) {
			this->string[i] = Str.string[i];
		}
	}
	~String() {
		delete[size]string;
	}
	friend void output(String& Str);
	friend void input_str(String& Str);
	friend void buble_sort(String& Str);
	
