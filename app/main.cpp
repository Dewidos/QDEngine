

#define SDL_MAIN_USE_CALLBACKS 1  /* use the callbacks instead of main() */
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "Application.h"
#include "RenderCls.h"
#include "Player.h"

static Application *app = NULL;
static RenderCls *renderationTool = NULL;
struct {
    const char *title0 = "QDEngine Template";
    int width0 = 800;
    int height0 = 600;
    int flags = 0;
    bool isFullscreen = false;
} gameWindowParameters;


/* This function runs once at startup. */
SDL_AppResult SDL_AppInit(void **appstate, int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    //initialize window and renderers
    if(gameWindowParameters.isFullscreen){
        gameWindowParameters.flags = SDL_WINDOW_FULLSCREEN;
    }else{
        gameWindowParameters.flags = 0;
    }
    if(!SDL_CreateWindowAndRenderer(gameWindowParameters.title0, gameWindowParameters.width0, gameWindowParameters.height0, gameWindowParameters.flags, &window, &renderer)){
        SDL_Log("Failed to create window and rendered");
        return SDL_APP_FAILURE;
    }else{
        if(renderer){
            SDL_SetRenderDrawColor(renderer,200,200,200,255);
        }
    }
    //initialize class instances
    app = new Application(window, renderer);
    renderationTool = new RenderCls(window,renderer);

    renderationTool->initializeTextures(true);
    

    return SDL_APP_CONTINUE;
}

/* This function runs when a new event (mouse input, keypresses, etc) occurs. */
SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event)
{
    
    return app->event(appstate, event);
}

/* This function runs once per frame, and is the heart of the program. */
SDL_AppResult SDL_AppIterate(void *appstate)
{

    //render all of the graphical objects
    renderationTool->renderall();


    return app->loop(appstate);
}

/* This function runs once at shutdown. */
void SDL_AppQuit(void *appstate, SDL_AppResult result)
{
    delete renderationTool;
    delete app;
}
