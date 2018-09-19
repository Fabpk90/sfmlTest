#include "GameScene.h"



GameScene::GameScene()
{
	window_ = new sf::RenderWindow();
	
}

GameScene::GameScene(int width, int height)
{
	window_ = new sf::RenderWindow(sf::VideoMode(width, height), "The unknown thing");
}


GameScene::~GameScene()
{
	delete window_;
}

void GameScene::update()
{
	window_->clear();

	for (Actor* actor : actors_)
	{
		actor->update();
	}

	for (Actor* actor : actors_)
	{
		window_->draw(*actor);
	}
}

sf::RenderWindow& GameScene::getWindow() const
{
	return (*window_);
}

void GameScene::addActor(Actor* const actor)
{
	actors_.push_back(actor);
}
