// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

//Вариант 7. В заданной строке посчитать количество разных символов.

#include <iostream>
#include <string>
#include <map>  
#include <Windows.H>

using namespace std;

void printChCount(string inputString) {
	//Создаем контейнер map
	map <char, int> chars;
	map <char, int>::iterator begin, at, end;

	//Считывание каждого символа в контейнер
	for (int i = 0; i < inputString.length(); i++) {
		chars[inputString[i]]++;
	}

	begin = chars.begin();
	end = chars.end();

	//Вывод результата 
	for (at = begin; at != end; at++) {
		cout << at->first << '\t' << at->second << endl; // выводим результат
	}

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string inputString;
	getline(cin, inputString);

	printChCount(inputString);
}


