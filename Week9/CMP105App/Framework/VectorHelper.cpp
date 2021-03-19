#include "VectorHelper.h"

// Returns a normalised vector
sf::Vector2f VectorHelper::normalise(const sf::Vector2f &source)
{
	float length = (float)sqrt((double(source.x) * double(source.x)) + (double(source.y) * double(source.y)));
	if (length != 0)
		return sf::Vector2f(source.x / length, source.y / length);
	else
		return source;
}

// Returns the Vector magnitude
float VectorHelper::magnitude(sf::Vector2f vec)
{
	return (float)sqrt((double(vec.x) * double(vec.x)) + (double(vec.y) * double(vec.y)));
}

float VectorHelper::dot(const sf::Vector2f& s1, const sf::Vector2f& s2)
{
	return s1.x * s2.x + s1.y * s2.y;
}

float VectorHelper::determinte(const sf::Vector2f& s1, const sf::Vector2f& s2)
{
	return -s1.x * s2.y + s1.y * s2.x;
}


