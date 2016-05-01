/*
Auteurs : Charles Maussion et Louis Rémus.
PI INF 442 : Shortest Paths.
*/
#ifndef GRAPH
#define GRAPH

// STL includes
#include <iostream>
#include <vector>

template <typename TypeVertice, typename TypeArc>
class Graph {
  public :
    Graph();
    ~Graph();

    // Deux méthodes d'ajout d'un Arc.
    TypeArc * ajouterArc(TypeArc * arc);
    TypeArc * ajouterArc(TypeVertice * V1, TypeVertice * V2 );

    // Méthode d'ajout d'un Vertice.
    TypeVertice * ajouterVertice(TypeVertice * vertice);

};

#endif
