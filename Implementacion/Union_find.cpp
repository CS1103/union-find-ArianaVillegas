//
// Created by ariana on 24/05/19.
//

#include <iostream>
#include "Union_find.h"

void UnionFind::makeSet(int n) {
    for (int i=0;i<n;i++) {
        node Nodo(i,0);
        contenedor.push_back(Nodo);
    }
}

int UnionFind::find(int id) {
    node* temp=&contenedor[id];
    while(temp->father!= nullptr){
        temp=temp->father;
    }
    return temp->id;
}

int UnionFind::find_comprension(int id) {
    node* raiz=&contenedor[find(id)];
    node* temp=&contenedor[id];
    while(temp->father!= nullptr){
        temp=temp->father;
        contenedor[id].father=raiz;
        id++;
    }
    return temp->id;
}

void UnionFind::union_set(int x, int y) {
    int Raizx=find(x);
    int Raizy=find(y);
    contenedor[Raizx].father=&contenedor[Raizy];
}

void UnionFind::union_range(int x, int y) {
    int Raizx=find(x);
    int Raizy=find(y);
    int r=(Raizx>Raizy)?Raizx:Raizy;
    int s=(Raizx<Raizy)?Raizx:Raizy;
    if(contenedor[Raizx].rango!=contenedor[Raizy].rango){
        contenedor[s].father=&contenedor[r];
    }else{
        contenedor[Raizx].father=&contenedor[Raizy];
        contenedor[Raizy].rango+=1;
    }
}

void find(node &a) {
    while(a.father!= nullptr){
        a=*a.father;
    }
}

void operator<<(node &a, node &b) {
    find(a);
    find(b);
    a.father=&b;
    std::cout<<a.father->id<<'\n';
}