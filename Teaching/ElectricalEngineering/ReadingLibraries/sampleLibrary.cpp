
//start with the libraries from the .h file 
#include "Arduino.h"
#include "sampleLibrary.h"

//constructors

student::student() //what happens when a person declares a new instance of the student class with no variables
{
    _name = "Jesse Doe"; //set default values 
    _age = 123; //weird number so you can find them later
    _pronoun = p; //default p for person
    _pin = 13; //don't connect anything to pin 13
}

student::student(String name, int age, char pronoun)
{
    //set to inputted values 
    _name = name; 
    _age = age; 
    _pronoun = pronoun;
    _pin = 13;
}

//functions 
void student:: enroll()
{
    //LEDs on outputs buttons with pull-ups on intputs
    if(connected()) digitalWrite(_pin, HIGH); 
     
}
void student::setPin(int pin)
{
    //setting pin as input by default. 
    //change this manually by declaring the variable  setPin(int pin, bool input)
    

    _pin = pin;
    pinMode(_pin, INPUT); 
}

void student::setPin(int pin, bool input)
{
    //declare whether the pin is an input or an output
    //0 for output (effector), 1 for input (sensor)
    _pin = pin;
    if (input == 1) pinMode(_pin, INPUT);
    if (input == 0) pinMode(_pin, OUPUT);
}
int student::getPin()
{
    return _pin;
}
bool student::connected()
{
    if(getPin() != 13)
    {
        return true();
    }
    else{
        return false;
    }
}

int student::getAge();
{
    return _age;
}

String student::getName();
{
    return _name;
}

char student::getPronoun();
{
    return _pronoun;
}

String student::getPronounAsString();
{
    char abbr = getPronoun(); //abbreviation character
    if (abbr == "s") return "she/her/hers";
    if (abbr == "h") return "he/him/his";
    if (abbr == "t") return "they/them/theirs";
    else{
        return "person";
    }
}