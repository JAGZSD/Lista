#include "Lista.h"

Lista::Lista(){
	this->H=NULL;
	this->T=NULL;
}

Lista::Lista(int dato){
	Nodo *m= new Nodo(dato);
	this->H=m;
	this->T=H;
}

bool Lista::IsVacio(){
	return (this->H == NULL && this->T == NULL);
}

void Lista::InsertarP(int dato){
	Nodo *m= new Nodo(dato,this->H);
	std::cout<<"datos introducidos"<<std::endl;
	if (IsVacio())
	this->T=m;
	this->H=m;
}

void Lista::InsertarF(int dato){
	Nodo *m= new Nodo(dato);
	std::cout<<"datos introducidos"<<std::endl;
	if (IsVacio())
	{
		this->T=m;
		this->H=m;
		return ;
	}

	this->T->Sig=m->Sig;
	this->T=m;
	return ;
	}

	Nodo* Lista::Buscar(int ref){
	Nodo *aux = this->H;

	if (IsVacio())
	{
	        std::cout<<"La lista esta vacia."<<std::endl;
		return NULL;
	}

	while(aux->Dato != ref){
		if(aux->Sig == NULL){
		std::cout<<"No existe la referencia."<<std::endl;
			return NULL;
		}
		aux=aux->Sig;
	}

	return aux;
}

void Lista::InsertarRef(int dato,int ref){
	if (IsVacio())
	{
		std::cout<<"La lista esta vacia."<<std::endl;
		return ;
	}
	Nodo *m= Buscar(ref);
	if (m==NULL)
	{
		return ;
	}
	if (m->Sig==NULL)
	{
		InsertarF(dato);
		return ;
	}
	Nodo *n= new Nodo(dato,m->Sig);
	m->Sig=n->Sig;
	return ;
	}

	Nodo* Lista::Buscar(int ref,Nodo *n){
	if (IsVacio())
	{
		std::cout<<"La lista esta vacia."<<std::endl;
		return NULL;
	}

	if (n->Dato != ref)
	{
		if(n->Sig == NULL){
			std::cout<<"No existe la referencia."<<std::endl;
			return NULL;
		}
		return Buscar(ref,n->Sig);
	}

	return n;
}

int Lista::BorrarP(){	
	int d = this->H->Dato;
	if (IsVacio())
	{
		std::cout<<"La lista esta vacia."<<std::endl;
		return d;
	}
	Nodo *aux = this->H;
	this->H = this->H->Sig;

	if (this->H == NULL)
		this->T = NULL;

	aux->Sig=NULL;
	std::cout<<"dato inicial borrado"<<std::endl;
	return d;
}

int Lista::BorrarF(){
	int d = this->H->Dato;
	if (IsVacio())
	{
		std::cout<<"La lista esta vacia."<<std::endl;
		return d;
	}
	Nodo *aux = this->H;
	if (this->H == this->T)
	{
		this->H = NULL;
		this->T = NULL;
		std::cout<<"dato final borrado"<<std::endl;
		return d;
	}

	while(aux->Sig != this->T)
		aux=aux->Sig;

	this->T=aux;
	this->T->Sig=NULL;
	return d;
}

int Lista::BorrarRef(int ref){
	if (IsVacio())
	{
		std::cout<<"La lista esta vacia."<<std::endl;
		return ref;
	}

	Nodo *r=Buscar(ref);
	if (r == NULL)
	{
		std::cout<<"No existe la referencia."<<std::endl;
		return ref;
	}

	if (this->H == this->T)
	{
		this->H = NULL;
		this->T = NULL;
		std::cout<<"Referencia Borrada"<<std::endl;
		return ref;
	}

	Nodo *ant= this->H;

	while(ant->Sig != r)
		ant=ant->Sig;

	ant->Sig=r->Sig;
	r->Sig=NULL;
	return ref;
}
