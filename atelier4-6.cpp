#include <iostream>
using namespace std;
class Test //creation d'une classe Test
{
public:
    static int tableau[] ;
public :
    static int division(int indice, int diviseur){ //fonction de division 
        if( diviseur == 0 ) throw "Division par 0 !!!"; //1ier exception
        if(indice>10 || indice<0 ) throw "indice !!!!"; //2eme exception
        return tableau[indice]/diviseur;
    }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
try{ //essayer au cas ou il y a une exception 
int x, y;
float k;
cout << "Entrez l'indice de l'entier a diviser: " << endl; //demande de l'indice 
cin >> x ;
cout << "Entrez le diviseur: " << endl; //demende du diviseur 
cin >> y ;

cout << "Le resultat de la division est: "<< endl; //affichage du resultat 
k=Test::division(x,y); //resltat 
cout<<k;

}
catch (const char* e) { //reporter l'erreur
cerr << e << endl; //afficher le message d'erreur
}
return 0;
}