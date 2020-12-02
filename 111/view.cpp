#include "view.hpp"
#include <iostream>
#include <fstream>

void first::print(std::string pok_name) {
    std::ofstream myfile;
    myfile.open("comp.txt", std::ios::app);
    myfile << "Имя: " << clear_poke_name << std::endl; 
    myfile << "ХП: " << clear_poke_hp << std::endl;
    myfile << "Урон: " << clear_poke_dmg << std::endl;
    myfile << "Защита: " << clear_poke_defen << std::endl;
    myfile << "Скорость: " << clear_poke_speed << std::endl;
    myfile << "Спец. атака: " << m_pokemonSpecATK << std::endl;
    myfile << "Спец. защита: " << m_pokemonSpecDEF << std::endl;
    myfile << "=====================================" << std::endl;
    myfile.close();
}

void second::print(std::string pok_name) {
    std::ofstream myfile;
    myfile.open("comp.txt", std::ios::app);
    myfile << "Имя: " << clear_poke_name << std::endl; 
    myfile << "ХП: " << clear_poke_hp << std::endl;
    myfile << "Урон: " << clear_poke_dmg << std::endl;
    myfile << "Защита: " << clear_poke_defen << std::endl;
    myfile << "Скорость: " << clear_poke_speed << std::endl;
    myfile << "Спец. атака: " << m_pokemonSpecATK << std::endl;
    myfile << "Спец. защита: " << m_pokemonSpecDEF << std::endl;
    myfile << "=====================================" << std::endl;
    myfile.close();
}

void third::print(std::string pok_name) {
    std::ofstream myfile;
    myfile.open("comp.txt", std::ios::app);
    myfile << "Имя: " << clear_poke_name << std::endl; 
    myfile << "ХП: " << clear_poke_hp << std::endl;
    myfile << "Урон: " << clear_poke_dmg << std::endl;
    myfile << "Защита: " << clear_poke_defen << std::endl;
    myfile << "Скорость: " << clear_poke_speed << std::endl;
    myfile << "Спец. атака: " << m_pokemonSpecATK << std::endl;
    myfile << "Спец. защита: " << m_pokemonSpecDEF << std::endl;
    myfile << "=====================================" << std::endl;
    myfile.close();
}