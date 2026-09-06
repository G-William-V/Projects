#include "game.h"

Game::Game(NPC * _npc, Player * _player){
    npc = _npc;
    player = _player;

    gameIsOver = false;
}

void Game::combat() {
    int input;
    while (npc -> isAlive()) { 
        std::cout << "You are met by " << npc ->getName() << " prepare yourself for a fight!!!\n";
        std::cout << "YOUR HEALTH IS " << player->getHealth() << " YOUR ATTACK IS " << player->getAttack() << "\n";
        std::cout << "Pick your action\n" << "1. Attack\n" << "2. Block\n" << "3. Use Item\n";
        std::cin >> input;
        switch (input) {
            case 1: 
                std::cout << "You attack!\n";
                npc ->takeDamage(player ->getAttack());
                std::cout << "You hit the " << npc ->getName() << " they have taken " << player ->getAttack() <<"\n";
                    if(!npc ->isAlive()) {
                        std::cout << "The " << npc ->getName() << " has been killed!" << npc ->getName() << " has drop a Item.\n";
                        return;
                    }
                player ->takeDamage(npc ->getAttack());
                std::cout << "The " << npc ->getName() << " has attack you dealing " << npc ->getAttack() << "\n";
                    if(!player ->isAlive()) {
                        gameIsOver = true;
                        std::cout << "You have fallen in combat your name will soon be forgotten!";
                        return;
                    }
                break;
			case 2:
                std::cout << "you block the incoming attack!\n";
                player ->takeDamage(player ->blockDamage(npc ->getAttack()));
                std::cout << "You have block " << npc-> getName() << " they dealt you this much damage " << npc->getAttack() << "\n";
                std::cout << "You have recover by " << player ->getHealing() << " health";
                break;
			case 3:
                std::cout << "you look at your items!\n";
				std::cout << "You have 1: health potion and 2: dagger 3:exit item selection\n"; //TODO: replace with inventory list
				std::cin >> input;
				switch (input) {
				case 1:
					std::cout << 
					break;
				case 2:
					std::cout <<
					break;
				default:
					std::cout << "You desided not to use any items.";
					break;
				}
                break;
            default:
                std::cout << "Pick a Number between 1 and 3 to do an action!";
                break;
        }
    }
}
// TODO: add why for player to access inventory and pick item to use in combat 
// TODO: remove dev item objects after inventory management is implemented
void Game::inventory(){

}
//TODO: is this needed?
void Game::getItem() {

}

//TODO: add way for items to drop from fights
void Game::itemDrop() {

}