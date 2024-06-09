//  Aggregation: Demonstrate aggregation by creating a class Team that contains objects of
// class Player.
#include <iostream>
#include <string>
using namespace std;

class player;

class team {
    string name;
    player *player1;
    player *player2;
public:
    team(string n, player* p1, player* p2) : name(n), player1(p1), player2(p2) {}

    void display() {
        cout << "Name of the team: " << name << endl;
        cout << "Player 1: ";
        player1->display();
        cout << "Player 2: ";
        player2->display();
    }
};

class player {
    string playername;
public:
    player(string p) : playername(p) {}

    void display() {
        cout << "Name of the player: " << playername << endl;
    }
};

int main() {
    player p("Nish");
    player p1("Tasneem");
    team t("Cool Kids", &p, &p1);
    t.display();
    return 0;
}



