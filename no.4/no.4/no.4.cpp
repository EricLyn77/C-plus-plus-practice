// no.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<string>
#include "stdio.h"
#include <array>

using namespace std;

class test
{
public:
	int test1[6] = { 0 };
	void test2(int j)
	{
		for (int i = 0; i < j; i++)
		{
			test1[i] = i;
			cout << test1[i];
		}

	}

};

struct student
{
	char firstname[20];
	char lastname[20];
	int age;
	char score;
};
struct CandyBar
{
	string bland;
	double weight;
	double calories;
};

struct Pizza
{
	string brand;
	double diameter;
	double weight;
};

void Four1()
{
	student* student1 = new student;
	cout << "What is your first name?" << endl;
	cin.getline(student1->firstname, 20);
	cout << "What is your last name" << endl;
	cin.getline(student1->lastname, 20);
	cout << "What letter grade do you deserve?" << endl;
	cin >> student1->score;
	cout << "What is your age?" << endl;
	cin >> student1->age;
	student1->score = (char)((int)student1->score + 1);
	cout << "name:" << student1->firstname << student1->lastname << endl;
	cout << "age:" << student1->age << endl;
	cout << "Grade:" << student1->score << endl;
	delete student1;
}

void Four2()
{
	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Enter your name:" << endl;
	getline(cin,name);
	cout << "Enter your favorite dessert" << endl;
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << endl;


}

void Four3()
{
	char firstname[20];
	char lastname[20];
	cout << "Enter your first name:" << endl;
	cin.getline(firstname, 20);
	cout << "Enter your last name:" << endl;
	cin.getline(lastname,20);
	strcat(firstname, ", ");
	strcat(firstname, lastname);
	cout << firstname << endl;
}

void Four4()
{
	string name;
	string firstname;
	string lastname;
	cout << "Enter your first name:" << endl;
	getline(cin,firstname);
	cout << "Enter your last name:" << endl;
	getline(cin,lastname);
	name = firstname + ", " + lastname;
	cout << name << endl;
	
}

void Four5()
{
	CandyBar* Snack = new CandyBar;
	Snack->bland = "Mocha Munch";
	Snack->calories = 350;
	Snack->weight = 2.3;
	cout << Snack->bland << Snack->calories << Snack->weight;
	delete Snack;
}
void Four7()
{
	Pizza pizza;
	cout << "brand : " << endl;
	cin >> pizza.brand;
	cout << "diameter : " << endl;
	cin >> pizza.diameter;
	cout << "weight : " << endl;
	cin >> pizza.weight;
	cout << pizza.brand << endl << pizza.diameter << endl << pizza.weight << endl;

}

void Four8()
{
	Pizza* pizza = new Pizza;
	cout << "brand : " << endl;
	cin >> pizza->brand;
	cout << "diameter : " << endl;
	cin >> pizza->diameter;
	cout << "weight : " << endl;
	cin >> pizza->weight;
	cout << pizza->brand << endl << pizza->diameter << endl << pizza->weight << endl;
	delete pizza;

}

void Four10()
{
	array <double, 5> run = {0,0,0,0,0};
	for (int i = 0; i < 3; i++)
	{
		double total=0;
		cout << "Please enter your grade:" << endl;
		cin >> run[i];
		run[3] = i+1;
		for (int j = 0; j < i + 1; j++)
		{
			total = total + run[j];
		}
		run[4] = total / (i+1);

		cout << "run times : " << i+1 << "\t" << "Your average grade is: " << run[4] << endl;
	}

}

int main()
{
	//Four10();
/*	char ch;
	int count = 0;
	cout << "Enter" << endl;
	cin >> ch;
	while (cin.fail()==false)
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << "characters read\n";
	return 0;*/

	test* Test1 = new test;
	Test1->test2(7);
	cout << "test";
	delete Test1;
	cout << "2";
	system("pause");

	
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
