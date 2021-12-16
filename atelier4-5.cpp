#include<iostream>
#include<set>
#include<vector>
#include<list>

using namespace std;

bool search1(set<int> S,int a) //fonction avec 2 parametres 
{
        auto it = S.begin();
        for (; it != S.end(); it++)
        {   
            if(a==*it){return true;};
        }
        return false;
};
bool search(set<int> S,int a,int b,int c){ //fonction avc 3 parametres
        auto it = S.find(a);
        for (; it != S.find(b); it++)
        {   
            if(c==*it){return true;};
        }
        return false;
    };


int main(){
    vector<int> V;
    set<int> S;
    float Tab[100];
    int i,a,b,c; 
    for ( i = 1; i <= 100; i++) //addition des elements de 1 -> 100
    {
        S.insert(i);
    }

auto it1 = S.begin();
cout << "Le set est : \n"; 
    for (; it1 != S.end(); it1++) //affichage des elements 
    {
    cout << *it1<<"\t" ;
    }
cout<<endl;
cout<<"un nombre :"<<endl; //demande du nombre a chercher
cin>>a;

cout<<search(S,20,30,a);
}
  