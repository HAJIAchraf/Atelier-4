#include <iostream>
#include <list>
 
using namespace std;
 
// class Animal
class Animal{
    protected:
    string nom;
    int age;
    string genre;
 
    public:
    void setNom(string nom);
    void setAge(int age);
    void setGenre(string genre);
    string getNom();
    int getAge();
    string getGenre();
};
 
void Animal::setNom(string nom){
    this ->nom = nom;
}
void Animal::setAge(int age){
    this ->age = age;
}
void Animal::setGenre(string genre){
    this ->genre = genre;
}
string Animal::getNom(){
    return this ->nom;
}
int Animal::getAge(){
    return this ->age;
}
string Animal::getGenre(){
    return  this ->genre;
}
// class Repas, Element
class Element{
    private:
    string nom;
    string type;
    public:
    void setNom(string nom){
        this->nom = nom;
    }
    void setType(string type){
        this -> type = type;
    }
    string getNom(){
        return this->nom;
    }
    string getType(){
        return this -> type;
    }
};
 
class Repas{
    private:
    string nom;
    int heure;
    string description;
    list <Element> elementsList;
    public:
    void setNom(string nom){
        this->nom = nom;
    }
    void setHeure(int heure){
        this->heure = heure;
    }
    void setDescription(string description){
        this->description = description;
    }
    void setElementsList(list <Element> elementsList){
        this->elementsList = elementsList;
    }
    string getNom(){
        return this->nom;
    }
    int getHeure(){
        return this->heure;
    }
    string getDescription(){
        return this->description;
    }
    list <Element> getElementsList(){
        return this->elementsList;
    }
};
// class Chat
class Chat: public Animal{
    private:
    string type;
    Repas chatRepas;
    public:
    void setType(string type){
        this -> type = type;
    }
    void setRepas(Repas chatRepas){
        this->chatRepas = chatRepas;
    }
    string getType(){
        return this -> type;
    }
    Repas getRepas(){
        return this->chatRepas;
    }
    void sauter(){
        cout << "hyaaa3\n";
    }
};
// class Race
class Race{
    protected:
    string specifite;
    bool isRaceHybride(){
        if (specifite=="hybride"){
            return true;
        }
        return false;
    }
    public:
    void setSpecifite(string specifite){
        this->specifite = specifite;
    }
    string getSpecifite(){
        return this->specifite;
    }
};
 
// class Chien
class Entraineur;
class Chien:public Animal,Race{
    private:
    string taille;
    list <Entraineur> entraineurList;
    public:
    //setters
    void setTaille(string taille){
        this->taille = taille;
    }
    void setEntraineurList(list <Entraineur> entraineurList){
        this->entraineurList = entraineurList; 
    }
    // getters
    string getTaille(){
        return this->taille;
    }
    list <Entraineur> getEntraineurList(){
        return this->entraineurList;
    }
    // other
    bool isChass3(){
        return true;
    }
};
 
// class Entraineur
class Entraineur{
    private:
    string nom;
    string description;
    list <Chien> chienList;
    public:
    // setters
    void setNom(string nom){
        this->nom = nom;
    }
    void setDescription(string description){
        this->description = description;
    }
    void setChienList(list <Chien> chienList){
        this->chienList = chienList;
    }
    // getters
    string getNom(){
        return this->nom;
    }
    string getDescription(){
        return this->description;
    }
    list <Chien> getChienList(){
        return this->chienList;
    }
};
 
// class Compitition
class Compitition{
    private:
    string date;
    string nom;
    Chien chien;
    Entraineur entraineur;
    public:
    int ordre;
    // setters
    void setDate(string date){
        this->date = date;
    }
    void setNom(string nom){
        this->nom = nom;
    }
    void setChien(Chien chien){
        this->chien = chien;
    }
    void setEntraineur(Entraineur entraineur){
        this->entraineur = entraineur;
    }
    // getters
    string getDate(){
        return this->date;
    }
    string getNom(){
        return this->nom;
    }
    Chien getChien(){
        return this->chien;
    }
    Entraineur getEntraineur(){
        return this->entraineur;
    }
};