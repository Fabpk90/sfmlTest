#include "GameScene.h"



GameScene::GameScene()
{
	window_ = new sf::RenderWindow();
	world_ = new GameWorld();
}

GameScene::GameScene(int width, int height)
{
	window_ = new sf::RenderWindow(sf::VideoMode(width, height), "The unknown thing");
	world_ = new GameWorld();
}


GameScene::~GameScene()
{
	delete window_;
	delete world_;
}

void GameScene::update()
{
	
}

sf::RenderWindow& GameScene::get_window()
{
	return (*window_);
}
