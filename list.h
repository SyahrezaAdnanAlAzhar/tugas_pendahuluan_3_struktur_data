#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList(list &L);
address allocate(infotype x);
void insertFirst(list &L, address P);
void printInfo(list L);
void printInfoWithOutComma (list L);
void insertLast (list &L, address P);
void insertAfter (list &L, address P, address prec);
void deleteLast (list &L);
void deleteAfter (list &L, address prec);
address searchInfo (list &L, infotype target);
