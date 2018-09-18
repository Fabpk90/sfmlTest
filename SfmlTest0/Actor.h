#pragma once
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>

class Actor : public sf::Drawable, public sf::Transformable
{
public:
	Actor();

	~Actor();

	void update();

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

