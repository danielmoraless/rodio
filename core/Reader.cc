// Copyright (c) 2025 Daniel H. Morales J.

#include "Reader.h"
#include <string>
#include <utility>
#include <memory>
#include <fstream>

RodioCore::FileReader::FileReader(const std::string& _filename, std::unique_ptr<std::ifstream> _srcfile)
    : src_filename(_filename), srcfile(std::move(_srcfile)) {}

char RodioCore::FileReader::getchar() const {
    return this->last_char;
}

std::array<unsigned long, 2> RodioCore::FileReader::getpos() const {
    return std::array<unsigned long, 2> {
        this->line_number,
        this->char_number
    };
}

char RodioCore::FileReader::next() {
    if (this->srcfile->eof()) return '\x03';

    this->last_char = this->srcfile->get();

    if (this->last_char == '\n') this->line_number++;
    this->char_number++;

    return this->last_char;
}
