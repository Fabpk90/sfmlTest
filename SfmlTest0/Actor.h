#pragma once
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>

class Actor : public sf::Drawable
{
public:
	virtual void update() = 0;
};

