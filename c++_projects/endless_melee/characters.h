#include <string>

#ifndef CHARACTER_H
#define CHARACTER_H

class NPC {
    private:
        std::string name;
    protected:
        int maxHealth;
        int currentHealth;
        int attack;
    public:
        NPC(std::string, int, int);
        std::string getName();
        int getHealth();
        int getAttack();
        int isAlive();
        void takeDamage(int);
        NPC enemyPicker();
};

class Player: public NPC {
    public:
        Player(std::string, int, int);
        void heal(int);
        int getHealing();
        int blockDamage(int);
        int getItem(int);
};

#endif