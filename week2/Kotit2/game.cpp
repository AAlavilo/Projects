#include <iostream>
#include "game.h"
#include <ctime>
using namespace std;

Game::Game(int maxRange)
{
    maxNumber = maxRange;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxRange<<" as maximum value"<<endl;
    srand(time(0));
    randomNumber = (rand() % maxRange) +1;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{
    cout<<"Give your guess between 1-"<<maxNumber<<endl;
    while(playerGuess!=randomNumber) {
        numOfGuesses = numOfGuesses + 1;

        cin>>playerGuess;
        if (playerGuess<randomNumber) {
            cout<<"The guess is too small"<<endl;
        } else if (playerGuess>randomNumber) {
            cout<<"The guess is too big"<<endl;
        } else {
            printGameResult();
        }
      }
}


void Game::printGameResult()
{
    cout<<"You guessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}
