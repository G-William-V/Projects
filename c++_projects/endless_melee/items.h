//TODO: remove the devItem after inventory management is implemented with real items

#include <string>

#ifndef ITEMS_H
#define ITEMS_H

class item {
private:
	std::string itemName;
	int itemHealth;
	int itemAttack;
public:
	std::string getItemName();
	int getItemHealth();
	int getItemAttack();
	item(std::string itemName, int itemHealth, int itemAttack);
	item itemDrop();
};

#endif