#include <iostream>
#include <string>
using namespace std;

void testaccesoswitchtrue(){		//prueba unitaria 001 //
	int b=1, f;
	f=b;
	bool resultado=b;
	ASSERT_EQUAL(f, resultado);
}
void testaccesoswitchfalse(){		//prueba unitaria 002
	int a=3, f;
	f=a;
	bool resultado=a;
	ASSERt_EQUAL(f, resultado);

struct reserva{			//se crea la clase reserva.
	struct date{
		int day;
		int mon;
		int yea;
	};
	void modificarReserva(){		//se generan los atributos y funciones de la clase reserva.
		int dplus=0;
		int nplus=0;
		int day;
		do{
		cout<<"Introduzca los dias de ampliacion"<<endl;
		cin>>dplus;
			if(dplus>7){
				cout<<"No se puede ampliar mas de una semana"<<endl;
			}
			else{
				day+dplus=day;
				nplus++;
			}
		}while(nplus<1);
	}

	void cancelarReserva(){
				int day=0;
				int mon=0;
				int yea=0;
			}
	void reservar(){
				int nres=0;
				int day;
				int dplus;
				do{
					cout<<"Introduzca el tiempo que quiere reservar estos nucleos"<<endl;
								cin<<dplus;
					if(dplus<30){
						cout<<"No se puede hacer una reserva de mas de un mes"<<endl;
						cin>>dplus;
					}
					else{
						nres++;
					}
				}while(nres<0);
			}
}


int main(){
	string usuario;
	string contrasena;
	string usuariobd;
	string contrasenabd;
	int n=0, fun=0;
	cout<<"Introduzca un numero para acceder a una funcionalidad del sistema"<<endl;	//acceso a las varias funcionalidades del sistema
	cout<<"1.Cambio de contrasena"<<endl;
	cout<<"2.Eliminacion de reservas"<<endl;
	cin>>fun;
	switch(fun){
	case 1:{				//funcionalidad de cambio de contraseña (tarea 2.3)

	cout<<"Introduzca su usuario"<<endl;
	cin>>usuario;
	cout<<"Introduzca su contrasena"<<endl;
	cin>>contrasena;
	do{
		cout<<"Introduzca su anterior contrasena para el cambio de contrasena"<<endl;
		cin>>contrasenabd;
		if(contrasena==contrasenabd){
			cout<<"Introduzca su nueva contrasena"<<endl;
			cin>>contrasena;
			n++;
		}
		else{
			cout<<"Contrasena incorrecta"<<endl;
		}
	}while(n<1);
	return 0;
}break;
	case 2:{					//funcionalidad de eliminación de reserva (tarea 3.2)
	int iden=0, idenbd, elim=0, nelim=0;
	cout<<"Introduzca el identificador de la reserva que desea eliminar"<<endl;
	do{
		cin>>iden;
		if(iden==idenbd){
			cout<<"¿Desea eliminar su reserva "<<iden<<"? 0=N, 1=Y"<<endl;
			cin>>elim;
			switch(elim){
			case 0:{
				cout<<"Su reserva no ha sido eliminada"<<endl;
			}break;
			case 1:{
				iden=0;
				cout<<"Su reserva ha sido eliminada correctamente"<<endl;
			}
		}
	nelim=1;
		}else{
		cout<<"Su identificador no coincide"<<endl;
	}

	}while(nelim==0);
	}break;
	}
}


