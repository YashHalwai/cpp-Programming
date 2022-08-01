/*

n most implementations that you are likely to encounter, negative signed integers are stored in what is called two's complement. The other major way of storing negative signed numbers is called one's complement.

The two's complement of an N-bit number x is defined as 2^N - x. For example, the two's complement of 8-bit 1 is 2^8 - 1, or 1111 1111. The two's complement of 8-bit 8 is 2^8 - 8, which in binary is 1111 1000. This can also be calculated by flipping the bits of x and adding one. For example:

 1      = 0000 0001
~1      = 1111 1110 (1's complement)
~1 + 1  = 1111 1111 (2's complement)
-1      = 1111 1111

 21     = 0001 0101
~21     = 1110 1010
~21 + 1 = 1110 1011
-21     = 1110 1011

The one's complement of an N-bit number x is defined as x with all its bits flipped, basically.

 1      = 0000 0001
-1      = 1111 1110

 21     = 0001 0101
-21     = 1110 1010

Two's complement has several advantages over one's complement. For example, it doesn't have the concept of 'negative zero', which for good reason is confusing to many people. Addition, multiplication and subtraction work the same with signed integers implemented with two's complemented as they do with unsigned integers as well.

*/
