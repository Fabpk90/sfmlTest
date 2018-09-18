#include <SFML/Graphics.hpp>
#include "GameScene.h"

int main()
{
	GameScene scene(1280, 720);
	sf::RenderWindow& window = scene.get_window();
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
