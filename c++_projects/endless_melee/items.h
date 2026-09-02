//TODO: remove the devItem after inventory management is implemented with real items

#include <string>

#ifndef ITEMS_H
#define ITEMS_H

class devItem {
	int itemAttack;
	int itemHealth;
public:
	int getItemAttack();
	int getItemHealth();
	devItem(int itemHealth, int itemAttack);
};

#endif