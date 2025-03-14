# Rodio programming language
Rodio es un lenguaje de programación compilado, estáticamente tipado, de propósito general. Su compilador está escrito en C++ e integra [LLVM](https://llvm.org/) como backend.

El objetivo es crear un lenguaje que ofrezca velocidad, control y, sobretodo, facilidad de aprendizaje e implementación.

## Sintaxis
La sintaxis debe ser amigable con nuevos programadores y sumamente familiar para los ya establecidos.

### Tipos de datos
| Data type | Syntax | Description
| :---: | :---: | :---: |
| natural | nat | Equivalent to `unsigned int` in C |
| integer | int | Equivalent to `int` in C |
| string | string | Array of characters |

### Comentarios
Se utilizará doble slash (`//`) para comentarios de una sola línea y dos asteriscos entre dos slashes (`/* */`) para comentarios de varias líneas.

#### Ejemplos
```rodio
// This is a single line comment.

/*
This is another type of comment.
You can write multiple lines.

Be happy coding well documented powerful software! :)
*/
```

### Variables
Las variables son implícita o explícitamente tipadas.

**Explícitamente:**
```rodio
<variable_name>: <type> = <variable_value>
```

**Implícitamente:**
```rodio
<variable_name> = <variable_value>
```

La diferencia es que en una el tipo ha sido inferido por el compilador (implícito) y en la otra el programador deberá especificarlo (explícito).

Una vez definido el tipo de la variable, de cualquier manera, no se podrá asignar un valor que no sea correspondiente.

#### Ejemplos
```rodio
// --- Explicitly typed variables ---
number_variable: int = 2025             // Variable of type int (integer)

text_variable: string = "Hello, world!" // Variable of type string


// --- Implicitly typed variable ---
another_number_variable = 2032       // Variable of type number, inferred by compiler

another_text_variable = "Say hi! :D" // Variable of type string, inferred by compiler
```
