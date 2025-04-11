//
// Created by QD on 11.04.2025.
//

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <cmath>
#include <cstdlib>


#ifndef PLAYER_H
#define PLAYER_H



class Player {
public:
  Player(SDL_Window *window, SDL_Renderer *renderer) : window(window), renderer(renderer) {};
  ~Player();

  SDL_FRect plrSourceRectFinal, plrDestinationRectFinal;
  void getPlayerRectValues();
  void setPlayerRectValues();

private:
  SDL_Window *window;
  SDL_Renderer *renderer;
};



#endif
