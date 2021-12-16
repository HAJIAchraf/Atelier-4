#include<iostream>
#include<string>
using namespace std;


int main() {
	string date(12,'*');
    int i;
	cout << "donnez votre date" << endl;
	cin >> date;
    if(date.length() != 12)
        cout<<"date non valide";
        else {   
        cout << "Votre date est : " << date.substr(0,2) << "/" << date.substr(2,2) << "/" << date.substr(4,4);
        cout << " " <<date.substr(8,2) << ":" << date.substr(10,2) << endl;
        };
}