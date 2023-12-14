cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_elif_derin_karaman)

set(CMAKE_CXX_STANDARD 14)

include_directories(List)
include_directories(List/Graph)

add_executable(graph_puzzle_game_elif_derin_karaman
        List/Graph/Edge.cpp
        List/Graph/Edge.h
        List/Graph/EdgeList.cpp
        List/Graph/EdgeList.h
        List/Graph/Graph.cpp
        List/Graph/Graph.h
        List/Puzzle.cpp
        List/Puzzle.h General/AbstractGraph.cpp List/Queue.cpp List/Node.cpp General/Path.cpp)
