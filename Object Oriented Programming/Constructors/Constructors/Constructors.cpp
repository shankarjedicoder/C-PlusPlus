#include <iostream>
#include <list>
using namespace std;

/// <summary>
/// Class to hold the records
/// </summary>
class CarRace {
public:
    std::string name;
    std::string team;
    int position;
    int score;
    list<std::string> circuits;


    /// <summary>
    /// Constructor:
    /// The constructor name should be the same as that of the class name
    /// </summary>
    /// <param name="name"></param>
    /// <param name="team"></param>
    /// <param name="position"></param>
    /// <param name="score"></param>
    CarRace(std::string name,std::string team,int position,int score)
    {
        this->name = name;
        this->team = team;
        this->position = position;
        this->score = score;
    }

    /// <summary>
    /// Constructor method to display the contents
    /// </summary>
    /// <param name="n"></param>
    /// <param name="t"></param>
    /// <param name="p"></param>
    /// <param name="s"></param>
    void Display()
    {
        cout << "Racer Name :: " << name << endl;
        cout << "Racer Team :: " << team << endl;
        cout << "Racer Position :: " << position << endl;
        cout << " Racer Score :: " << score << endl;
    }
};

int main()
{
    string n, t,inpC;
    int p, s,l;
    list<string> c;
    std::cout << "F1 Scorecard\n----------------------------------------"<<endl;
    cout << "Enter a name :: ";
    cin >> n;
    cout << "Enter a team :: ";
    cin >> t;
    cout << "Enter the position :: ";
    cin >> p;
    cout << "Enter the score :: ";
    cin >> s;
    cout << "Enter the total circuits";
    cin >> l;
    for (int i = 0; i <= l; i++)
    {
        cout << "Enter the circuit #" << i + 1 << " :: ";
        cin >> inpC;
        c.push_back(inpC);
    }
    CarRace f1(n, t, p, s);
    f1.Display();
    system("pause>0");
}