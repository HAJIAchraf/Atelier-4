#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> L;
    int a;
    float b;
    while(true){ //boucle infinie pour saisir les données
       cout<<"siasissez votre nombre ou 0.5 pour terminer "<<endl;
        cin>>b; 
        if(b==0.5){ //valeur 0.5 pour sortir du boucle 
            break;
        }
        else { //ajouter les données 
            a=b;
            L.push_back(a);
        }
    };
    L.sort(); //tri des elements 
    auto i=L.begin(); //declaration de l'iterateur
    for(;i!=L.end();i++){
        cout<<*i<<"\t";} //affichage
}