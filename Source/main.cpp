#include <iostream>
#include <fstream>
#include <string>
#include <experimental/filesystem>

int main() {
    std::ifstream main_fds;
    main_fds.open("Source/main.fds");

    if (main_fds.is_open()) {
        std::string line;
        int cmd_num = 0;
        while (std::getline(main_fds,line)) {
            if (line == "newcmd") {
                std::filesystem::create_directories("Source/Output/"+std::to_string(++cmd_num)+"/1");
            }
            std::cout << line << std::endl;
        }
    }
    return 0;
}