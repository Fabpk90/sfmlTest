#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include "Actor.h"

//this class will primarily update the game world and handle the window/ui

class GameScene
{
private:
	sf::RenderWindow* window_;

private:
	std::vector<Actor*> actors_;


public:
	GameScene();
	GameScene(int width, int height);

	~GameScene();

	void update();

	sf::RenderWindow& getWindow() const;
	void addActor(Actor*const actor);
};

