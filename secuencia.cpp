#include "secuencia.h"

#include <iostream>

secuencia::secuencia()
{
	isConjunto = false;
}

secuencia::~secuencia()
{
}

void secuencia::print()
{
	for (int i = 0; i < 1; i++)
	{
		cout << "( ";

		for (int i : vector_sequencia)
			cout << i << " ";

		cout << ")";
	}
}

void secuencia::create(int s, int nums[])
{
	this->size = s;

	for (int i = 0; i < size; i++)
	{
		vector_sequencia.push_back(nums[i]);
	}
}
 
void secuencia::add(int e)
{
	vector_sequencia.push_back(e);
}

conjunto* secuencia::convert(secuencia* s)
{
	conjunto* c = reinterpret_cast<conjunto*>(&s);

	return c;
}

void secuencia::equals(secuencia s1, secuencia s2)
{
	if (s1.vector_sequencia == s2.vector_sequencia)
	{
		cout << "las dos sequencias son iguales" << endl;
	}

	else {
		cout << "las dos sequencias no son iguales" << endl;
	}
}

void secuencia::equals(secuencia s, conjunto c)
{

}

void secuencia::_union()
{

}

void secuencia::intersection()
{

}

