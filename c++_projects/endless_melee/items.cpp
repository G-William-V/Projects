#include "items.h"
#include <random>


item potion1 = item("lesser health potion", 25, 0);
item potion2 = item("health potion", 50, 0);
item potion3 = item("greater health potion", 75, 0);
item potion4 = item("lesser strength potion", 0, 5);
item potion5 = item("strength potion", 0, 10);
item potion6 = item("greather strength potion", 0, 20);
item potion7 = item("mystery potion", 100, 100);

item throwWeapon1 = item("throwing dagger", 0, 10);
item throwWeapon2 = item("throwing axe", 0, 25);
item throwWeapon3 = item("bomb", 0, 100);

item magical1 = item("staff of lesser power", 25, 25);
item magical2 = item("staff of bolt of lighting", 0, 50);
item magical3 = item("unkown staff", 0, 0);


item::item(std::string _itemName, int _itemHealth, int _itemAttack) {
    itemName = _itemName;
    itemHealth = _itemHealth;
    itemAttack = _itemAttack;
}

std::string item::getItemName() {
    return itemName;
}

int item::getItemAttack() {
	return itemAttack;
}

int item::getItemHealth() {
	return itemHealth;
}

item item::itemDrop() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    int i = dist(gen);
    item dropedItem = item("", 0, 0);
    if (i <= 40) {
        int x = dist(gen);
        if (x <= 50) {
            dropedItem = potion1;
        }
        else if (x >= 51 && x <= 75) {
            dropedItem = potion4;
        }
        else {
            dropedItem = throwWeapon1;
        }
    }
    else if (i >= 41 && i <= 60) {
        int x = dist(gen);
        if (x <= 50) {
            dropedItem = potion2;
        }
        else if (x >= 51 && x <= 75) {
            dropedItem = potion5;
        }
        else {
            dropedItem = throwWeapon2;
        }
    }
    else if (i >= 61 && i <= 70) {
        int x = dist(gen);
        if (x <= 50) {
            dropedItem = potion3;
        }
        else if ( x >=51 && x <= 75)
        {
            dropedItem = potion6;
        }
        else {
            dropedItem = throwWeapon3;
        }
    }
    else if (i >= 71 && i <= 85) {
        dropedItem = magical1;
    }
    else if (i >= 86 && i <= 95) {
        dropedItem = magical2;
    }
    else {
        dropedItem = magical3;
    }
    
    return dropedItem;

}