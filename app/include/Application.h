//
// Created by dawid on 11.04.2025.
//

#include <SDL3/SDL.h>

#ifndef APPLICATION_H
#define APPLICATION_H



class Application {
public:
  Application(SDL_Window *window, SDL_Renderer *renderer) : window(window), renderer(renderer) {};
  ~Application();

  SDL_AppResult loop(void *appstate);
  SDL_AppResult event(void *appstate, SDL_Event *event);

private:
  SDL_Window *window;
  SDL_Renderer *renderer;
};



#endif //APPLICATION_H
