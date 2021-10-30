#pragma once

#include <iostream>
#include <vector>

using namespace std;

class base
{
	public:
		//constructor
		base();
		//variables
		int size;
		vector<int> vector_conjunto;
		bool isConjunto;
		//metodos
		virtual void print();
		virtual void create();
		virtual void add(int);
		virtual void convert();
		virtual void equals();
		virtual void _union();
		virtual void intersection();
};

