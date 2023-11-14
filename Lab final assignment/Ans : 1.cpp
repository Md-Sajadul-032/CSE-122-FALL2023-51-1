#include<iostream>
using namespace std;

class ManchesterUnited {
private:
    int coach;
    int player;

public:
    ManchesterUnited() : coach(0), player(0) {}

    ManchesterUnited operator++() {
        ++coach;
        ++player;
    }

    bool operator==(const ManchesterUnited& other){
        return (coach == other.coach) && (player == other.player);
    }

    void setData(int newCoach, int newPlayer){
        coach = newCoach;
        player = newPlayer;
    }

    void getData(){
        cout << "Coach: " << coach << ", Player: " << player << endl;
    }
};

int main() {
    ManchesterUnited ronaldo, fernandes;

    ronaldo.setData(4, 5);
    fernandes.setData(5, 6);

    cout << "Values before increment:" << endl;
    cout << "Ronaldo: ";
    ronaldo.getData();
    cout << "Fernandes: ";
    fernandes.getData();

    ++ronaldo;

    cout << "\nValues after increment:" << endl;
    cout << "Ronaldo: ";
    ronaldo.getData();
    cout << "Fernandes: ";
    fernandes.getData();

    if (ronaldo == fernandes)
        cout << "\nronaldo is equal to fernandes." << endl;
    else
        cout << "\nronaldo is not equal to fernandes." << endl;

    return 0;
}
