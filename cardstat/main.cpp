#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void sorteggio (int sorteggi, int valMax);

int controlloCoppieInt (int numero);

int main()
{
    int tipoMazzo, numSorteggi, valoreMassimo;

    do {
        cout << "Inserire il tipo di mazzo (40 o 52)" << endl;
        cin >> tipoMazzo;
        if (tipoMazzo != 40 && tipoMazzo != 52) {
            cout << "Non e' stato inserito un valore corretto" << endl;
        }
    } while (tipoMazzo != 40 && tipoMazzo != 52);

    if (tipoMazzo == 40) {
        valoreMassimo = 10;
    } else {
        valoreMassimo = 13;
    }

    do {
        cout << "inserire il numero di sorteggi da eseguire" << endl;
        cin >> numSorteggi;
        if (numSorteggi < 2) {
            cout << "Non e' stato inserito un valore corretto" << endl;
        }
    } while (numSorteggi < 2);
    cout << endl;
    sorteggio(numSorteggi, valoreMassimo);

    return 0;
}
void sorteggio (int sorteggi, int valMax) {
    char seme1, figura1, colore1, seme2, figura2, colore2;
    int valore1, valore2, sceltaSeme, sceltaColore;

    srand(time(NULL));

    for (int contatoreSort = sorteggi; contatoreSort>0; contatoreSort--){

        if (contatoreSort == sorteggi - 1) {
            valore2 = valore1;
            figura2 = figura2;
        }


        for (int contatore = sorteggi; contatore>0; contatore--){
           valore1 = 1 + (rand () % valMax);
           if (valore1 >= valMax - 3) {
                if (valore1 == (valMax - 2)) {
                    figura1 = 'F';
                } else if (valore1 == (valMax - 1)) {
                    figura1 = 'D';
                } else if (valore1 == valMax) {
                    figura1 = 'R';
                }

           } else {
                figura1 = NULL;
           }
         if (contatoreSort == sorteggi - 1) {

         }

        }

        if (contatoreSort == sorteggi - 1) {
            colore2 = colore1;
        }

        if (contatoreSort == sorteggi - 1) {
            seme2 = seme1;
        }

        for (int contatore = sorteggi; contatore>0; contatore--){
           sceltaSeme = (rand () % 4);
           switch (sceltaSeme) {
               case 0:
                   seme1 = 'C';
                   colore1 = 'r';
                   break;
               case 1:
                   seme1 = 'Q';
                   colore1 = 'r';
                   break;
               case 2:
                   seme1 = 'F';
                   colore1 = 'n';
                   break;
               case 3:
                   seme1 = 'P';
                   colore1 = 'n';
                   break;
           }
        }

        cout << seme1 << valore1 << colore1 << figura1 << endl;
        }
}
