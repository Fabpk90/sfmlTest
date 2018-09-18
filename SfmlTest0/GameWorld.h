#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include "Actor.h"

class GameWorld
{
private:
	std::vector<Actor> actors;


public:
	GameWorld();
	~GameWorld();

	void update(sf::RenderWindow& window);
};

