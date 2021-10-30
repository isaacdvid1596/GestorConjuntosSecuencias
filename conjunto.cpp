#include "conjunto.h"
#include <iostream>
#include <algorithm>

using namespace std;

conjunto::conjunto(){
	
	size = 0;
	isConjunto = true;
}

//se crea el conjunto

void conjunto::create(int s,int nums [])
{
	this->size = s;

	for (int i = 0; i < size; i++)
	{
		vector_conjunto.push_back(nums[i]);
	}
}

//se imprime el conjunto

void conjunto::print()
{
	for (int i = 0; i < 1; i++)
	{
		cout << "{ ";

		for (int i : vector_conjunto)
			cout << i << " ";

		cout << "}";
	}
}

//agregar elemento al conjunto

void conjunto::add(int e)
{
	vector_conjunto.push_back(e);
}

//secuencia* conjunto::convert(conjunto* c)
//{
//	secuencia* s = dynamic_cast<secuencia*>(c);
//
//	return s;
//}

void conjunto::equals(conjunto c1,conjunto c2)
{

}

void conjunto::equals(conjunto c, secuencia s)
{

}

void conjunto::_union(conjunto c1, conjunto c2)
{
	vector<int> union_vector;

	sort(c1.vector_conjunto.begin(), c1.vector_conjunto.end());
	sort(c2.vector_conjunto.begin(), c2.vector_conjunto.end());

	set_union(c1.vector_conjunto.begin(), c1.vector_conjunto.end(), c2.vector_conjunto.begin(), c2.vector_conjunto.end(), back_inserter(union_vector));


	for (int i = 0; i < 1; i++)
	{
		cout << "union de los conjuntos: ";
		cout << "{ ";

		for (int i : union_vector)
			cout << i << " ";

		cout << "}";
	}

}

void conjunto::intersection(conjunto c1, conjunto c2)
{

	vector<int> intersection;

	sort(c1.vector_conjunto.begin(), c1.vector_conjunto.end());
	sort(c2.vector_conjunto.begin(), c2.vector_conjunto.end());

	set_intersection(c1.vector_conjunto.begin(), c1.vector_conjunto.end(), c2.vector_conjunto.begin(), c2.vector_conjunto.end(), back_inserter(intersection));

	for (int i = 0; i < 1; i++)
	{
		cout << "interseccion de los conjuntos: ";
		cout << "{ ";

		for (int i : intersection)
			cout << i << " ";

		cout << "}";
	}
}
