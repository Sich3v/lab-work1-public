#include "Pokemon.hpp"
#include <iostream>

Pokemon::Pokemon() {};
Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD) {
    clear_poke_name = l_pokemonName;
    clear_poke_dmg = l_pokemonATK;
    clear_poke_hp = l_pokemonHP;
    clear_poke_defen = l_pokemonDEF;
    clear_poke_speed = l_pokemonSPD;
}

Pokemon::~Pokemon() {}

void Pokemon::setPokemonName(std::string l_pokemonName) {
    clear_poke_name = l_pokemonName;
}

void Pokemon::setPokemonHP(int l_pokemonHP) {
    clear_poke_hp = l_pokemonHP;
}

void Pokemon::setPokemonATK(int l_pokemonATK) {
    clear_poke_dmg = l_pokemonATK;
}

void Pokemon::setPokemonDEF(int l_pokemonDEF) {
    clear_poke_defen = l_pokemonDEF;
}

void Pokemon::setPokemonSPD(int l_pokemonSPD) {
    clear_poke_speed = l_pokemonSPD;
}
