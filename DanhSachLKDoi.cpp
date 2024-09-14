#include <iostream>
using namespace std;

struct Node {
    int Data;
    Node *Next, *PreV;
};

typedef Node* List;

void insertF(List &F, int x, List &L) {
    List p = new(Node);
    p->Next = p -> PreV = NULL;
    p -> Data = x;
    if(F = NULL){
    	F = L = p;
	}else{
		p -> Next = F;
		F -> Next = p;
		F = p;
	}
}

void insertL(List &F, int x, List &L) {
    List p = new(Node);
    p->Next = p -> PreV = NULL;
    p -> Data = x;
    if(F = NULL){
    	F = L = p;
	}else{
		L -> Next = p;
		p -> PreV = L;
		L = p;
	}
}

void delF(List &F, List &L, int x){
	List p = F;
	if(F == L){
		F = L = NULL;
	}else {
		F = F -> Next;
		F -> PreV = NULL;
	}
	delete(p);
}

void delL(List &F, List &L, int x){
	List p = F;
	if(F == L){
		F = L = NULL;
	}else {
		L = L -> PreV;
		L -> Next = NULL;
	}
	delete(p);
}

void printF(List F) {
    List p = F;
    while(p) {
        cout << p->Data << " ";
        p = p->Next;
    }
}

void printL(List L) {
    List p = L;
    while(p) {
        cout << p->Data << " ";
        p = p->PreV;
    }
}


