#include "RenderCls.h"
#include "Player.h"

//Player texture rendering settings
SDL_Texture *playerTex;
SDL_Surface *temporarySurface = NULL;
SDL_FRect plrSourceRect, plrDestinationRect;
//available other textures textures

RenderCls::~RenderCls() {}


void Player::getPlayerRectValues(){
    plrSourceRect=plrSourceRectFinal;
    plrDestinationRect=plrDestinationRectFinal;
}

void RenderCls::renderPlayerSprite(int size, int animationSpeed){
    SDL_RenderTexture(renderer,playerTex,&plrSourceRect,&plrDestinationRect);

}
void RenderCls::initializeTextures(bool effectsIs){
    temporarySurface = IMG_Load("assets/playerAssets/playerTest.png");
    playerTex = SDL_CreateTextureFromSurface(renderer, temporarySurface);

}
void RenderCls::renderEnviroment(){

}

void RenderCls::renderall(){
    SDL_RenderClear(renderer);
    renderPlayerSprite(1,1);
    renderEnviroment();

    SDL_RenderPresent(renderer);
}