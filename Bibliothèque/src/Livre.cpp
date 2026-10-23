#include "Livre.h"
#include<iostream>
int Livre::nbLivres = 0;
Livre::Livre( std:: string t, std:: string a,int an):titre(t),auteur(a),annee(an){
  nbLivres++;
}
void Livre::afficher()const{
 std::cout<<"Titre: "<<titre
          <<",Auteur: "<<auteur
          <<",annee: "<<annee<<std::endl;
}
 void Livre::afficherTotal(){
std::cout <<"Nombre total de livres crees: "<<nbLivres<<std::endl;
}

