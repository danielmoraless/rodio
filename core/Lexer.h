// Copyright (c) 2025 Daniel H. Morales J.

#ifndef RODIO_CORE_LEXER_H
#define RODIO_CORE_LEXER_H

namespace RodioCore {
    enum TokenType {
        IDENTIFIER,
        DATA_TYPE,
        // Operators
        MATH_OP,
        ASSIGNMENT_OP,
        COMPARISON_OP,
        LOGIC_OP,
        // Values (data)
        BYTE,
        NUMBER,
        STRING,
        BOOLEAN
    };
}

#endif // RODIO_CORE_LEXER_H
