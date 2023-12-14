
#include <fstream>
#include "Puzzle.h"
int main(){

    Puzzle puzzle;

    std::vector<std::string> words = puzzle.readDataFromFile();

    list::Graph graph3 = puzzle.createGraphAccordingly(words, 3);
    list::Graph graph4 = puzzle.createGraphAccordingly(words, 4);
    list::Graph graph5 = puzzle.createGraphAccordingly(words, 5);


    return 0;
}

std::vector<std::string> Puzzle::readDataFromFile() {

    std::vector<std::string> words;
    std::ifstream file("C:\\Users\\TEMP\\Desktop\\dictionary.txt");
    std::string word;

    if(file.is_open()){
        for( std::string word: words){
            words.push_back(word);
        }
    }
    else{
        std::cerr << "Not found";
    }
    return words;
}

bool Puzzle::isConnected(std::string &word1, std::string &word2) {

    int count = 0;

    for(int i = 0; i < word1.length(); i++){
        if(word1[i] == word2[i]){
            count ++;
        }
        if(count > 1){
            return false;
        }
    }
    return count == 1;
}

list::Graph Puzzle::createGraphAccordingly(const std::vector<std::string> words, int length) {

    std::vector<std::string> filteredWords;

    for(const std::string word : words){
        if(word.length() == length){
            filteredWords.push_back(word);
        }
    }

    list::Graph graph(filteredWords.size());

    for(int i = 0; i < filteredWords.size(); ++i){
        for(int j = i + 1; j < filteredWords.size(); ++j){
            if(isConnected(filteredWords[i], filteredWords[j])){
                graph.addEdge(i,j);
            }
        }
    }
    return graph;

}





