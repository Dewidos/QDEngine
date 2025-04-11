//
// Created by dawid on 11.04.2025.
//

#include "Application.h"

Application::~Application() {
    SDL_Log("Goodbye!");
}

SDL_AppResult Application::loop(void *appstate)
{
    

    return SDL_APP_CONTINUE;
}

SDL_AppResult Application::event(void *appstate, SDL_Event *event)
{
    if (event->type == SDL_EVENT_KEY_DOWN ||
        event->type == SDL_EVENT_QUIT) {
        return SDL_APP_CONTINUE;  /* end the program, reporting success to the OS. */
    }
    return SDL_APP_CONTINUE;
}
