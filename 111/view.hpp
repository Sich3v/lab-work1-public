#pragma once
#include "Pokemon.hpp"

class first : protected Pokemon {
public:
    first(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD, std::string l_pokemonSpecATK, std::string l_pokemonSpecDEF)
    {
        clear_poke_name = l_pokemonName;
        clear_poke_hp = l_pokemonHP;
        clear_poke_dmg = l_pokemonATK;
        clear_poke_defen = l_pokemonDEF;
        clear_poke_speed = l_pokemonSPD;
        m_pokemonSpecATK = l_pokemonSpecATK;
        m_pokemonSpecDEF = l_pokemonSpecDEF;
    }
    void print(std::string pok_name);

    void setPokemonSpecATK(std::string l_pokemonSpecATK);
    std::string getPokemonSpecATK() { return m_pokemonSpecATK; };

    void setPokemonSpecDEF(std::string l_pokemonSpecDEF);
    std::string getPokemonSpecDEF() { return m_pokemonSpecDEF; };


private:
    std::string m_pokemonSpecATK;
    std::string m_pokemonSpecDEF;

};

class second : protected Pokemon {
public:
    second(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD, std::string l_pokemonSpecATK, std::string l_pokemonSpecDEF)
    {
        clear_poke_name = l_pokemonName;
        clear_poke_hp = l_pokemonHP;
        clear_poke_dmg = l_pokemonATK;
        clear_poke_defen = l_pokemonDEF;
        clear_poke_speed = l_pokemonSPD;
        m_pokemonSpecATK = l_pokemonSpecATK;
        m_pokemonSpecDEF = l_pokemonSpecDEF;
    }
    void print(std::string pok_name);

    void setPokemonSpecATK(std::string l_pokemonSpecATK);
    std::string getPokemonSpecATK() { return m_pokemonSpecATK; };

    void setPokemonSpecDEF(std::string l_pokemonSpecDEF);
    std::string getPokemonSpecDEF() { return m_pokemonSpecDEF; };


private:
    std::string m_pokemonSpecATK;
    std::string m_pokemonSpecDEF;

};

class third : protected Pokemon {
public:
    third(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD, std::string l_pokemonSpecATK, std::string l_pokemonSpecDEF)
    {
        clear_poke_name = l_pokemonName;
        clear_poke_hp = l_pokemonHP;
        clear_poke_dmg = l_pokemonATK;
        clear_poke_defen = l_pokemonDEF;
        clear_poke_speed = l_pokemonSPD;
        m_pokemonSpecATK = l_pokemonSpecATK;
        m_pokemonSpecDEF = l_pokemonSpecDEF;
    }
    void print(std::string pok_name);

    void setPokemonSpecATK(std::string l_pokemonSpecATK);
    std::string getPokemonSpecATK() { return m_pokemonSpecATK; };

    void setPokemonSpecDEF(std::string l_pokemonSpecDEF);
    std::string getPokemonSpecDEF() { return m_pokemonSpecDEF; };


private:
    std::string m_pokemonSpecATK;
    std::string m_pokemonSpecDEF;

};