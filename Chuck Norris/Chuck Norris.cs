using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution
{
    static void Main(string[] args)
    {
        string MESSAGE = Console.ReadLine();
        string ANSWER = ""; // answer of message translated in unary
        string IN_BINARY = "";  // message translated in binary
        string CHAR_BINARY = "";  // character translated in binary

        for (int i = 0; i < MESSAGE.Length; i++){
            CHAR_BINARY = (Convert.ToString((int)MESSAGE[i], 2)).PadLeft(7, '0');; // translating at binary 7 bits          
            if (CHAR_BINARY.Length < 7) {
                CHAR_BINARY = ' ' + CHAR_BINARY;
            }
            IN_BINARY = IN_BINARY + CHAR_BINARY;  // adding each character in binary  
        }
        //    if (IN_BINARY.length() > 1) {
            for (int i = 0; i < IN_BINARY.Length; i++) { // repeat for all numbers at IN_BINARY
                if (i == 0) {   // operations for the start if the characcter is '1' or '0'
                    if (IN_BINARY[i] == '1') {
                        ANSWER = ANSWER + "0 0";
                    }
                    else if (IN_BINARY[i] == '0') ANSWER = ANSWER + "00 0";
                }
                else if (i > 0) { // operations for the rest of the characters, comparing to the previos one
                    if (IN_BINARY[i-1] == '1' && IN_BINARY[i] == '1')
                        ANSWER = ANSWER + "0";
                    else if (IN_BINARY[i-1] == '0' && IN_BINARY[i] == '1')
                        ANSWER = ANSWER + " 0 0";
                    else if (IN_BINARY[i-1] == '1' && IN_BINARY[i] == '0')
                        ANSWER = ANSWER + " 00 0";
                    else if (IN_BINARY[i-1] == '0' && IN_BINARY[i] == '0')
                        ANSWER = ANSWER + "0";
                }
            }
        //    }        
        // Write an answer using Console.WriteLine()
        // To debug: Console.Error.WriteLine("Debug messages...");

        Console.WriteLine(ANSWER);
    }
}
