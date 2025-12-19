#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void sorteggio (int a, int valMax);
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
void sorteggio (int a, int valMax) {
    char seme, figura, colore;
    int valore, sceltaSeme, sceltaColore;

    srand(time(NULL));

    for (int contatore=a; contatore>0; contatore--){
        for (int contatore=a; contatore>0; contatore--){
           valore = 1 + (rand () % valMax);
           if (valore >= valMax - 3) {
                if (valore == (valMax - 2)) {
                    figura = 'F';
                } else if (valore == (valMax - 1)) {
                    figura = 'D';
                } else if (valore == valMax) {
                    figura = 'R';
                }

           } else {
                figura = NULL;
           }

        }

        for (int contatore=a; contatore>0; contatore--){
           sceltaColore = (rand () % 2);
           if (sceltaColore == 0) {
                colore = 'r';
           } else {
                colore = 'n';
           }
        }

        for (int contatore=a; contatore>0; contatore--){
           sceltaSeme = (rand () % 4);
           switch (sceltaSeme) {
               case 0:
                   seme = 'C';
                   break;
               case 1:
                   seme = 'Q';
                   break;
               case 2:
                   seme = 'F';
                   break;
               case 3:
                   seme = 'P';
                   break;
           }
        }

        cout << seme << valore << colore << figura << endl;
        }
}
