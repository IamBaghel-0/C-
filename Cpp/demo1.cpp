#include <iostream>
#include <string>

using namespace std;

class Room {
private:
    string description;
    string item;
    Room* exits[4];

public:
    Room(string description, string item) {
        this->description = description;
        this->item = item;
        for (int i = 0; i < 4; i++) {
            exits[i] = nullptr;
        }
    }

    string getDescription() {
        return description;
    }

    string getItem() {
        return item;
    }

    void setExit(Room* room, int direction) {
        exits[direction] = room;
    }

    Room* getExit(int direction) {
        return exits[direction];
    }

    void setItem(string item) {
        this->item = item;
    }
};

class HauntedHouseGame {
private:
    Room* currentRoom;
    bool gameOver;

public:
    HauntedHouseGame() {
        // Create rooms
        Room* entrance = new Room("You are standing at the entrance of a haunted house.", "");
        Room* livingRoom = new Room("You are in a spooky living room.", "key");
        Room* kitchen = new Room("You are in a creepy kitchen.", "knife");
        Room* bedroom = new Room("You are in a haunted bedroom.", "lantern");
        Room* backyard = new Room("You are in a dark backyard.", "");

        // Set room exits
        entrance->setExit(livingRoom, 0); // North
        livingRoom->setExit(entrance, 1); // South
        livingRoom->setExit(kitchen, 2); // East
        kitchen->setExit(livingRoom, 3); // West
        livingRoom->setExit(bedroom, 0); // North
        bedroom->setExit(livingRoom, 1); // South
        bedroom->setExit(backyard, 2); // East
        backyard->setExit(bedroom, 3); // West

        currentRoom = entrance;
        gameOver = false;
    }

    void playGame() {
        cout << "Welcome to the Haunted House Game!" << endl;
        cout << "Enter 'q' to quit the game." << endl;

        while (!gameOver) {
            cout << endl;
            cout << currentRoom->getDescription() << endl;
            cout << "What would you like to do? ";
            string action;
            cin >> action;

            if (action == "q") {
                gameOver = true;
            } else if (action == "look") {
                cout << "You see a " << currentRoom->getItem() << " in the room." << endl;
            } else if (action == "take") {
                string item = currentRoom->getItem();
                if (item.empty()) {
                    cout << "There is nothing to take in this room." << endl;
                } else {
                    cout << "You have taken the " << item << "." << endl;
                    currentRoom->setItem("");
                }
            } else if (action == "go") {
                string direction;
                cin >> direction;
                if (direction == "north") {
                    Room* nextRoom = currentRoom->getExit(0);
                    if (nextRoom == nullptr) {
                        cout << "You cannot go that way." << endl;
                    } else {
                        currentRoom = nextRoom;
                    }
                } else if (direction == "south") {
                    Room* nextRoom = currentRoom->getExit(1);
                    if (nextRoom == nullptr) {
                        cout << "You cannot go that way." << endl;
                    } else {
                        currentRoom = nextRoom;
                    }
                } else if (direction == "east") {
                    Room* nextRoom = currentRoom->getExit(2);
                    if (nextRoom == nullptr) {
                        cout << "You cannot go that way." << endl;
                    } else {
                        currentRoom = nextRoom;
                    }
                } else if (direction == "west") {
                    Room* nextRoom = currentRoom->getExit(3);
                    if (nextRoom == nullptr) {
                        cout << "You cannot go that way." << endl;
                    } else {
                        currentRoom = nextRoom;
                    }
                } else {
                    cout << "Invalid direction." << endl;
                }
            } else {
                cout << "Invalid action." << endl;
            }
        }

        cout << "Thank you for playing the Haunted House Game!" << endl;
    }
};

int main() {
    HauntedHouseGame game;
    game.playGame();

    return 0;
}
