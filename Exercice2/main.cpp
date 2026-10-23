#include <iostream>
#include<universite.h>
#include<Etudiant.h>
using namespace std;

int main() {
    Universite u("Université de Casablanca");
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    e1.afficher();
    e2.afficher();

    Etudiant::afficherTotal(); // Doit afficher 2
}
