#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Connect4
{

public:
    Connect4();
    void initializeName();
    void initializeBoard();
    char piece(int i, int j);
    void display();
    int dropPiece(int j, int b);
    bool boardIsFull();
    bool vertical(int i,int j);
    bool horizontal(int i,int j);
    bool diagonal1(int i,int j);
    bool diagonal2(int i,int j);
    void play();
private:
    int height;
    int width;
    vector<vector<int>> Board;

    string name1,name2;
    char p1,p2;

};
