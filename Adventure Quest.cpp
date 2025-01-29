#include <iostream>
#include <string>
using namespace std;


string inventory1 = "";
string inventory2 = "";
string inventory3 = "";


int health = 100;
int treasure = 0;


void desert(string &place);
void castle(string &place);
void jungle(string &place);
void showInventory();
void addItem(string item);
void removeItem(string item);
void enemy();


int main() {
    while (true) {
        string input, place;
        cout << "Where do you want to go?" << endl;
        cout << "desert, castle, jungle" << endl;
        cin >> input;
        if (input == "desert") {
            desert(place);
        } else if (input == "castle") {
            castle(place);
        } else if (input == "jungle") {
            jungle(place);
        } else if (input == "showinventory") {
            showInventory();
        } else if (input == "quit") {
            cout << "EXIT" << endl;
            break;
        } else {
            cout << "Invalid command. Try again." << endl;
        }
    }
    return 0;
}


void desert(string &place) {
    cout << "You are in the desert\n";
    string pl;
    cout << "\nsouth-treasure\nwest-food\n";
    cout << "Enter go-back for going back" << endl;
    cout << "Enter go-south for south" << endl;
    cout << "Enter go-west for west" << endl;
    cout << "Enter showinventory to view inventory" << endl;


    cout << "Enter the place in desert: ";
    cin >> pl;
    if (pl == "showinventory") {
        showInventory();
        return;
    }
    if (pl == "remove-item") {
        string item;
        cout << "Enter the item to remove: ";
        cin >> item;
        removeItem(item);
        return;
    }


    if (pl == "go-back") {
        cout << "You head back to the starting point." << endl;
    } else if (pl == "go-south") {
        cout << "Congratulations! You found the treasure map: " << endl;
        addItem("treasure map");
    } else if (pl == "go-west") {
        health += 10;
        cout << "Your health is: " << health << endl;
    } else {
        cout << "Invalid choice. Please try again." << endl;
    }
}


void castle(string &place) {
    cout << "You are in the castle\n";
    cout << "Enter \"ENTER\" to enter into the castle " << endl;
    cout << "Enter go-south for south" << endl;
    cout << "Enter go-back for going back: ";
    cout << "Enter showinventory to view inventory" << endl;
    cin >> place;


    if (place == "remove-item") {
        string item;
        cout << "Enter the item to remove: ";
        cin >> item;
        removeItem(item);
        return;
    }
    if (place == "showinventory") {
        showInventory();
        return;
    }


    if (place == "ENTER") {
        health -= 10;
        enemy();
        cout << "\nYou are entering the castle.\nYou fought with the soldiers, so your health is reduced.\nYour new health is " << health << endl;
    } else if (place == "go-back") {
        cout << "You head back to the starting point." << endl;
    } else if (place == "go-south") {
        cout << "Congratulations! You found the jewels: " << endl;
        addItem("archaic jewels");
    } else {
        cout << "Invalid input." << endl;
    }
}


void jungle(string &place) {
    cout << "You are in the jungle\n";
    cout << "\nnorth-cave\nsouth-treasure\n";
    cout << "Enter go-south for south" << endl;
    cout << "Enter go-north for north" << endl;
    cout << "Enter showinventory to view inventory" << endl;
    cout << "Enter go-back for going back: ";
    cin >> place;


    if (place == "showinventory") {
        showInventory();
        return;
    }
    if (place == "remove-item") {
        string item;
        cout << "Enter the item to remove: ";
        cin >> item;
        removeItem(item);
        return;
    }


    if (place == "go-back") {
        cout << "\nYou head back to the starting point." << endl;
    } else if (place == "go-south") {
        cout << "\nCongratulations! You found the sword: " << endl;
        addItem("sword");
    } else if (place == "go-north") {
        cout << "The cave is empty, but you find some food. Your health is restored!" << endl;
        health = 100;
    } else {
        cout << "\nInvalid input." << endl;
    }
}


void addItem(string item) {
    if (inventory1 == "") {
        inventory1 = item;
        cout << item << " has been added to your inventory." << endl;
    } else if (inventory2 == "") {
        inventory2 = item;
        cout << item << " has been added to your inventory." << endl;
    } else if (inventory3 == "") {
        inventory3 = item;
        cout << item << " has been added to your inventory." << endl;
    } else {
        cout << "Your inventory is full! You cannot carry more items." << endl;
    }
}


void showInventory() {
    cout << "Your inventory contains:" << endl;
    if (inventory1 != "") cout << "- " << inventory1 << endl;
    if (inventory2 != "") cout << "- " << inventory2 << endl;
    if (inventory3 != "") cout << "- " << inventory3 << endl;
    if (inventory1 == "" && inventory2 == "" && inventory3 == "") {
        cout << "Your inventory is empty." << endl;
    }
}


void removeItem(string item) {
    if (inventory1 == item) {
        inventory1 = "";
        cout << item << " has been removed from your inventory." << endl;
    } else if (inventory2 == item) {
        inventory2 = "";
        cout << item << " has been removed from your inventory." << endl;
    } else if (inventory3 == item) {
        inventory3 = "";
        cout << item << " has been removed from your inventory." << endl;
    } else {
        cout << "Item not found in your inventory." << endl;
    }
}


void enemy() {
    string choice;
    cout << "Do you want to fight or flee? ";
    cin >> choice;


    if (choice == "showinventory") {
        showInventory();
        return;
    }


    while (true) {
        if (choice == "fight") {
            health -= 30;
            cout << "Current health: " << health << endl;


            if (health <= 0) {
                cout << "Game Over!" << endl;
                exit(0);
            }


            cout << "You decide to stop fighting and retreat!" << endl;
            break;
        } else if (choice == "flee") {
            cout << "You chose to flee. Returning to safety!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please enter fight or flee: ";
            cin >> choice;
        }
    }
}


