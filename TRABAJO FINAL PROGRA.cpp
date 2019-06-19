#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	srand(time(NULL));
	int res=1, jugadaU;
	char * jugada;
	char * jugadaM;
	char * jugadas[]={"Piedra","Papel","Tijeras"};
	while(res){
		cout<<"Jugador. Favor ingresa tu opcion: [1:Piedra; 2:Papel; 3:Tijeras]: ";
		cin>>jugadaU;
		jugada=jugadas[jugadaU-1];
		jugadaM=jugadas[(int) rand()%3];
		if ((jugada=="Piedra")&&(jugadaM=="Tijeras" ) )
		cout<<"GANASTE JUGADOR. La maquina jugo: "<<jugadaM<<"\n";
		else if ((jugada=="Papel")&&(jugadaM=="piedra"))
		cout<<"GANASTE JUGADOR. La maquina jugo: "<<jugadaM<<"\n";
		else if ((jugada=="Tijeras")&&(jugadaM=="Papel" ) )
		cout<<"GANASTE JUGADOR. La maquina jugo: "<<jugadaM<<"\n";
		
		if ((jugadaM=="Piedra")&&(jugada=="Tijeras" ) )
		cout<<"PERDISTE. La maquina jugo: "<<jugadaM<<"\n";
		else if ((jugadaM=="Papel")&&(jugada=="Piedra" ) )
		cout<<"PERDISTE. La maquina jugo: "<<jugadaM<<"\n";
		else if((jugadaM=="Tijeras")&&(jugada=="Papel" ) )
		cout<<"PERDISTE. La maquina jugo: "<<jugadaM<<"\n";
		
		if (((jugadaM=="Piedra")&&(jugada=="Piedra" ) )||((jugadaM=="Papel" )&&(jugada=="Papel") )||((jugadaM=="Tijeras" )&&(jugada=="Tijeras" ) ) )
		cout<<"Esto es un EMPATE.\n";
		cout<<"\nDesea continuar ? 1:si  0:no" ; cin>>res;
		
	}
	_getch(); 
}

