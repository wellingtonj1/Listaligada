/*
 * Elemento.cpp
 *
 *  Created on: 13 de set de 2018
 *      Author: olegario
 */

#include "Elemento.h"

Elemento::Elemento() {
	// TODO Auto-generated constructor stub
    proximo=nullptr;
	numero=0;
}

Elemento::~Elemento() {
	// TODO Auto-generated destructor stub
    if(proximo!=nullptr)
		delete proximo;
}

