/*
The term "unsigned" in computer programming indicates a variable that can hold only positive numbers. The term "signed" in computer code indicates that a variable can hold negative and positive values. The property can be applied to most of the numeric data types including int, char, short and long.


Unsigned Variable Type of Integer
An unsigned variable type of int can hold zero and positive numbers, and a signed int holds negative, zero and positive numbers.

In 32-bit integers, an unsigned integer has a range of 0 to 232-1 = 0 to 4,294,967,295 or about 4 billion. The signed version goes from -231-1 to 231, which is –2,147,483,648 to 2,147,483,647 or about -2 billion to +2 billion. The range is the same, but it is shifted on the number line. 

An int type in C, C++, and C# is signed by default. If negative numbers are involved, the int must be signed; an unsigned int cannot represent a negative number.

Unsigned Char 
In the case of chars, which are only 1 byte, the range of an unsigned char is 0 to 256, while the range of a signed char is -127 to 127.

Stand-Alone Type Specifiers and Other Usages
Unsigned (and signed) can also serve as standalone type specifiers, but when either is used alone, they default to int.

Objects of type long can be declared as signed long or unsigned long. Signed long is the same as long because signed is the default. The same applies to long and short.​
*/