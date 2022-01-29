// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include<string>
using namespace std;
void no5_1()
{
	int i, j, z = 0;
	cout << "please input two number:" << endl;
	cin >> i;
	cin >> j;
	for (i; i <= j; i++)
	{
		z = i + z;
	}
	cout << "total:" << z << endl;
}
void no5_2()
{
	array<long double, 102> factorials;
	factorials[0] = 1;
	factorials[1] = 1;
	for (int i = 2; i < 101; i++)
	{
		factorials[i] = i * factorials[i - 1];
		cout << i << "! = " << factorials[i] << endl;
	}

}
void no5_3()
{
	int ch, total=0;
	cin >> ch;
	while (ch != 0)
	{

		total = total + ch;
		cout << total << endl;
		cin >> ch;
	}
}
void no5_4()
{
	double cleo = 100, daphne = 100;
	int i = 0;
	while (cleo <= daphne)
	{
		i++;
		cout << "year" << i << endl;
		cleo = cleo * 1.05;
		daphne = daphne + 10;
		cout << "cleo's property is: " << cleo << " daphne's property: " << daphne <<endl;
	}
	cout << "this year " << i << " cleo's property proceed daphne's" << endl;
}
void no5_5()
{
	string month;
	int sales[32];
	int total = 0;
	for (int i = 1; i <= 12; i++)
	{
		cout << "please input this month " << i << " sales:" << endl;
		cin >> sales[i];
		total = total + sales[i];
	}
	cout << "total sales:" << total << endl;
}
void no5_6()
{
	int sales[12][3];
	int total=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12 ; j++)
		{
			cout << "please input this year " << i + 1 << "this month: "<< j + 1 << " sales" << endl;
			cin >> sales[j][i];
			total = total + sales[j][i];
		}
	}
	cout << "total sales is: " << total;
}
struct car
{
	string brand;
	int produceYear;
};
void no5_7()
{
	car * Car2 = new car;
	int carsNumber;
	cout << "input cars number: " << endl;
	cin >> carsNumber;
	car * Car = new car[carsNumber];
	for (int i = 0; i < carsNumber; i++)
	{
		cout << "Car #" << i+1 << endl;
		cout << "Please enter the make: " << endl;
		cin >> Car[i].brand;
		cout << "Pleas enter the year made: " << endl;
		cin >> Car[i].produceYear;
	}
	cout << "Here is your collection" << endl;
	for (int i = 0; i < carsNumber; i++)
	{
		cout << Car[i].brand << '\t' << Car[i].produceYear << endl;
	}
	delete[] Car;
}
void no5_8()
{
	char *sentence = new char[1000];
	int wordNumber = 0;
	int sentenceLength = 0;
	cout << "please enter words: (enter \"done\" to stop)" << endl;
	for (int i = 0; !((sentence[i-4] == 'd') && (sentence[i-3] == 'o') && (sentence[i-2] == 'n') && (sentence[i-1] == 'e')); i++)
	{
		
		cin.get(sentence[i]);
		if (sentence[i] == ' ')
			wordNumber++;
		sentenceLength++;
	}
	for (int i = 0; i < sentenceLength; i++)
	{
		cout << sentence[i];

	}
	cout << endl << "total word is: " << wordNumber << endl;
	delete[] sentence;
}
void no5_9()
{
	string word;
	string sentence;
	int wordNumber = 0;
	for (int i = 0; word!="done"; i++)
	{
		cin>>word;
		sentence = sentence + word + " ";
	    wordNumber++;
			
	}
	cout << sentence << endl;
	cout << wordNumber<<endl;

}
void no5_10()
{
	int number;
	cout << "enter the row number:" << endl;
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= number - i; j++)
		{
			cout << ".";
		}
		for (int j = number - i; j < number; j++)
		{
			cout << "*";
		}
		cout << endl;
		
	}
}
int main()
{

	no5_10();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
