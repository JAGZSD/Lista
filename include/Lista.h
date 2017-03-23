#include "Nodo.h"

class Lista{
  
	public:
	Nodo *H,*T;
	Lista(int dato);
	Lista();
	void InsertarP(int dato);
	void InsertarF(int dato);
	void InsertarRef(int dato,int ref);
	bool IsVacio();
	Nodo* Buscar(int ref);
	Nodo* Buscar(int ref,Nodo *n);
	int BorrarP();
	int BorrarF();
	int BorrarRef(int ref);
	int Dato;
};
