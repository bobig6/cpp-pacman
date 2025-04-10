#include "Map.h"
#include "Pacman.h"
#include "Pellets.h"
#include "Energizer.h"
#include "Score.h"

#include <SFML/Graphics.hpp>


int main()
{
    ////creating a window
    sf::RenderWindow window(sf::VideoMode({ 672,672 }), "Pacman");

    sf::Clock clock;

    //speed of pacman
    window.setFramerateLimit(200);

    //making the objects
    Map map;
    Score score;
    Pacman pacman;
    Pellets pellet;
    Energizer energizer;
    
    //keeping the window on
    // The main game logic loop. Repeats every frame.
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        sf::Time elapsedTime = clock.restart(); // Returns the elapsed time from the last clock restart (last iteration of the while loop)
        // elapsed time is the time between the frames
        

        //implementing functions
        pacman.Move(elapsedTime.asSeconds());
        window.clear();
        map.DrawMap(0, 0, window);
        pellet.DrawPellets(window);
        energizer.DrawEnergizer(window);
        pacman.DrawPacman(window);

        score.UpdateScore(window);


        window.display();
    }
}
