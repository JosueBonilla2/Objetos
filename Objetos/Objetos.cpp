
/**
	Progaramacion oreintada a objetos
	Tarea 1
	Josue Bonilla Cárdenas
	Reg:22110106
	CETI colomos
	13/Agosto/2022
**/

#include <iostream>

using namespace std;

class Lapiz {

	 //atributos

 public:
	 float grosor = 0.01;
	 int precio = 5;
	 char color[20] = "griz";

	 //metodos 

public:
	void escribir();
	void dibujar();
	void apuñalar();
};

void Lapiz::escribir() {
	cout << "Estas escribiendo con el lapiz" << endl;
}
void Lapiz::dibujar() {
	cout << "Esta dibujando con el lapiz" << endl;
}
void Lapiz::apuñalar() {
	cout << "Esta apuñalando con el lapiz" << endl;
}

class Cuaderno {

	//atributos

public:
	int num_hojas = 100;
	int precio = 20;
	char tipo[25] = "Cuadro chico";

	//metodos 

public:
	void anotar();
	void dibujar();
	void escribir();
};

void Cuaderno::escribir() {
	cout << "Estas escribiendo en el cuaderno" << endl;
}
void Cuaderno::dibujar() {
	cout << "Esta dibujando en el cuaderno" << endl;
}
void Cuaderno::anotar() {
	cout << "Esta anotando en el cuaderno" << endl;
}

class Carro {

	//atributos

public:
	char modelo[20] = "ferrari";
	int precio = 20;
	char color[25] = "Negro";

	//metodos 

public:
	void prender();
	void acelerar();
	void frenar();
};

void Carro::prender() {
	cout << "El carro esta encendido" << endl;
}
void Carro::frenar() {
	cout << "El carro esta acelerando" << endl;
}
void Carro::acelerar() {
	cout << "El carro esta apagado" << endl;
}

class Escalera {

	//atributos

public:
	char altura[5] = "2m";
	int precio = 200;
	int num_escalones = 20;
	char color[25] = "Negro";

	//metodos 

public:
	void subir();
	void bajar();
	void alcanzar();
};

void Escalera::subir() {
	cout << "Estas subiendo por la escalera" << endl;
}
void Escalera::bajar() {
	cout << "Estas bajando por la escalera" << endl;
}
void Escalera::alcanzar() {
	cout << "Estas alcanzando algo con la escalera" << endl;
}

class Estufa {

	//atributos

public:
	char altura[5] = "1m";
	char anchura[5] = "85cm";
	int precio = 2000;
	char color[25] = "plata";

	//metodos 

public:
	void cocinar();
	void ornear();
	void guardar_bolsas();
};

void Estufa::cocinar() {
	cout << "Estas cocinando en la estufa" << endl;
}
void Estufa ::ornear() {
	cout << "Estas orneando en la estufa" << endl;
}
void Estufa::guardar_bolsas() {
	cout << "Estas guardando bolsas en la estufa, NACO" << endl;
}



int main(int argc, char** argv) {

	cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 1\n\n" << endl;

	Lapiz lapiz;
	Cuaderno cuaderno;
	Carro carro;
	Escalera escalera;
	Estufa estufa;

	lapiz.grosor;
	lapiz.precio;
	lapiz.color;

	cuaderno.num_hojas;
	cuaderno.precio;
	cuaderno.tipo;

	carro.color;
	carro.precio;
	carro.modelo;

	escalera.altura;
	escalera.color;
	escalera.num_escalones;
	escalera.precio;

	estufa.altura;
	estufa.anchura;
	estufa.color;
	estufa.precio;


	cout << "\nobjeto 1: Lapiz" << endl;
	cout << "atruibutos:" << endl;
	cout << "Grosor:" << lapiz.grosor << endl;
	cout << "Precio:" << lapiz.precio << endl;
	cout << "Color:" << lapiz.color << endl;

	cout << "metodos:" << endl;
	lapiz.escribir();
	lapiz.dibujar();
	lapiz.apuñalar();


	cout << "\nobjeto 2: Cuaderno" << endl;
	cout << "atruibutos:" << endl;
	cout << "Numero de hojas:" << cuaderno.num_hojas << endl;
	cout << "Precio:" << cuaderno.precio << endl;
	cout << "Tipo:" << cuaderno.tipo << endl;

	cout << "metodos:" << endl;
	cuaderno.anotar();
	cuaderno.dibujar();
	cuaderno.escribir();


	cout << "\nobjeto 3: Carro" << endl;
	cout << "atruibutos:" << endl;
	cout << "Color:" << carro.color << endl;
	cout << "Modelo:" << carro.modelo << endl;
	cout << "Precio:" << carro.precio << endl;

	cout << "metodos:" << endl;
	carro.acelerar();
	carro.frenar();
	carro.prender();


	cout << "\nobjeto 4: Escalera" << endl;
	cout << "atruibutos:" << endl;
	cout << "Numero de escalones:" << escalera.num_escalones << endl;
	cout << "Precio:" << escalera.precio << endl;
	cout << "Tipo:" << escalera.color << endl;
	cout << "altura:" << escalera.altura << endl;

	cout << "metodos:" << endl;
	escalera.alcanzar();
	escalera.bajar();
	escalera.subir();


	cout << "\nobjeto 5: Estufa" << endl;
	cout << "atruibutos:" << endl;
	cout << "Altura:" << estufa.altura << endl;
	cout << "Anchura:" << estufa.anchura << endl;
	cout << "Color:" << estufa.color << endl;
	cout << "Precio:" << estufa.precio << endl;

	cout << "metodos:" << endl;
	estufa.cocinar();
	estufa.ornear();
	estufa.guardar_bolsas();

	return 0;
}