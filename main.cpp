#include <iostream>
#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#define VERSION "0.0"
#define NAZWA "JEBAWKA-GAME"

int main(int arg, char* argc[])
{
  string nazwa = str( format("%1% %2%") % NAZWA % VERSION );
  sf::RenderWindow Okno( sf::VideoMode( 800, 600, 32 ), nazwa );
  //std::cout<<"Szczesc Boze"<<std::endl;
  return 0;
}

//NIE WIEM CZO JA TU ZROBIŁEM XDD SPRAWDZE ZARA WIĘC SIE NIE PLUĆ HAKJERY.
