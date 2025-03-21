// Copyright (c) 2025 Daniel H. Morales J.

#include "../core/Reader.h"
#include <iostream>
#include <fstream>
#include <memory>
#include <utility>

int main(int argc, char* argv[]) {
    if (argc == 1) return 1;

    std::string fn = argv[1];

    std::unique_ptr<std::ifstream> my_file(new std::ifstream(fn));

    if (!my_file->is_open()) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1;
    };

    std::unique_ptr<RodioCore::FileReader> reader(new RodioCore::FileReader(fn, std::move(my_file)));

    char car = reader->next();

    while (car != '\x03') {
        car = reader->next();
        auto position = reader->getpos();
        std::cout << "Char: " << car << "\nLN: " << position[0] << "\nCN: " << position[1] << "\n\n";
    }

    return 0;
}
