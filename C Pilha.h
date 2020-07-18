#include <stdio.h>
#include <stdlib.h>

int const MAX = 100;
int pilha[MAX];
int topo;

void construtor()
{
	topo = -1;
}

bool vazia()
{
	return topo == -1;
}

bool cheia()
{
	return topo == (MAX -1);
}

bool inserir(int valor)
{
	if(cheia())
	{
		return false;
	}
	else
	{
		topo++;
		pilha[topo] = valor;
		return true;
	}
}

bool remover(int &valor)
{
	if(vazia())
	{
		return false;
	}
	else
	{
		valor = pilha[topo];
		topo--;
		return true;
	}
}

int tamanho()
{
	return topo+1;
}

bool pegarValor(int &valor)
{
	if(vazia())
	{
		return false;
	}
	else
	{
		valor = pilha[topo];
		return true;
	}
}