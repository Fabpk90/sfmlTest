#include <SFML/Graphics.hpp>
#include "GameScene.h"
#include "Player.h"
#include <Box2D.h>
#include <iostream>

int main()
{
	GameScene scene(1280, 720);
	sf::RenderWindow& window = scene.getWindow();
	Player player("Res/sprite.jpg")

	scene.addActor(&player);


	//TODO: add player to scene, update it, draw

	sf::Clock clock;

	while (window.isOpen())
	{
		
		sf::Event event;
		sf::Vector2f moveVector;
		while (window.pollEvent(event))
		{
			moveVector.x = moveVector.y = 0;

			if (event.type == sf::Event::Closed)
				window.close();


			if (sf::Keyboard::isKeyPressed( sf::Keyboard::Escape))
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				moveVector.x = -10;
			else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				moveVector.x = 10;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				moveVector.y = -10;
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				moveVector.y = 10;
		}

		moveVector *= clock.restart().asSeconds();

		player.getSprite().move(moveVector);

		scene.update();
		
	}

	return 0;
}
