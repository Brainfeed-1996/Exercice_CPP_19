/*
Afficher un triangle isocèle formé d’étoiles. La hauteur du triangle (c’est-à-dire le nombre de lignes) sera fourni en donnée
On s’arrangera pour que la dernière ligne du triangle s’affiche sur le bord gauche de l’écran.
*/

#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    const char carac = '*';
    int nombreLignes;
    int cpteurDeLignes;
    int nesp; //Nombre d'espaces précédant une étoile
    int j;
    
    cout << "Combien de lignes ? : ";
    cin >> nombreLignes;
    for(cpteurDeLignes=0;cpteurDeLignes<nombreLignes;cpteurDeLignes++){
        nesp = nombreLignes - cpteurDeLignes - 1;
        for(j=0; j<nesp;j++) cout << ' ';
        for(j=0; j<2*cpteurDeLignes+1;j++) cout << carac;
        cout << '\n';
    }
}

/*Résultat :
Combien de lignes ? : 20
                   *
                  ***
                 *****
                *******
               *********
              ***********
             *************
            ***************
           *****************
          *******************
         *********************
        ***********************
       *************************
      ***************************
     *****************************
    *******************************
   *********************************
  ***********************************
 *************************************
***************************************
*/
