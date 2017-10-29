#include "Labirinto.h"
#include "ArTur.h"
#include "Robby.h"
#include "GL.h"
#include "MainGL.h"
#include <iostream>

void MainGL::runGL(string arquivo)
{
    GL::init();
    Maze* lab = new Labirinto();
    lab->loadMaze(arquivo);

    Point posIni = lab->getIniPos();
    cout << "Starting pos: " << posIni.getX() << " , " << posIni.getY() << endl;
    int maxSteps = 1000;
    Robot* robo;

    switch(lab->getRobot())
    {
    case 1:
        robo = new Robby(posIni, lab, maxSteps);
        break;
    case 2:
        robo = new ArTur(posIni, lab, maxSteps);
        break;
    case 3:
        cout << "Robo 3" << endl;
        //robo = new T8000();
        break;
    }

    GL::setMazeRobot(lab, robo);

    GL::loop();
}

