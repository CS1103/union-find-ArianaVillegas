#include <iostream>
#include <bits/stdc++.h>
#include "Union_find.h"

int main() {
    UnionFind uf;
    uf.makeSet(25);
    uf.getContenedor()[14]<<uf.getContenedor()[13];
    std::cout<<uf.getContenedor()[14].id<<'\n';
    //uf.getContenedor()[13]<<uf.getContenedor()[8];
    //uf.getContenedor()[8]<<uf.getContenedor()[3];
    /*uf.union_set(1,0);
    uf.union_set(14,13);
    uf.union_set(13,8);
    uf.union_set(8,3);*/
    std::cout<<uf.find(8);
    return 0;
}