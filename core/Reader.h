// Copyright (c) 2025 Daniel H. Morales J.

#ifndef RODIO_CORE_READER_H
#define RODIO_CORE_READER_H

#include <array>
#include <fstream>
#include <memory>
#include <string>

namespace RodioCore {

    class Reader {
    public:
        virtual ~Reader() = default;
        virtual char getchar() const = 0; // Review the current char
        virtual std::array<unsigned long, 2> getpos() const = 0; // Return an array like [line_number, char_number]
        // Walk to the next characater. Update info about the position of the reader.
        // If we are in the final of the line, we jump to the next line and eat the first character.
        virtual char next() = 0;
    protected:
        // Information about the actual position of the reader.
        unsigned long line_number, char_number;
        char last_char;
    };


    class FileReader : public Reader  {
    public:
        FileReader(const std::string& _filename, std::unique_ptr<std::ifstream> _srcfile);
        char getchar() const override;
        std::array<unsigned long, 2> getpos() const override;
        char next() override;
    private:
        // Save the filename for future implementation of syntax error or somethings like that
        std::string src_filename;
        std::unique_ptr<std::ifstream> srcfile;
    };

};

#endif // RODIO_CORE_READER_H
