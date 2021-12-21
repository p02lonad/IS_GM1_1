int main(){
  int adm;
  int val;

void admin(){
	struct nombre{
		int name;
		int apellido1;
		int apellido2;
    int idA;
	};
  
	void modificar(){
  cout<<"Introduzca el valor de funcionalidad segun lo que se quiera editar"<<endl;
  cout<<"1. Reservas"<<endl;
  cout<<"2. Usuarios"<<endl;
  cin>>val;
  switch(val){
      case 1:{
          cout<<"1.-Eliminar, 2.-Editar"<<endl;
           cin>>n;
           switch(n){
            case 1:{
              cout<<"Elimina una reserva"<<endl;}
             case 2:{
              cout<<"Edita una reserva"<<endl;}
              }break;
      case 2:{
         cout<<"1.-Eliminar, 2.-Editar"<<endl;
           cin>>m;
           switch(m){
            case 1:{
              cout<<"Elimina un usuario"<<endl;}
             case 2:{
              cout<<"Edita un usuario"<<endl;}
              }break;
          }break;
      }