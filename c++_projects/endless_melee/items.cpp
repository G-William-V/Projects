//TODO: remove the devItems after inventory management is implemented with real items

#include "items.h"

devItem::devItem(int _itemHealth, int _itemAttack) {
	itemHealth = _itemHealth;
	itemAttack = _itemAttack;
}

int devItem::getItemAttack() {
	return itemAttack;
}

int devItem::getItemHealth() {
	return itemHealth;
}

// TODO: add item drop system after defeating an enemy
/*int Player::itemDrop(int item) {
    int i;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    if (i <= 10) {
        item = item1;
    } else if (i > 10 && i <= 50) {
        item = item2;
    } else if (i > 50 && i <= 70) {
        item = item3;
    } else if (i > 70 && i <= 99) {
        item = item4;
    } else {
        item = item5;
    }
    return item;

}*/