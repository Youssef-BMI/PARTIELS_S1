#include <iostream>
using namespace std;
int main() {
  const float coutHoraire = 4.0;
  int velosDispos = 20;
  int capacite = 20;
  int choix;
  int duree;
  do {
    cout << "****** Gestion d'une station Vélô ******" << endl << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Vélos disponibles : " << velosDispos << "\n";
    cout << " Points d'attache disponibles : " << capacite - velosDispos
         << "\n";
    cout << "-----------------------------------------" << endl << endl;
    cout << "1. Emprunter un vélô électrique" << endl;
    cout << "2. Restituer un vélô électrique" << endl;
    cout << "3. Estimer le coût de la location" << endl;
    cout << "4. Quitter l'application" << endl << endl;
    cin >> choix;
    cout << " Votre choix est,";
    
    switch (choix) {
    case 1:
      velosDispos --;
      std::cout << " Emprunter un vélô électrique\n";
      break;

    case 2:
      velosDispos ++;
      std::cout << " Restituer un vélô électrique\n";
      break;

    case 3:
      std::cout << " Estimer le coût de la location\n";
      std::cout << " Combien de temps souhaitez-vous conserver le vélo ? ( min )\n";
      std::cin >> duree;
      std::cout << " Le prix serra de :" << (duree*coutHoraire)/60 << "€\n" ;
      break;

    case 4:
      std::cout << " Quitter l'application\n";
      std::cout << "\n";
      std::cout << " Merci de votre uttilisation, AU-REVOIR !!\n";
      break;

    default:
      std::cout << " INCORECTE\n";
    }
    cout << "\n";
  } while (choix != 4) ;

      return 0;
}