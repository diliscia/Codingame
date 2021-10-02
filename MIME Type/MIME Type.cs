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
            int N = int.Parse(Console.ReadLine()); // Number of elements which make up the association table.
            int Q = int.Parse(Console.ReadLine()); // Number Q of file names to be analyzed.
            //This will use the file Ext as the Key and the MIME type as the value.
            Dictionary <string, string> MIMETYPES = new Dictionary<string, string>();
            for (int i = 0; i < N; i++)
            {
                string[] inputs = Console.ReadLine().Split(' ');
                string EXT = inputs[0].ToLower(); // file extension
                string MT = inputs[1]; // MIME type.
                MIMETYPES.Add(EXT, MT); // defining the dictionary considering uppercases
            }
            for (int i = 0; i < Q; i++)
            {
                string FNAME = Console.ReadLine();// One file name per line.
                string EXT2 = ""; // substring for the extension
                FNAME = FNAME.ToLower();
                if (FNAME.Contains('.')) {  // checking if there is a '.', that means an extension
                    EXT2 = FNAME.Substring(FNAME.LastIndexOf('.')+1);    // assigning the last substring as the extension (key)
                    if (MIMETYPES.ContainsKey(EXT2)) {  // if the extension (key) is present
                        Console.WriteLine(MIMETYPES[EXT2]); // print the MIME type
                    }
                    else {
                        Console.WriteLine("UNKNOWN");   // if the extension (key) is not present
                    }
                }
                else {
                    Console.WriteLine("UNKNOWN");   // if there is no '.' print that is UNKNOWN
                }
            }  
        }
}
