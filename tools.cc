#include <iostream>
using namespace std;

struct Point
{
  double x;
  double y;
};

struct Vecteur
{
  double x;
  double y;
};

struct Segment
{
  Point P;
  Vecteur V;
};

struct Cercle
{
  Point centre;
  double rayon;
};

int main ()
{
  Point A1;
  Vecteur A2;
  Segment A;
  A1.x=5;
  A1.y=6;
  A2.x=4.5;
  A2.y=3.5;
  A.P=A1;
  A.V=A2;
}

// test intersection 2 cercles : distance centre a centre < somme des rayons + dist_min
// test intersection cercle/segment : projeté hortogonal centre sur segment puis vérification distance
