# Rodio programming language
Rodio es un lenguaje de programación compilado, estáticamente tipado, de propósito general. Su compilador está escrito en C++ e integra [LLVM](https://llvm.org/) como backend.

El objetivo es crear un lenguaje que ofrezca velocidad, control y, sobretodo, facilidad de aprendizaje e implementación.

## Sintaxis
La sintaxis debe ser amigable con nuevos programadores y sumamente familiar para los ya establecidos.

### Tipos de datos
| Data type | Syntax | Description | Size (bits)
| :---: | :---: | :---: | :---: |
| byte | byte | 8-bits byte. | >= 8 |
| natural | nat | It covers the set of numbers equal to or greater than zero. | >= 32 |
| integer | int | The set of all integers. | >= 32 |
| float | float | Floating-point numbers. | >= 32 |
| string | string | Array of characters. | >= 8 |
| boolean | bool | Integer number that only takes values of 1 (`true`) or 0 (`false`). | 1 |

> [!IMPORTANT]
> En algunos casos no es especificado el valor máximo que pueda tomar un dato. Esto NO significa que dicho valor sea infinito, sino que está indefinido. En realidad, el límite estará establecido por el objetivo de compilación.

### Operadores
#### Operadores matemáticos
| Operation | Operand | Example |
| :-------: | :-----: | :-----: |
| Addition | `+` | `1 + 1` |
| Subtract | `-` | `3 - 2` |
| Multiplication | `*` | `10 * 10` |
| Division | `/` | `50 / 2` |

#### Operadores de comparación
| Operand | Logical equivalence | Example |
| :-----: | :-----------------: | :-----: |
| == | Equal to | `a == b` |
| != | Not equal to | `a != b` |
| < | Less than | `a < b` |
| > | Greater than | `a > b` |
| <= | Less than or equal to | `a <= b` |
| >= | Greater than or equal to | `a >= b` |

### Comentarios
Se utilizará doble slash (`//`) para comentarios de una sola línea y dos asteriscos entre dos slashes (`/* */`) para comentarios de varias líneas.

#### Ejemplos
```rodio
// This is a single line comment.
```
```rodio
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
```
```rodio

// --- Implicitly typed variable ---
another_number_variable = 2032       // Variable of type nat, inferred by compiler

another_text_variable = "Say hi! :D" // Variable of type string, inferred by compiler
```

### Constantes
```rodio
const <constant_name>: <type> = <constant_value>
```

#### Ejemplo
```rodio
const MIN_INT: int = 2147483646
```

### Funciones
```rodio
function <function_name>(<argument>: <argument_type>, ...) -> <return_type> {
  return <return_value>
}
```

#### Ejemplo
```rodio
function sum_of_two(a: int, b: int) -> int {
  return a + b
}
```
