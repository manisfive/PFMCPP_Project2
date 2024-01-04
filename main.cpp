#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 bool
 char
 int
 float
 double
 void
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    bool faceUp = true;
    bool eggCooked = false;
    bool cupFull = true;

    char songKey = 'E';
    char minorThird = 'G';
    char minorSixth = 'C';
    
    int fingers = 5;
    int hands = 2;
    int limbs = 4;

    float phaseOffset = .344f;
    float pitchAdjust = 1.33f;
    float paperTowelRollUsed = .0042f;
    
    double batteryPercent = 55.463;
    double milesTraveled = 12.522;
    double moviePercentRemaining = .211;

    ignoreUnused(number, faceUp, eggCooked, cupFull, songKey, minorThird, minorSixth, fingers, hands, limbs, phaseOffset, pitchAdjust, paperTowelRollUsed, batteryPercent, milesTraveled, moviePercentRemaining); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void playGuitarNote(int string = 5, int fret = 4, float holdLength = .12f)
{
    ignoreUnused(string, fret, holdLength);
}

/*
 2)
 */
int trumpetNote(bool valve1 = true, bool valve2 = false, bool valve3 = true, int blowStyle = 0)
{
    ignoreUnused(valve1, valve2, valve3, blowStyle);
    return {};
}

/*
 3)
 */
int getTempo(float note1StartPosition = 54.01f, float note2StartPosition = 54.4f, int intendedSubdivision = 16)
{
    ignoreUnused(note1StartPosition, note2StartPosition, intendedSubdivision);
    return{};
}

/*
4)
*/
int selectMenuItem(int daysSinceLastPizza = 6, int daysSinceLastSub = 3, bool addSalad = true)
{
    ignoreUnused(daysSinceLastPizza, daysSinceLastSub, addSalad);
    return{};
}

/*
 5)
 */
float overdriveSetting(float distortionAmount = 3.2f, float tone = 7.66f, float gain = 11.f)
{
    ignoreUnused(distortionAmount, tone, gain);
    return{};
}

/*
 6)
 */
bool didTheCatKnockOverTheTrash(bool trashEverywhere = true, bool dogFilthy = false, bool catFilthy = true)
{
    ignoreUnused(trashEverywhere, dogFilthy, catFilthy);
    return {};
}

/*
 7)
 */
void clickMouse(bool rightHanded = true, int mouseButton = 0, int xValue = 459, int yValue = 744)
{
    ignoreUnused(rightHanded, mouseButton, xValue, yValue);
}

/*
 8)
 */
double waterRemaining(double waterTotal = 1.0, double waterRemoved = .355577)
{
    ignoreUnused(waterTotal, waterRemoved);
    return{};
}

/*
 9)
 */
bool changeBattery(int daysSinceLastChange = 200, float averageHoursUsePerDay = 4.2f)
{
    ignoreUnused(daysSinceLastChange, averageHoursUsePerDay);
    return{};
}

/*
 10)
 */
char chordRoot(char note1 = 'C', char note2 = 'A', char note3 = 'E')
{
    ignoreUnused(note1, note2, note3);
    return{};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    playGuitarNote(3, 8, .34f);
    
    //2)
    auto nextTrumpetNote = trumpetNote(true, true, false, 1);
    
    //3)
    auto bpm = getTempo(32.3f, 32.8f, 8);
    
    //4)
    auto lunch = selectMenuItem(2, 3, true);
    
    //5)
    auto overdrive = overdriveSetting(6.6f, 3.8f, 6.f);
    
    //6)
    auto blameCat = didTheCatKnockOverTheTrash(true, true, false);
    
    //7)
    clickMouse(true, 2, 1768, 322);
    
    //8)
    auto water = waterRemaining(.86, .5567);
    
    //9)
    auto newBattery = changeBattery(70, 1.7f);
    
    //10)
    auto root = chordRoot('D', 'B', 'G');
    
    ignoreUnused(carRented, nextTrumpetNote, bpm, lunch, overdrive, blameCat, water, newBattery, root);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
