#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void sorteggio (int sorteggi, int valMax);

void calcoloProbabilita (double numCoppie, int numSorteggi);

int main() {
    int tipoMazzo, numSorteggi, valoreMassimo;

    cout << "--------------------ALGORITMO CALCOLO DELLA PROBABILITA'--------------------" << endl << endl << endl
         << "Questo e' un algoritmo che, una volta specificato il tipo di mazzo e il numero di estrazioni, "
         << "peschera' casualmente delle carte che presenteranno ognuna 4 attributi: " << endl << endl
         << "-Un valore numerico" << endl
         << "-Una figura (nel caso il valore numerico corrisponda al valore di una figura)" << endl
         << "-Un seme" << endl
         << "-Un colore (in base al seme)" << endl << endl
         << "Una volta mostrate tutte le estrazioni, il programma mostrera' il numero di coppie per ogni attributo, "
         << "e la probabilita' di aver pescato quelle carte." << endl << endl;

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
        cout << "inserire il numero di sorteggi da eseguire (almeno 2)" << endl;
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
    int valore1, valore2, sceltaSeme, coppieVal = 0, coppieSeme = 0, coppieFigura= 0, coppieColore= 0;

    srand(time(NULL));

    for (int contatoreSort = sorteggi; contatoreSort>0; contatoreSort--) {

        if (contatoreSort <= sorteggi - 1) {
            valore2 = valore1;
            figura2 = figura1;
        }

        for (int contatore = sorteggi; contatore>0; contatore--) {
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
                figura1 = 0;
            }
        }
        if (contatoreSort <= sorteggi - 1) {
            if (valore1 == valore2) {
                coppieVal++;
            }
            if (figura1 == figura2 && figura1 != 0) {
                coppieFigura++;
            }
        }

        if (contatoreSort <= sorteggi - 1) {
            colore2 = colore1;
            seme2 = seme1;
        }

        for (int contatore = sorteggi; contatore>0; contatore--) {
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

        if (contatoreSort <= sorteggi - 1) {
            if (seme1 == seme2) {
                coppieSeme++;
            }
            if (colore1 == colore2) {
                coppieColore++;
            }
        }

        cout << seme1 << valore1 << figura1 << endl;
    }
    cout << "Le coppie sulla base del valore numerico sono ";
    calcoloProbabilita(coppieVal, sorteggi);
    cout << "Le coppie sulla base delle figure sono ";
    calcoloProbabilita(coppieFigura, sorteggi);
    cout << "Le coppie sulla base del seme sono ";
    calcoloProbabilita(coppieSeme, sorteggi);
    cout << "Le coppie sulla base del colore sono ";
    calcoloProbabilita(coppieColore, sorteggi);
}

void calcoloProbabilita (double numCoppie, int numSorteggi) {
    double probabilita;

    probabilita = (numCoppie / numSorteggi) * 100;
    cout << numCoppie << " e la probabilita' di aver pescato queste coppie e' di " << probabilita << "%" << endl;
}
