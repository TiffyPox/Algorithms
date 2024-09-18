#include <iostream>
#include <map>
#include <string>
#include <queue>

void printQueue(std::queue<std::map<std::string, std::string>> q) 
{
    while (!q.empty()) 
    {
        const auto& map = q.front();
        for (const auto& pair : map) 
        {
            std::cout << pair.first << ": " << pair.second << ", ";
        }

        std::cout << std::endl;

        q.pop();
    }
}


int main() 
{
    std::map<std::string, std::string> graph;
    
    graph["You"] = "Kirk";
    graph["Kirk"] = "Scott";
    graph["Spock"] = "Sulu";
    graph["McCoy"] = "Chekov";

    std::queue<std::map<std::string, std::string>> searchQueue;

    searchQueue.push(graph);

    printQueue(searchQueue);

    // To Do: Change the order that elements are printed. 

    return 0;
}