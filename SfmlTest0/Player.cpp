#include "Player.h"
#include <SFML/Graphics/Texture.hpp>
#include <iostream>
#include <SFML/Graphics/RenderTarget.hpp>


Player::Player(const char* pathImage)
{
	sf::Texture* tex = new sf::Texture();
	if(tex->loadFromFile(pathImage))
	{
		sprite_ = new sf::Sprite();
		sprite_->setTexture(*tex);

		sprite_->setPosition(250.0f, 250.0f);
	}
	else
	{
		std::cout << "Error in loading image " << pathImage << std::endl;
	}

	x = 250.0f;
	y = 250.0f;
}

Player::~Player()
{
	delete sprite_;
}

void Player::update()
{
	
}

sf::Sprite& Player::getSprite() const
{
	return *sprite_;
}

void Player::addPosition(float x, float y)
{
	this->x += x;
	this->y += y;

	sprite_->setPosition(this->x, this->y);
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(*sprite_, states);
}
