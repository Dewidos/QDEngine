//
// Created by QD on 11.04.2025.
//



#include "Player.h"
#include "Application.h"



SDL_Texture player0texture;

Player::~Player() {}

void Player::setPlayerRectValues(){
    plrSourceRectFinal.h=100;
    plrSourceRectFinal.w=100;
    plrDestinationRectFinal.h=300;
    plrDestinationRectFinal.w=300;
}
