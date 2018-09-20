#pragma once
#include "Actor.h"
#include <SFML/Graphics/Sprite.hpp>

class Player : public Actor
{
private:
	sf::Sprite* sprite_;

	float x, y;


public:
	Player(const char* pathImage);
	~Player();
	void update() override;
	sf::Sprite& getSprite() const;

	void addPosition(float x, float y);

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

