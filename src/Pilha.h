/*
 * Pilha.h
 *
 *  Created on: 13 de set de 2018
 *      Author: olegario
 */

#ifndef PILHA_H_
#define PILHA_H_
#include "Elemento.h"
class Pilha {
public:
	Pilha();
	virtual ~Pilha();
	void push(Elemento* novo);
	Elemento* pop();
private:
	Elemento* topo;
};

#endif /* PILHA_H_ */
