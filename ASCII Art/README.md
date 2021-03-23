# ASCII Art
## The Goal
In stations and airports you often see this type of screen:

![](led_display.jpg)

Have you ever asked yourself how it might be possible to simulate this display on a good old terminal? We have: with ASCII art!

## Rules
ASCII art allows you to represent forms by using characters. To be precise, in our case, these forms are words. For example, the word "MANHATTAN" could be displayed as follows in ASCII art:

![](MANHATTAN.png)

Your mission is to write a program that can display a line of text in ASCII art in a style you are given as input.

## Game Input

### Input

**Line 1:** the width **L** of a letter represented in ASCII art. All letters are the same width.

**Line 2:** the height **H** of a letter represented in ASCII art. All letters are the same height.

**Line 3:** The line of text **T**, composed of **N** ASCII characters.

**Following lines:** the string of characters ABCDEFGHIJKLMNOPQRSTUVWXYZ? Represented in ASCII art.

### Output

The text **T** in ASCII art.

The characters a to z are shown in ASCII art by their equivalent in upper case.

The characters that are not in the intervals [a-z] or [A-Z] will be shown as a question mark in ASCII art.

## Constraints

0 < L < 30

0 < H < 30

0 < N < 200

# Strategy

The auto-generated code helps you parse the standard input according to the problem statement. It already has already defined the variables **L**, **H** the text **T**  and depending of the language some lines of code to register "the string of characters ABCDEFGHIJKLMNOPQRSTUVWXYZ? Represented in ASCII art."

In order to solve the puzzle a variable **ASCIIALFA** was created to save the strings of characters (alphabet plus quesiton mark) represented in ASCII art from the input. This variable is a vector of strings that has a size equal to the height of the letters represented in ASCII art. Each element of the vector correspond to one of the strings/lines that forms the ASCII alfabet. Also, a string variable **ALFA** was created which consists of the same string of characters (the alphabet plus the question mark) but represented in normal characters.

A first for loop is used to go through each **line** of the **ASCIIALFA** (until **H** lines). Then a second for loop inside the first is used to go through each **letter** from the **T** text (until **N** letters). Inside this for second loop a built in method/function is used to find the current **letter** into the **ALFA** string and obtain the index (**idx**) where it is located inside the **ALFA** string. With the value of the index **idx** and the width **L** it is posible to obtain the ASCII art representation of the current **letter** in the text **T** by extracting from **ASCIIALFA** the portion of characters that correspond to the current **letter**. The the portion of ASCCI art representation of the current letter from the text **T** is printed from the **idx*L** position to the **idx*L+L** position in the current **line** of the **ASCIIALFA**, resting at the end of the output line (no new line is entered). An if statement is used if the **letter** in **T** was not found in **ALFA** and **idx** was set to the position of last character in **ALFA** (27th position) that correponds to the question mark (**?**). The second for loop continues to the next **letter** in **T** sending in reach iteration as output the portion of characters correponding to the **line** of the **letter** ins ASCII art inside **ASCIIALFA** just after the previous output until reaching **N**. 

The first for loop is done **H** times corresponding to each of the lines of **ASCIIART**, sending as output just a new line command after the second for loop finishes writing the whole line of the portions of characters expresed in ACII art, obtaining finally as whole output the **H** lines printing the message **T** in ASCCI art. 

![](ascii_art_co.png)
