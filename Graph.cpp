/*
Auteurs : Charles Maussion et Louis Rémus.
PI INF 442 : Shortest Paths.
*/
#ifndef GRAPH
#define GRAPH
//MODIFICATION

// STL includes
#include <iostream>
#include <vector>
#include <list>
#include <graph.hpp>

using namespace std;

template <typename TypeVertice, typename TypeArc>
class Graph {
  public :
 
    
  Graph::Graph(int n, int m, int r){
    this->n=n;
    this->m=m;
    this->r=r;
    this->graph=new list<TypeVertice*>;
           };
    Graph::~Graph();
    
    

    // Retourne le nombre de Vertices du graphe.
    int Graph::size();


    // Ajout d'un Arc.
    TypeArc* ajouterArc(TypeArc* arc){
   for (std::list<TypeVertice*>::iterator it = graph.begin(); it != graph.end(); it++){
          if (*it->){
             }
       
      
      }
       };
       
    TypeArc* ajouterArc(TypeVertice* V1, TypeVertice* V2);

    // Ajout d'un Vertice.
    TypeVertice* ajouterVertice(TypeVertice* vertice);

    // Récupérer les Arcs du graphe, ou les Arcs d'un Vertice.

    list<TypeArc*> recupererArcs();
    list<TypeArc*> recupererArcs(TypeVertice* vertice);


    // Récupérer les successeurs d'un Vertice.
    list<TypeVertice*> successeurs(TypeVertice* vertice);

    // Reliés?
    bool sontRelies(TypeVertice* V1, TypeVertice* V2);

    // Retrait d'un Arc.
    void retirerArc(TypeArc* arc);
    void retirerArc(TypeVertice* V1, TypeVertice* V2);

    // Retrait d'un Vertice (ce qui retire tous les Arcs qui y sont connectés)
    void retraitVertice(TypeVertice* vertice);

};

class TypeArc{
public:

TypeArc();
~TypeArc();



};

class TypeVertice{
public:

list<TypeArc*> successeurs;

TypeVertice();
~TypeVertice();

}

#endif
