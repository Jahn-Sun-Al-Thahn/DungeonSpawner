#include<stdio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX_TRYS 3

int main() {

int playersGuess;
int theNumber;
char playersName[10];
int LCM = playersGuess*playersGuess*playersGuess;

std::cout<<"Welcome, challenger. What is your name?";
std::cin>>playersName;  //Player gets to enter their name.
srand(time(NULL)); //Generates the Random Seed.
std::cout<<"Now &playersName the game begins now. \n" "What is the Least Common Multiple of &theNumber ?";  //Player now knows the game.
//playersGuess = std::cin>> ;  //Declare the value of the players guess.
std::cin>>playersGuess;   //Player gets to make their own guess.
theNumber = rand() % 250 + 1;    //The Random number is created and declared.
int counter = 0;//A counter is declared and Initialized
while(counter != MAX_TRYS) {   //Player Continues to make 3 guesses until they have no more tries.
    if(theNumber == LCM) {
        std::cout<<"Congrats you have won the game. Today you go through the door.";
        break;
    } else {
        std::cout<<"Sorry, try again. You have &counter trys remaining.";
    }
    counter++;
}
return 0;

}