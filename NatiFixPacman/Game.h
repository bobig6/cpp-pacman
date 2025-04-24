#pragma once
#include "Map.h"
#include "Pacman.h"
#include "Pellets.h"
#include "Energizer.h"
#include "Score.h"
#include "Blinky.h"
#include "Pinky.h"
#include "Inky.h"
#include "Clyde.h"
#include "Ghosts.h"

class Game
{
    //making the objects
    Map map;
    Score score;
    Pacman pacman;
    Pellets pellet;
    Energizer energizer;
    Blinky blinky;
    Pinky pinky;
    Inky inky;
    Clyde clyde;


public:
    Game();
    void Update(sf::RenderWindow& window, sf::Time& elapsedTime);
    void Reset();
};

