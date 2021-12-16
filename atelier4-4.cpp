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
        cout<<"saisissez le nom/le prenom/l'age ou STOP pour arreter la saisie  : \t";
        cin>>a;
        if(a=="STOP"){break;}
        else{
            L1.push_back(a);
        }
    };
    L1.sort();
    auto it=L1.begin();
    for(;it != L1.end();it++)
        cout<<*it<<endl;
}