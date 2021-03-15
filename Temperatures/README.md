# Temperatures
## The Goal
The purpose is to analyze records of temperature and to find the closest to zero.
##	Rules
You have to write a program which output is the temperature closest to 0 in the input data. If there are two numbers equally close to zero you have to choose the positive integer  closest to zero (example, if the temperatures are -5 and 5, then display 5).
## Game Input
The program have to read the data from the input and write the result on the output.
## Input
**Line 1: N**: number of temperatures to analyze
**Line 2: A**: string of **N** temperatures as integers (from -273 to 5526)

## Output
Must display 0 (zero) if the no temperatures are provided (**N** = 0). Otherwise, display the temperature that is closest to 0.
## Constraints
0 ≤ N < 10000
## Example
Input
5
1 -2 -8 4 5

Output
1

## Strategy

The auto-generated code helps you by parsing the standard input according to the problem statement. It has already defined the **N** variable and depending of the landuage has the input data in strings, arrays or vectors to store the input data in by a for cycle asigns each temperature to a **t** variable.

I opted to take each temperature **t** and calculate the difference between the temperature and the reference (zero). For that I used two variables **dif** and **dif2**. **dif** started as the maximum (5526) and **dif2** started as zero (0). I used an if statement assigning the absolute value of the temperature to **dif2** and then compared it to **dif**, if **dif2** was inferior to **dif** I stored the lowest difference and its temperature in a variable **result**.

For the case where the difference between two or more temperatures were the same I used an if statement were I kept only the positive temperature.

I repeated all the process thru all the data and sent the **result** as output.
