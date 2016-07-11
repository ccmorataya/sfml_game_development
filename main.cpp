#include <SFML/Window.hpp>

int main()
{
	sf::Window window (sf::VideoMode(300,200), "title");

	while (window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			switch (event.type) {
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::KeyPressed:
					if (event.key.code == sf::Keyboard::Space)
					{
						window.setTitle("Space");
					}
					break;
				case sf::Event::KeyReleased:
					if (event.key.code == sf::Keyboard::Space)
					{
						window.setTitle("Releases");
					}
					else if (event.key.code == sf::Keyboard::Escape)
					{
						window.close();
					}
					break;
				default:
					break;
			}
		}

		//update frame
		
		//render frame
	}

	return 0;
}
