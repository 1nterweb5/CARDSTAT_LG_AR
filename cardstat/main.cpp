#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void sorteggio (int a);
int main()
{
    int tipoMazzo, numSorteggi;

    do {
        cout << "Inserire il tipo di mazzo (40 o 52)" << endl;
        cin >> tipoMazzo;
        if (tipoMazzo != 40 && tipoMazzo != 52) {
            cout << "Non e' stato inserito un valore corretto" << endl;
        }
    } while (tipoMazzo != 40 && tipoMazzo != 52);

    do {
        cout << "inserire il numero di sorteggi da eseguire" << endl;
        cin >> numSorteggi;
        if (numSorteggi < 2) {
            cout << "Non e' stato inserito un valore corretto" << endl;
        }
    } while (numSorteggi < 2);
    cout << endl;
    sorteggio(numSorteggi);

    return 0;
}
void sorteggio (int a) {
    char seme, figura, colore;
    int valore;
    srand(time(NULL));

    for (int contatore=a; contatore>0; contatore--){
    for (int contatore=a; contatore>0; contatore--){
       valore = (rand () % 13);

    }

     for (int contatore=a; contatore>0; contatore--){//da otimizzare: trovare un modo per far si che l'azione rand sceglie automaticamente tra R (rosso) o N (nero) e togliere l'assegnazione con l'if
       colore = (rand () % "N", "R");
     }

     cout << valore << colore << endl;

     }













}
