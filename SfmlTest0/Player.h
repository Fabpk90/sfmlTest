#pragma once
#include "Actor.h"
#include <SFML/Graphics/Sprite.hpp>

class Player : public Actor
{
private:
	sf::Sprite* sprite_;


public:
	Player(const char* pathImage);
	~Player();
	void update() override;
protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

