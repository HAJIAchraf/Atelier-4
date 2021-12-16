#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){
    string a;
    int c;
    list<string>L1;
cout<<"Bonjour "<<endl;
    while(true){
        cout<<"saisissez le nom/le prenom/l'age ou STOP pour arreter la saisie  : \t"; //saisie des données sous forme d'une chaine de caracteres 
        cin>>a;
        if(a=="STOP"){break;}
        else{
            L1.push_back(a); //addition des elements a la liste 
        }
    };
    L1.sort(); //tri des elements saisis 
    auto it=L1.begin(); //declaration de l'iterateur 
    for(;it != L1.end();it++)
        cout<<*it<<endl; //affichage
}