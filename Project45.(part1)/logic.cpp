#include<iostream>
using namespace std;

void japanese_mathematics() {
	int a, b, c;
	int stoper = 0;
	int count = 0;

	while (stoper == 0) {
		int max = 9;
		int min = 1;

		a = rand() % (max - min + 1) + min;

		min = -9;
		b = rand() % (max - min + 1) + min;

		b > 0 ? max = -1 : min = 1;
		c = rand() % (max - min + 1) + min;

		int sum = a + b + c;
		string t1 = " + ";
		string t2 = " + ";
		b < 0 ? t1 = " - " : t2 = " - ";

		int input;
		cout << a << t1 << b << t2 << c << " = ";
		cin >> input;

		stoper = input == -10 ? 1 : 0;
		count++;
	}
	cout << "you have solved " << count << " examples.";

}