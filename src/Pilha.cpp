/*
 * Pilha.cpp
 *
 *  Created on: 13 de set de 2018
 *      Author: olegario
 */

#include "Pilha.h"

Pilha::Pilha() {
	// TODO Auto-generated constructor stub
    topo=nullptr;
}

Pilha::~Pilha() {
	// TODO Auto-generated destructor stub
	delete topo;
}

void Pilha::push(Elemento* novo){
    if(topo==nullptr)
		topo = novo;
	else{
		novo->setProximo(topo);
		topo = novo;
	}
}
Elemento* Pilha::pop(){
    if(topo==nullptr)
		throw "Pilha vazia";
	else{
		Elemento* aux = topo;
		topo = topo->getProximo();
        aux->setProximo(nullptr);
		return aux;
	}
}

