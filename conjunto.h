#pragma once
#include "base.h"
#include "secuencia.h"
#include <iostream>
#include <vector>
class secuencia;

using namespace std;


class conjunto: public base
{
	/*
	conjunto
	lista de objetos sin orden
	el orden de los elementos no importa
	los conjuntos no considera los repetidos 
	E.G. S' {57,7,21} = S '' {5,7,7,7,21}
	*/

	public:
		//constructor
		conjunto();
		//variables
		int size;
		vector<int> vector_conjunto;
		bool isConjunto;
		//metodos
		void print();
		void create(int,int[]);
		void add(int);
	/*	secuencia* convert(conjunto*);*/
		void equals(conjunto,conjunto);
		void equals(conjunto,secuencia);
		void _union(conjunto,conjunto);
		void intersection(conjunto,conjunto);
};

