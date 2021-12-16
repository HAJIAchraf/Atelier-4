#include <iostream>
using namespace std;
class Test
{
public:
    static int tableau[] ;
public :
    static int division(int indice, int diviseur){
        if( diviseur == 0 ) throw "Division par 0 !!!";
        if(indice>10 || indice<0 ) throw "indice !!!!";
        return tableau[indice]/diviseur;
    }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
try{
int x, y;
float k;
cout << "Entrez l'indice de l'entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;

cout << "Le resultat de la division est: "<< endl;
k=Test::division(x,y);
cout<<k;

}
catch (const char* e) {
cerr << e << endl;
}
return 0;
}