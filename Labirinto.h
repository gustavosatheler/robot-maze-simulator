#ifndef LABIRINTO_H
#define LABIRINTO_H

#include <fstream>
#include "Maze.h"

using namespace std;

class Labirinto : public Maze
{
public:
    Labirinto();
    bool isEmpty(const Point& ponto) const;
    int  getWidth();
    int  getHeight();
    void loadMaze(string arquivo);
    int  getRobot();
    Point getIniPos();
private:
    int dimx, dimy;
    char lab[100][100];
    int robot;
    Point posIni;
};

#endif
