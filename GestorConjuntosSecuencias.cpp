// GestorConjuntosSecuencias.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "base.h"
#include "conjunto.h"
#include "secuencia.h"

using namespace std;

int main()
{
	conjunto c,c2;
	secuencia s;


	int size = 5;
	int* nums = new int[size]();
	int* nums2 = new int[size]();
	int* nums_sec = new int[size]();

	int numinput;
	
	for (int i = 0; i < size; i++)
	{
		cout << "enter values for set: ";
		cin >> numinput;
		nums[i] = numinput;
	}

	c.create(size,nums);
	c.print();
	/*c.add(7);
	c.print();*/

	for (int i = 0; i < size; i++)
	{
		cout << "enter values for set: ";
		cin >> numinput;
		nums2[i] = numinput;
	}

	c2.create(size, nums2);
	c2.print();
	//c2.equals(c, c2);
	cout << endl;
	c2.intersection(c, c2);
	cout << endl;
	c2._union(c, c2);


	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "enter values for sec: ";
		cin >> numinput;
		nums_sec[i] = numinput;
	}


	s.create(size, nums_sec);
	s.print();
	s.add(3);
	s.print();

	//conjunto* cp = &c;

	//secuencia* rs = c.convert(cp);

	//rs->print();

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
