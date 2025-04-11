//
// Created by QD on 11.04.2025.
//

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <cmath>
#include <cstdlib>


#ifndef RENDER_H
#define RENDER_H



class Render {
public:
  Render(SDL_Window *window, SDL_Renderer *renderer) : window(window), renderer(renderer) {};
  ~Render();

  

private:
  
};



#endif
