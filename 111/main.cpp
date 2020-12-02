#include <iostream>
#include <fstream>
#include "Pokemon.hpp"
#include "view.hpp"


int main() {

	std::ofstream myfile;
	myfile.open("comp.txt");
	first pokemonOne("Игглибаф", 170, 20, 10, 200, "Милый Чарм", "Соперничество");
    second pokemonTwo("Пичу", 200, 30, 40, 150, "Статичность", "Громоотвод");
    third pokemonThree("Клефейри", 200, 40, 60, 100, "Милый Чарм", "Волшебная Стража");
			pokemonOne.print("1");
			pokemonTwo.print("2");
			pokemonThree.print("3");
				myfile.close();
}
