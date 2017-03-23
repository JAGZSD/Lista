#include "Lista.h"

int main()
{
  
menu:
	int opc,dato,ref,g;
        Lista l(dato);

system("clear");
std::cout<<"Ingresa la opcion que quieras: \n\n  "<<std::endl;
std::cout<<"Opcion 1: Insertar Principio "<<std::endl;
std::cout<<"Opcion 2: Insertar Final "<<std::endl;
std::cout<<"Opcion 3: Insertar Referencia "<<std::endl;
std::cout<<"Opcion 4: Borrar Principio "<<std::endl;
std::cout<<"Opcion 5: Borrar Final "<<std::endl;
std::cout<<"Opcion 6: Borrar Referencia "<<std::endl;
std::cout<<"Opcion 7: Salir \n"<<std::endl;
std::cin>> opc ; 


switch(opc){
	case 1:
		std::cout<<"Introduce el dato:"<<std::endl;
		std::cin>> dato;
		l.InsertarP(dato);
		break;
	case 2:
		std::cout<<"Introduce el dato:"<<std::endl;
		std::cin>> dato;
		l.InsertarF(dato);
		break;
	case 3:
		std::cout<<"Introduce el dato:"<<std::endl;
		std::cin>> dato;
		std::cout<<"Introduce la Referencia:"<<std::endl;
		std::cin>> ref;
		std::cout<<"datos introducidos"<<std::endl;
		l.InsertarRef(dato,ref);
		break;
	case 4:
		l.BorrarP();
		break;
	case 5:
		l.BorrarF();
		break;
	case 6:
		std::cout<<"Introduce la referencia:"<<std::endl;
		std::cin>> dato;
		l.BorrarRef(dato);
		break;
	case 7:
		return 0;
		break;
	default:
	std::cout<<"Opcion Invalida"<<std::endl;
	break;
}

std::cout<<"Deseas repetir el programa si=1 no=0 "<<std::endl;
std::cin>>g;

if (g==1)
    goto menu;

return 0;

}