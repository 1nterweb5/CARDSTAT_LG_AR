#include <iostream>

using namespace std;



int main()
{
    int tipoMazzo, numSorteggi;

    do {
        cout << "Inserire il tipo di mazzo (40 o 52)" << endl;
        cin >> tipoMazzo;
        if (tipoMazzo != 40 || tipoMazzo != 52) {
            cout << "Non e' stato inserito un valore corretto" << endl;
        }
    } while (tipoMazzo != 40 || tipoMazzo != 52);

    do {
        cout << "inserire il numero di sorteggi da eseguire" << endl;
        cin >> numSorteggi;
        if (numSorteggi < 2) {
            cout << "Non e' stato inserito un valore corretto" << endl;
        }
    } while (numSorteggi < 2);


    cout << "arno" << endl;
    return 0;
}
