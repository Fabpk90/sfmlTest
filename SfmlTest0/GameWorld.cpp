#include "GameWorld.h"



GameWorld::GameWorld()
{
}


GameWorld::~GameWorld()
{
}

void GameWorld::update(sf::RenderWindow  &window)
{
	window.clear();

	for (auto actor : actors)
	{
		actor.update();
	}

	for (Actor& const actor : actors)
	{
		window.draw(actor);
	}

	window.display();
}
