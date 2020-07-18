#include <stdio.h>
#include <stdlib.h>

int const MAX = 100;

int pos_frente, pos_tras;
int Fila[MAX];

void filaConstrutor()
{
	pos_frente = 0;
	pos_tras = -1;
}

bool filaVazia()
{
	return (pos_frente == pos_tras+1);
}

bool filaCheia()
{
	return pos_tras>(MAX - 1);
}

bool Inserir(int valor)
{
	if(filaCheia())
	{
		if(pos_frente==0)
		{
			return false;
		}
		else
		{
			pos_tras = 0;
			fila[pos_tras] = valor;
			return true;
		}
	}
	else
	{
		pos_tras++;
		fila[pos_tras] = valor;
		return true;
	}
}

bool Remover(int &valor)
{
	if(filaVazia())
	{
		return false;
	}
	else
	{
		valor = fila[pos_frente];
		pos_frente++;
		if(pos_frente == MAX)
		{
			pos_frente = 0;
		}
		return true;
	}
}

bool pegarValor(int &valor)
{
	if(filaVazia())
	{
		return false;
	}
	else
	{
		valor = fila[pos_frente];
		return true;
	}
}

int Tamanho()
{
	return (pos_tras - pos_frente) + 1;
}

int main()
{
	filaConstrutor();
}