#include <iostream>
#include <string>
using namespace std;

void reserva(){
	struct date{
		int day;
		int mon;
		int yea;
	};
	void modificarReserva(){
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
	int n=0;
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
};

