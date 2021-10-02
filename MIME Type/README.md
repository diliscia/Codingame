# MIME Type

## The Goal
MIME types are used in numerous internet protocols to associate a media type (html, image, video ...) with the content sent. The MIME type is generally inferred from the extension of the file to be sent.

You have to write a program that makes it possible to detect the MIME type of a file based on its name.
## Rules
You are provided with a table which associates MIME types to file extensions. You are also given a list of names of files to be transferred and for each one of these files, you must find the MIME type to be used.

The extension of a file is defined as the substring which follows the last occurrence, if any, of the dot character within the file name.
If the extension for a given file can be found in the association table (case insensitive, e.g. TXT is treated the same way as txt), then print the corresponding MIME type. If it is not possible to find the MIME type corresponding to a file, or if the file doesn’t have an extension, print UNKNOWN.
## Game Input
### Input
Line 1: Number N of elements which make up the association table.

Line 2: Number Q of file names to be analyzed.

**N** following lines: One file extension per line and the corresponding MIME type (separated by a blank space).

**Q** following lines: One file name per line.

### Output
For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.

## Constraints

0 < **N** < 10000

0 < **Q** < 10000

File extensions are composed of a maximum of 10 alphanumerical ASCII characters.

MIME types are composed of a maximum 50 alphanumerical and punctuation ASCII characters.

File names are composed of a maximum of 256 alphanumerical ASCII characters and dots (full stops).

There are no spaces in the file names, extensions or MIME types.
## Example

**Input**

3

3

html text/html

png image/png

gif image/gif

animated.gif

portrait.png

index.html

**Output**

image/gif

image/png

text/html

# Strategy

The auto-generated code helps you parse the standard input according to the problem statement. It starts predefining 5 variables **N**, **Q**, **EXT**, **MT** and **FNAME**. The code has already programmed the reading of the lines from the input, reading and assigning the integer values of **N** and **Q** and then using two for loops one after the other. The first one reads the **N** lines containing the file extensions and the corresponding MIME type and assign them to the string variables **EXT** and **MT** respectively. The next for loop reads the **Q** lines containing one file name per line and assign them to the string variable **FNAME**.

The first thing done was to define a dictionary variable **MIMETYPES** to store the extensions (**EXT**) and the corresponding MIMEtypes (**MT**) using **EXT** as the keys. The  variables **EXT** and **MT** were stored in **MIMETYPES** just after they were read in the first for loop but changing **EXT** to lowercases in the process. It could be uppercases too, the purpose was to standerize it so they could be compared with later. This was because as the rules explains "the extension for a given file can be found in the association table (case insensitive, e.g. TXT is treated the same way as txt)".

Then, in the second for loop a new string variable **EXT2** was defined after the already programmed reading and assigning of the filename **FNAME**. Using an if clause it was checked if there was a point **'.'** present in **FNAME**. If there was no point that means that there was no extension and an else statement sent out the output **'UNKNOWN'**. If there was a point it meant that there was an extension and the string **FNAME** was splitted in two substrings, assigning the second substring containing the extension name into the variable **EXT2**. The substring was changed to lowercases in the process, and as explained before it could be changed to uppercases too but being coherent with the option taken before while storing the extensions in first loop. Inside this first if statement another if statement was used to verify if the extension **EXT2** in the filename **FNAME** was in the association table (dictionary **MIMETYPES**). If the extension was not present an else statement sent out the output **'UNKNOWN'**. If the extension was in the association table (as a key) the corresponding MIME type **MT** was sent to the output. 

![](mime_type_co.png)
