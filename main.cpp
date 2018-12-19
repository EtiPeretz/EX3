
#include "Command.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<string> commandsList;
    map<string, Command> commandsMap;
    //string file = "test.txt";
    Command* cm = new Command(commandsList, commandsMap);
    //MyFile.open(file, ofstream::app)
    string q = "openDataServer 5400 10   \n"
               "connect 127.0.0.1    5402\n"
               "var breaks    = bind \"/controls/flight/speedbrake\"";
    vector<string> cmp = cm->lexer(q);
    return 0;
}