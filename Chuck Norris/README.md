# Chuck Norris
## The Goal
Binary with 0 and 1 is good, but binary with only 0, or almost, is even better! Originally, this is a concept designed by Chuck Norris to send so called *unary* messages.

Write a program that takes an incoming message as input and displays as output the message encoded using Chuck Norris’ method.

## Rules
Here is the encoding principle:

The input message consists of ASCII characters (7-bit)
The encoded output message consists of blocks of **0**
A block is separated from another block by a space
Two consecutive blocks are used to produce a series of same value bits (only **1** or **0** values):
- First block: it is always **0** or **00**. If it is **0**, then the series contains **1**, if not, it contains **0**
- Second block: the number of **0** in this block is the number of bits in the series
 
## Example
Let’s take a simple example with a message which consists of only one character: Capital C. C in binary is represented as 1000011, so with Chuck Norris’ technique this gives:

**0 0** (the first series consists of only a single **1**)
**00 0000** (the second series consists of four **0**)
**0 00** (the third consists of two **1**)

So C is coded as:**0 0 00 0000 0 00**

 
Second example, we want to encode the message CC (i.e. the 14 bits **10000111000011**) :

**0 0** (one single **1**)

**00 0000** (four **0**)

**0 000** (three **1**)

**00 0000** (four **0**)

**0 00** (two **1**)

So CC is coded as: **0 0 00 0000 0 000 00 0000 0 00**

## Game Input

### Input
**Line 1:** the message consisting of N ASCII characters (without carriage return)

### Output
The encoded message

## Constraints
0 < **N** < 100

## Example
**Input**

C

**Output**

0 0 00 0000 0 00

# Strategy

The auto-generated code helps you parse the standard input according to the problem statement. It has already defined the **message** variable as a string and reads it from the input.

To solve the puzzle the process is divided mainly in two steps, first translate the original message to binary and then translate it from binary to *unary*.

**Translation into binary**

The message is first translated character by character to binary and stored in a variable **char_binary**. The length of each character in binary (**char_binary**) must be 7 digits long. Then each **char_binary** is added one after another to a variable **in_binary** that contains all the message translated to binary.

This is done by using a for loop to go through each character of the message (**message**), then translating this character into binary using (depending of the language) a built-in method/function and storing this transalated character in **char_binary**. Then an if statement is used to verify its length is less than 7. If true zeros are added until reach 7 digits. Finally the translated character in binary (**char_binary**) is added to the binary translated message (**in_binary**).

**Translation int *unary***

Before starting the translation to *unary* an if statement is used to verify that the length of **in_binary** is greater than 1. If tru, a for lopp is used to go through each digit of **in_binary**. Inside this for loop a set of nested if statements are used to perform the operations of translating **in_binary** into the answer **answer**. The first if statement is a statement for  the particular case of the first digit, this if statement verifies if the digit is the first one in **in_binary**. If true, another if statement is used to compare if the value of the digit is 1. If true, the begining of the final message (**answer**) is zero, space, zero (**0 0**), else if false (this means, if the first digit in **in_binary** is 0) the begining of **answer** is zero, zero, space, zero (**00 0**).  

An else if statement is used for the rest of the digits in **in_binary**. Inside this if statement a set of 4 if statements are used to verify the values of both the current digit and the previous digit **in_binary**. If the current digit value is 1 and the previous digit value is also 1 then zero (**0**) is added to **answer**. Else if the current digit value is 1 and the previous digit value is 0  then space, zero, space, zero ( **0 0**) is added to **answer**. Else if the current digit value is 0 and the previous digit value is 1  then space, zero, zero, space, zero ( **00 0**) is added to **answer**. And finaly, else if the current digit value is 0 and the previous digit value is 0 then zero (**0**) is added to **answer**.

The for loop repeats going through all the digits in **in_binary** and then **answer** is sent as output.

![](chuck_norris_co.png)
