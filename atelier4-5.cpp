#include<iostream>
#include<set>
#include<vector>
#include<list>

using namespace std;

bool search1(set<int> S,int a)
{
        auto it = S.begin();
        for (; it != S.end(); it++)
        {   
            if(a==*it){return true;};
        }
        return false;
};
bool search(set<int> S,int a,int b,int c){
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
    for ( i = 1; i <= 100; i++)
    {
        S.insert(i);
    }

auto it1 = S.begin();
cout << "Le set est : \n";
    for (; it1 != S.end(); it1++)
    {
    cout << *it1<<"\t" ;
    }
cout<<endl;
cout<<"un nombre :"<<endl;
cin>>a;

cout<<search(S,20,30,a);
}
  