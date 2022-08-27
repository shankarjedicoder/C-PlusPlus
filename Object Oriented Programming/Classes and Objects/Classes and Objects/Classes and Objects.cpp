#include <iostream>
#include<list>
using namespace std;

class CarRace {
public:
    string team;
    string player;
    int position;
    int points;
    list<string> wonCircuits;
};

int main()
{
    std::cout << "Class and Object\n";
    CarRace f1;
    f1.team = "Red Bull";
    f1.player = "Verstappen";
    f1.position = 1;
    f1.points = 235;
    f1.wonCircuits = { "Austria","Monacco","Silverstone" };
    cout << "Player Name :: " << f1.player << endl;
    cout << "Player Team :: " << f1.team << endl;
    cout << "Player Position :: " << f1.position << endl;
    cout << "Player Points :: " << f1.points << endl;
    cout << "Player won at :: " << f1.player << endl;
    for (string x : f1.wonCircuits)
    {
        cout << x<<endl;
    }
    system("pause>0");
}