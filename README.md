Advanced Modern C++ Udemy Course Coding assignment solutions written by me.

URL: https://www.udemy.com/share/1020JG3@pJfSqQ9hFoQhotKsuF5kiqqwx74BBBARE2WixDIhT132FWCMWu_LDcyh0s7hlJj9/

## Examples:

### 1- Class Definition

A simple C++ class represents a URL, such as "http://www.example.com/index.html".

The class has two members of type std::string. One member stores the protocol of the URL (the "http" part) and the other stores its resource (the "www.example.com/index.html" part which comes after the separator).

Questions for this assignment
Define the class.

Write a constructor for the class which takes the protocol and resource as arguments.

Add a member function to the class which displays the complete URL: the protocol, followed by the separator, followed by the resource. For example, "http://www.example.com/index.html"

Write a program to test your class. This program will create an object of the class, then call its member function to display the complete URL.

### 2- String manupilation

Write a function called exclaim(). This function takes an std::string as argument and returns an std::string.

The function will return the argument string, but with all the punctuation characters replaced by an exclamation mark.

For example, if the argument string is

"To be, or not to be, that is the question:"

The returned string will be

"To be! or not to be! that is the question!"

Use a suitable character function to implement this function.

### 3- File Operations

You are given the attached languages.txt file and the following type definition:

struct language {
string lang;
string designer;
int date;
};

The format of the languages.txt file is:

C++ Stroustrup 1979
Java Gosling 1991
Write a program which will:

Read in the data from the attached languages.txt file

Use each line of input to populate a language object

Add this object to a vector

Print out all the data in the vector, separated by commas

Your output should look like this:

C++, Stroustrup, 1979
Java, Gosling, 1991

### 4- Lambda Expression

Write a function that takes a vector of int as argument and uses a range-for loop to print out the elements of the vector.

Write a program that calls this function. Check that your program compiles and runs correctly.

Modify your program so that it sorts the elements in descending order, with the largest element first. For example, if the vector elements are 1, 2, 3, 4, 5, the result would be 5, 4, 3, 2, 1.

Use a suitable standard algorithm with a lambda expression as predicate.

Display the elements of the vector after sorting them. Check that your program still compiles and runs correctly.
