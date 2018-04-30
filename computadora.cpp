#include <iostream>
#include <string>

using namespace std;

class Computadora
{
public:
	int memoriaRam;
	int discoDuro;
	string marca;
	string modelo;
	bool equipo;
	bool red;
	Computadora()
	{
		memoriaRam =0 ;
		discoDuro =0;
		equipo = false;
		red = false;
	}

	void conectar(){
		red = true;
	}

	void desconectar(){
		red = false;
	}

	void encender(){
		equipo = true;
	}
	void apagar(){
		equipo = false;
	}

	void mostrarDatos(){
		cout << "Marca......: " << marca << endl
			 << "Modelo.....: " << modelo << endl
			 << "Memoria RAM: " << memoriaRam << endl
			 << "Disco Duro.: " << discoDuro << endl
			 << "Equipo.....: ";
		if (equipo == true)
			cout << "ENCENDIDO\n";
		else
			cout << "APAGADO\n";

		cout << "Red.......: " ;
		if (red == true)
			cout << "CONECTADO\n";
		else
			cout << "DESCONECTADO\n";



	}

	void pedirDatos(void){
		cout << "Marca......: ";
		getline(cin, marca);
		cout << "Modelo......: ";
		getline(cin, modelo);
		cout << "Memoria RAM.: ";
		cin >> memoriaRam;
		cout << "Disco Duro..: ";
		cin >> discoDuro;

	}
};

int main()
{
	Computadora cpu;
	cpu.pedirDatos();
	cpu.encender();
	cpu.conectar();
	cpu.mostrarDatos();

	cpu.desconectar();
	cpu.mostrarDatos();

	system("PAUSE");
	return 0;
}
