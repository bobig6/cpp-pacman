#pragma once
#include <SFML/Graphics.hpp>

extern int currentScore;

class Score
{
public:
	sf::Font font;
	sf::Text text;

	Score();

	void UpdateScore(sf::RenderWindow& window);
private:

};

