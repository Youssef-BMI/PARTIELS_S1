#include <iostream>
using namespace std;
int main() {
  const float coutHoraire = 4.0;
  int velosDispos = 20;
  int capacite = 20;
  int choix;
  cout << "****** Gestion d'une station Vélô ******" << endl << endl;
  cout << "-----------------------------------------" << endl;
  cout << " Vélos disponibles : " << velosDispos << "\n";
  cout << " Points d'attache disponibles : " << capacite << "\n";
  cout << "-----------------------------------------" << endl << endl;
  cout << "1. Emprunter un vélô électrique" << endl;
  cout << "2. Restituer un vélô électrique" << endl;
  cout << "3. Estimer le coût de la location" << endl;
  cout << "4. Quitter l'application" << endl << endl;
  return 0;
}