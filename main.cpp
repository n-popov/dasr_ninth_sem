#include <iostream>
#include <fstream>

int main() {
    std::ofstream fout("../output.txt");
    fout << "Hello, World!" << std::endl;
    std::ifstream fin("../output.txt");
    std::string read;
    std::getline(fin, read);
    std::cout << read << std::endl;

    std::cout << "Now we are reading whole file:" << std::endl;

    std::fstream whole_in("../main.cpp", std::ios::in);
    for(std::string line; std::getline(whole_in, line);) {
        std::cout << line << std::endl;
    }

    return 0;
}
