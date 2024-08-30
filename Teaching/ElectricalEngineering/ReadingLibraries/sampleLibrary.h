/* Some libraries are better documented than others.
*  use what you have and contribute where you can

*/
#ifndef sampleLibrary_h
#define sampleLibrary_h
//here is where you would include any other libaries or variables

#include "Arduino.h" // lets you speak the language


//header files are made of classes. Each class has a line for each function or variable 
class student //name of the class
{
public: //classes have public and private functions and variables.
        // things in a private class can only be accessed within the class itself. 
        //used for more static, behind the scences processing
    //start with a constructor, have the same name as class
    //constructors can have one or more variables, and you can have as many constructors as you'd like
    student(); 
    student(String name, int age, char pronoun); 

    //then list all of the functions and their return types

    void enroll(); //void executes functions but doesn't return anything
    void setPin(int pin); //functions can require variables 
    void setPin(int pin, bool input); //1 is input (button), 0 is output
    int getPin();
    boolean connected();      //they can return any datatype

    //there are still functions.
    //they're just organized into getters and setters
    int getAge();
    String getName();
    char getPronoun();
    String getPronounAsString();

private: //now we want to set the information for every student
    String _name;
    int _age;
    char _pronoun; 
    int _pin;
};

#endif