//
// Created by ariana on 24/05/19.
//

#ifndef IMPLEMENTACION_UNION_FIND_H
#define IMPLEMENTACION_UNION_FIND_H

#include <vector>

struct node{
    int id;
    int rango;
    node* father= nullptr;
    node(int id,int rango):id(id),rango(rango){};
};

class UnionFind{
    std::vector<node> contenedor;
public:
    UnionFind(){};
    std::vector<node> getContenedor(){ return contenedor;};
    void makeSet(int n);
    int find(int id);
    int find_comprension(int id);
    void union_set(int x, int y);
    void union_range(int x, int y);
};

void operator<< (node &a, node &b);

#endif //IMPLEMENTACION_UNION_FIND_H
