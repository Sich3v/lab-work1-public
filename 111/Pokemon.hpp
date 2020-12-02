#pragma once
#include <string>

class Pokemon {


protected:
    std::string clear_poke_name;
    int clear_poke_hp, clear_poke_dmg, clear_poke_defen, clear_poke_speed;

public:
    Pokemon();
    Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD);
    ~Pokemon();

    void setPokemonName(std::string l_pokemonName);
    std::string getPokemonName() { return clear_poke_name; };

    void setPokemonHP(int l_pokemonHP);
    int getPokemonHP() { return clear_poke_hp; };

    void setPokemonATK(int l_pokemonATK);
    int getPokemonATK() { return clear_poke_dmg; };

    void setPokemonDEF(int l_pokemonDEF);
    int getPokemonDEF() { return clear_poke_defen; };

    void setPokemonSPD(int l_pokemonSPD);
    int getPokemonSPD() { return clear_poke_speed; };
};