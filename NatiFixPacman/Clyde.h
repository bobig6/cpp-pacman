#pragma once
#include "Ghosts.h"
#include "Blinky.h"

class Clyde : public Ghosts
{
	sf::Vector2f blinkyPos;
public:
	void setBlinkyPos(sf::Vector2f newBlinkyPos);
	sf::Vector2f getTargetPosition(const sf::Vector2f& pacmanPos) override; //overriding
	Clyde();
};

