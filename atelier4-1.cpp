#include<iostream>
using namespace std;

//creation du classe Complex -------------------------------------------------------------------------------

class Complex { 
public:
	float real, img;
	Complex() { real = 0;img = 0; };
	Complex(float a, float b) { real = a;img = b; }; //Constructeur paramétré 
};

//surchrge de l'operation '+' -------------------------------------------------------------------------------

void operator+(Complex a, Complex b) { 
	Complex c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	cout << "l'addition est egale a " << c.real << "+ i" << c.img << endl;

};

//surchrge de l'operation '*' -------------------------------------------------------------------------------

void operator*(Complex a, Complex b) { 
	Complex c;
	c.real = a.real * b.real - b.img * a.img;
	c.img = a.real * b.img + a.img * b.real;
	cout << "la multiplication est egale a " << c.real << "+ i" << c.img << endl;

};

//surchrge de l'operation '-' -------------------------------------------------------------------------------

void operator-(Complex a, Complex b) { //surchrge de l'operation '-'
	Complex c;
	c.real = a.real - b.real;
	c.img = a.img - b.img;
	cout << "la soustraction est egale a " << c.real << "- i" << c.img << endl;

};
int main() {
    int a, b, c, d;
    cout << "Donner le premier nombre " << endl; //demande de la partie reele et imaginaire du 1ier nombre 
    cin >> a >> b;
    cout << "Donner le deuxieme nombre " << endl; //demande de la partie reele et imaginaire du 2eme nombre 
    cin >> c >> d;
	system("cls"); //nettoyer l'ecran d'affichage 
	Complex c1(a, b), c2(c, d); //construction des 2 nombres complexes
	c1 + c2; //operation +
	c1 - c2; //operation -
	c1 * c2; //operation +
};