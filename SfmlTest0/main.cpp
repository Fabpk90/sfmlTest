#include <SFML/Graphics.hpp>
#include "GameScene.h"
#include "Player.h"

int main()
{
	GameScene scene(1280, 720);
	sf::RenderWindow& window = scene.getWindow();
	Player player("sprite.jpg");



	//scene.addActor(player);


	//TODO: add player to scene, update it, draw

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed 
				|| (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
				window.close();
		}

		scene.update();
	}

	return 0;
}
