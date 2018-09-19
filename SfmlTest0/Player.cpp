#include "Player.h"
#include <SFML/Graphics/Texture.hpp>
#include <iostream>


Player::Player(const char* pathImage)
{
	sf::Texture tex;
	if(!tex.loadFromFile(pathImage))
	{
		sprite_ = new sf::Sprite(tex);
	}
	else
	{
		std::cout << "Error in loading image " << pathImage;
	}

	//sprite_ =
}

Player::~Player()
{
	delete sprite_->getTexture();
	delete sprite_;
}

void Player::update()
{
	
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	
}
