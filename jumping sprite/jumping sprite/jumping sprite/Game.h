/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void move(); // move it left and right with arrow keys
	
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::RectangleShape m_box; //the rectangle
	sf::Vector2f position = { 400.0f, 500.0f };
	sf::Vector2f velocity = { 0.0f, 0.0f };

	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

