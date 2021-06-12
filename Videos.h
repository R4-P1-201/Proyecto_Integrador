#ifndef VIDEOS_H
#define VIDEOS_H

#include <iostream>

using namespace std;

class Videos
{
  public:
    int id;
    string nombre;
    double duracion;
    string genero;

  public:
    void videos();
    void videos(int,string,double,string);
};

#endif