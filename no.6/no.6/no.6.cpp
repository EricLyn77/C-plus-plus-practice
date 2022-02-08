// no.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void no6_1()
{
	using namespace::std;
	
	char ch;

	while((ch=cin.get())&&ch!='@')
	{
		if (!(ch >= '0'&&ch <= '9'))
		{
			if (islower(ch))
			{
				ch=toupper(ch);
			}
			else
			{
				ch=tolower(ch);
			}
			cout << ch;
		}
	}
}

void no6_2()
{
	using namespace::std;

	double* donation = new double[10];
	double total = 0;
	double average = 0;
	int higher = 0;
	int count = 0;
	double temp;

	while (cin >> temp && count<10)
	{
		*(donation + count) = temp;
		cout << *(donation + count) << endl;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		total = total + donation[i];
	}
	average = total / count;

	for (int i = 0; i < count; i++)
	{
		if (donation[i] > average)
		{
			higher++;
		}
	}
	cout << "average: " << average << "bigger: " << higher << endl;

	delete[] donation;
}

void no6_3()
{
	
}

int main()
{
	no6_2();
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
