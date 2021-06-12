#ifndef VIDEOTECA_H
#define VIDEOTECA_H

#include "Videos.h"

class Videoteca : Videos
{
  public:
    int cantidadVideos;
    Videos coleccion;
  
  public:
    void videoteca();
    void videoteca(int);
    void show();
    void set_video(int,Videos);
};

#endif