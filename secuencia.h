#pragma once
#include "base.h"
#include "conjunto.h"
class conjunto;

class secuencia: public base
{
	/*
	secuencia
	lista de objetos con algun orden
	Las secuencias consideran el orden
	En las secuencias si cuentan repetidos
	E.G. S' {57,7,21} != S '' {5,7,7,7,21}
	*/

	public:
		//constructor
		secuencia();
		//variables
		int size;
		vector<int> vector_sequencia;
		bool isConjunto;
		//metodos
		void print();
		void create(int, int[]);
		void add(int);
	/*	conjunto* convert(secuencia*);*/
		void equals(secuencia,secuencia);
		void equals(secuencia,conjunto);
		void _union();
		void intersection();
};

