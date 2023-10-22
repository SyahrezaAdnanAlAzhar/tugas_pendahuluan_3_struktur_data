#include <iostream>
#include "list.h"

using namespace std;

void createList (list &L) {
    first(L) = NULL;
}

address allocate (infotype x){
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertFirst (list &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void printInfo (list L){
    address P = first(L);
    while (P != NULL){
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}

void printInfoWithOutComma (list L){
    address P = first(L);
    cout << "Isi list: ";
    while (P != NULL){
        cout << info(P);
        P = next(P);
    }
    cout << endl;
}

void insertLast (list &L, address P) {
    if (first(L) == NULL){
        insertFirst(L, P);
    }else{
        address temp = first(L);
        while (next(temp) != NULL){
            temp = next(temp);
        }
        next(temp) = P;
    }
}

void insertAfter (list &L, address P, address prec){
    next(P) = next(prec);
    next(prec) = P;
}

void deleteLast (list &L){
    address P, Q;
    P = first(L);
    Q = next(P);

    if (Q == NULL){
        P = NULL;
    }else{
        while (next(P) != NULL){
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
    }
}

void deleteAfter (list &L, address prec) {
    if (next(first(L)) == NULL){
        first(L) = NULL;
    }else{
        address P = next(prec);
        next(prec) = next(P);
        next(P) = NULL;
    }
}

address searchInfo (list &L, infotype target) {
    address P = first(L);
    while (info(P) != target){
        P = next(P);
    }
    return P;
}
