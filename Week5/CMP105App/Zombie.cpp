#include "Zombie.h"

Zombie::Zombie()
{
	// Setup walk animation.
	walk.addFrame(sf::IntRect(0, 0, 55, 108));
	walk.addFrame(sf::IntRect(55, 0, 55, 108));
	walk.addFrame(sf::IntRect(110, 0, 55, 108));
	walk.addFrame(sf::IntRect(165, 0, 55, 108));
	walk.addFrame(sf::IntRect(220, 0, 55, 108));
	walk.addFrame(sf::IntRect(275, 0, 55, 108));
	walk.addFrame(sf::IntRect(330, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.setFrameSpeed(1.f / 10.f);
}
void Zombie::update(float dt)
{
	walk.animate(dt);
	setTextureRect(walk.getCurrentFrame());
}

void Zombie::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(sf::Vector2f(velocity.x, 0) * dt);
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(sf::Vector2f(-velocity.x, 0) * dt);
	}
	if (input->isKeyDown(sf::Keyboard::W))
	{
		move(sf::Vector2f(0, -velocity.y) * dt);
	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		move(sf::Vector2f(0, velocity.y) * dt);
	}
}