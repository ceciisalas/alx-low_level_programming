General Objetive:
A pointer is a variable whose value is the address of another variable, direct address of the memory location. Like any variable of constant, you must declare a pointer before using it to story any variable address. The general form of a pointer variable declaration is: type *var-name;
 
*Arrays: a kind of data structure that can store a fixed-size sequential collection of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type, an specific element in an array is accesed by an index.

The difference between a pointer and an array is that a user creates a pointer for storing the address of any given array and a user creates an array of pointers that basically acts as an rray of multiple pointer variables.

String manipulation. A string is a piece of text or a collection of characters, a string can be stored in a variable, can be typed in by the end-user (input) or can be displayed on the screen (output)

What we use to create string in C is a one-dimensional array of characters (char). In this case, ending the word of phrase in a NUL value (\0). With arrays, we are telling a computer that there are multiple values associated by data type in different locations in the computer memory, for strings, we need the NUL value at the end so we can indicate the computer where the word or phrase ends. 

In order to work with strings, we will require the aid of a library that will provide us with certain methods to compare, manipulate, or gather information about strings. In C programming language, this can be done including string.h into our code. This gives us access to six methods.

Scope of variable is its lifetime in the program, this means that the scope of a variable is the blockof code in the entire program where the variable is declared, used, and can be modified. 
