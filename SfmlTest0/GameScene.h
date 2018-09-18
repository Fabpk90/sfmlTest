#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include "GameWorld.h"

//this class will primarily update the game world and handle the window/ui

class GameScene
{
private:
	sf::RenderWindow* window_;
	GameWorld* world_;


public:
	GameScene();
	GameScene(int width, int height);

	~GameScene();

	void update();

	sf::RenderWindow& get_window();
};

