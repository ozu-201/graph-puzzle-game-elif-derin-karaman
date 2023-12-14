//
// Created by dk033447 on 12/14/2023.
//


#include <vector>
#include <string>
#include <iostream>
#include "Graph.h"

#ifndef GRAPH_PUZZLE_GAME_ELIF_DERIN_KARAMAN_PUZZLE_H
#define GRAPH_PUZZLE_GAME_ELIF_DERIN_KARAMAN_PUZZLE_H

class Puzzle{

public:

    std::vector<std::string> readDataFromFile();
    bool isConnected(std::string &word1, std::string &word2);
    list::Graph createGraphAccordingly(std::vector<std::string> words, int length);
};






#endif //GRAPH_PUZZLE_GAME_ELIF_DERIN_KARAMAN_PUZZLE_H
