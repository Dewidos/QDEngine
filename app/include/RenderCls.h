//
// Created by QD on 11.04.2025.
//

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <cmath>
#include <cstdlib>


#ifndef RENDERCLS_H
#define RENDERCLS_H



class RenderCls {
public:
  RenderCls(SDL_Window *window, SDL_Renderer *renderer) : window(window), renderer(renderer) {};
  ~RenderCls();


  void renderPlayerSprite(int size, int animationSpeed);
  void initializeTextures(bool effectsIs);
  void renderEnviroment();
  void renderall();

private:
  SDL_Window *window;
  SDL_Renderer *renderer;
};



#endif //RENDERCLS_H
