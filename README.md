# Rodio programming language

Rodio es un lenguaje de programación compilado, estáticamente tipado, de propósito general. Su compilador está escrito en C++ e integra [LLVM](https://llvm.org/) como backend.

El objetivo es crear un lenguaje que ofrezca velocidad, control y, sobretodo, facilidad de aprendizaje e implementación.

## Sintaxis
La sintaxis debe ser amigable con nuevos programadores y sumamente familiar para los ya establecidos.

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
my_first_rod_variable: string = "Hello, world!"
```
