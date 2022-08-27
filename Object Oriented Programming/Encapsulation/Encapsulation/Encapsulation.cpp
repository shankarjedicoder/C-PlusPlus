#include <iostream>
using namespace std;

class ScoreCard
{
private:
    string name;
    int goals;
    int assists;
    string team;

public:
    void Display()
    {
        system("cls");
        cout << "Player Name :: " << name<<endl;
        cout << "Team :: " << team << endl;
        cout << "Goals Scored :: " << goals << endl;
        cout << "Goal Assists :: " << assists << endl;
    }
    void AddName(string player) { name = player; }
    void AddTeam(string playerTeam) { team = playerTeam; }
    void AddGoals(int goalScored) { goals = goalScored; }
    void AddAssists(int assistsMade) { assists = assistsMade; }
};

int main()
{
    string name, team;
    int goal, assist;
    std::cout << "Score Card using Encapsulation\n---------------------------------"<<endl;
    cout << "Enter player name :: ";
    cin >> name;
    cout << "Enter team name :: ";
    cin >> team;
    cout << "Enter Goals Scored :: ";
    cin >> goal;
    cout << "Enter goal assists :: ";
    cin >> assist;
    ScoreCard sc;
    sc.AddName(name);
    sc.AddTeam(team);
    sc.AddGoals(goal);
    sc.AddAssists(assist);
    sc.Display();
    system("pause>0");
}