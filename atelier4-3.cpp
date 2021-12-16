#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> L;
    int a;
    float b;
    while(true){
       cout<<"siasissez votre nombre ou 0.5 pour terminer "<<endl;
        cin>>b; 
        if(b==0.5){
            break;
        }
        else {
            a=b;
            L.push_back(a);
        }
    };
    L.sort();
    auto i=L.begin();
    for(;i!=L.end();i++){
        cout<<*i<<"\t";}
}