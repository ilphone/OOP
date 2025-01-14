#include "game.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

Game::Game(int maxnum) {
    cout << "Konstruktori" << endl;
    maxNumber = maxnum;
    playerGuess = 0;
    randomNumber = 0;
    numOfGuesses = 0;
}

Game::~Game()
{
    cout << "Destruktori" << endl;
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand()%maxNumber;
    cout << "Arvaa lukua 0-" << maxNumber << ": ";
    while(playerGuess != randomNumber){
        cin >> playerGuess;
        numOfGuesses++;
        if (playerGuess == randomNumber) {
            cout << "Oikein! Luku oli " << randomNumber << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Vaarin, luku on pienempi, arvaa uudelleen: ";
        } else {
            cout << "Vaarin, luku on suurempi, arvaa uudelleen: ";
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "Arvausten maara: ";
    cout << numOfGuesses << endl;

}

