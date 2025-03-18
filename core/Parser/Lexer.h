#ifndef RODIO_CORE_LEXER_H
#define RODIO_CORE_LEXER_H

namespace RodioCore {
    enum TokenType {
        EXPR_ID,            // Keywords like const, function, for, if, ...
        GENERAL_ID,         // Name of constants, variables, functions, etc
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
