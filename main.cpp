#include <iostream>
#include "list.h"

using namespace std;

int main() {
    list listNIM;
    infotype inputDigit;
    address pNIM;
    int pilihMenu;

    cout << "Pilih menu: "<< endl;
    cout << "1. TP" << endl;
    cout << "2. SESI HAVE FUN" << endl;
    cin >> pilihMenu;

    if (pilihMenu == 1){
        // 1
        createList(listNIM);

        // 2
        cout << "Berapa digit ke-tiga akhir dari NIM anda?" << endl;
        cin >> inputDigit;

        // 3
        pNIM = allocate(inputDigit);

        // 4
        insertFirst(listNIM, pNIM);

        // 5
        printInfo(listNIM);

        // 6
        cout << "Berapa digit ke-dua akhir dari NIM anda?" << endl;
        cin >> inputDigit;
        pNIM = allocate(inputDigit);
        insertFirst(listNIM, pNIM);
        printInfo(listNIM);

        // 7
        cout << "Berapa digit terakhir dari NIM anda?" << endl;
        cin >> inputDigit;
        pNIM = allocate(inputDigit);
        insertFirst(listNIM, pNIM);
        printInfo(listNIM);

    }else if (pilihMenu == 2){
        createList(listNIM);
        for (int i = 1; i <= 10; i++){
            cout << "Digit " << i << ": ";
            cin >> inputDigit;
            pNIM = allocate(inputDigit);
            insertLast(listNIM, pNIM);
        }
        printInfoWithOutComma(listNIM);
    }


    return 0;
}
