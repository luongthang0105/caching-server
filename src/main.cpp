#include <iostream>
#include <httplib.h>

#define MAX_LINE_LENGTH 100

std::vector<std::string> get_tokens(char *command) {
    std::stringstream ss(command);

    std::vector<std::string> tokens;
    while (!ss.eof()) {
        std::string word;
        ss >> word;
        tokens.push_back(word);
    }
    return tokens;
}
int main(int, char**){
    std::cout << "Hello, welcome to my caching server!\n";
    
    // event loop
    while (true) {
        std::cout << "> ";
        
        char *command = new char[MAX_LINE_LENGTH];
        std::cin.getline(command, MAX_LINE_LENGTH);

        std::vector<std::string> tokens = get_tokens(command);
        
        if (tokens[0] == "caching-proxy") {
            int port = std::stoi(tokens[2]);
            std::string url = tokens[4];
            std::cout << "given port & url: " << port << " " << url << std::endl;
        } else {
            break;
        }
        std::cout << std::endl;
    }

    std::cout << "Server is down!" << std::endl;
}
