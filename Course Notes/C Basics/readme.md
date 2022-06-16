# C Language Basics

## Hello World

Every C file has a main function which is considered the entry point to a program

A typical C program looks like:

```c
#include <stdio.h>
int main() {
    printf("Hello World");
    return 0;
}
```

Let's break down the code above to undestand each part:

`#include <stdio.h>`

This one imports/includes the header file stdio.h which contains some of the most used function in c programming, like the **printf()** which prints a value to the console.

`int main(){}`

The **int** keyword defines the data type that will be returned from the **main** function, the curly brackets **{}** are used to contain the code that will be written inside the main function.

`printf("Hello World");`

This line of code is basicaly printing **Hello World** to the console using the **printf()** function.
Note that at the end of the line we've put a semicolon **;** to indicate the end of the line.

`return 0;`

The use of this line is indicating the end of a c program by returning 0 from the main function.

## Data Types and Variables

C is not a dynamic programming Language, which means we have to define the variable type before declaring it.

### Data Types

- short : integer (2 bytes) stores a number between -23.768 and +23.768
- unsigned short : integer (2 bytes) stores a number between 0 and +65.535
- int : integer (4 bytes) stores a number between -2.147.483.648 and +2.147.483.648
- unsigned int : integer (4 bytes) stores a number between 0 and +4.294.967.295
- long long int : integer (8 bytes) stores a number between -9 quintillion and +9 quintillion
- unsigned long long int : integer (8 bytes) stores a number between 0 and +18 quintillion
  ! _It's recommended to add a 'U' letter after the value to avoid warnings_
- float : floating point number (4 bytes) stores up to 7 digits float number
- double : floating point number (8 bytes) stores up to 16 digits float number **More precise than float**
- char : single character.
- char : integer (using an integer between -128 and +127 in a char variable will point to it's resprective character in the **ASCII Table**)
- unsigned char: integer between 0 and +225
- char [] : string (array of characters)
- bool : boolean (integer 0 or 1) true = 1, false = 0
  ! **To use boolean you should include the "stdbool.h" header**

### Variables

To declare a variable we need to define it's type and then add an identifier(name) and an assignment operator ad then the value. And ofc the semicolon at the end!

Let's take defining an integer for example :

`int my_number = 42;`

"int" is the variable type, "my_number" is the identifier, "=" is the assignment operator, and "42" is the value.

To print a variable to the console we need to add it's type format to specify it's type.

Let take "my_number" for example, it's an integer that we wa want to print to the console.

```c
    #include <stdio.h>
    int main(){
        int my_number = 42;
        printf("My number is: %d", my_number);
        return 0;
    }
```

In the code above we've used the **printf()** function to print a string to the console.

`printf("My number is: %d", my_number);`

The "%" character is used to specify the type format which in ths case is **d** (decimal).
The **%d** will be replaced by the variable we add after the string which is "my_number" in this case.

### Type Formats

- %d : int, short, unsigned short, char(ASCII), unsigned char(ASCII)
- %u : unsigned int
- %lld : long long int
- %llu: unsigned long long int
- %f : float
- %lf : double
- %c : char
- %s : string(char [])
- %x : hex

- %.1 : decimal precision (How much numbers to display after the comma in float or double)
- %1 : the minimum field width (It's right aligned by default)
- %- : align to the left

Example

```c
    double num = 42.1337;
    printf("%.2lf", num); //Prints: 42.13
```

## Arithmetic Operators

- "+" : Addition
- "-" : Substaction
- "\*" : Multiplication
- "/" : Division
- "%" : Modulus
- "++" : Increment
- "--" : Decrement

**! in Division operations we need to convert the Divisor into a float!**
Example :

`float result = a/(float)b;`

## Augmented Arithmetic Operators

It's used to write less code and avoid repition (respecting the DRY **Don't Repeat Yourself** Principle)

Example :

`a = a + b ;`

Can be :

`a += b;`

It's valid for all the arithmetic operators
