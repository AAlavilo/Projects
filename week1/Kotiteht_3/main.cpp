#include <iostream>
#include <cstdlib>

using namespace std;

int game (int maxnum) {
    int secret;
    int guess = 0;
    int seed;
    int numOfGuess = 0;
    cout<<"give an integer for the seed"<<endl;
    cin>>seed;
    srand (seed
           );

      secret = rand() % maxnum + 1;

      while (secret!=guess) {
        numOfGuess = numOfGuess+1;

        cout<<"Guess the number from 1 to "<<maxnum<<endl;
        cin>>guess;
        if (secret<guess) {
            cout<<"The secret number is lower"<<endl;
        } else if (secret>guess) {
            cout<<"The secret number is higher"<<endl;
        }
      }

      cout<<"Congratulations!"<<endl;
      cout<<"You had to guess a total of ";
      return numOfGuess;
}

int main()
{
    int maxnum;
    cout<<"Give the maximum number"<<endl;
    cin>>maxnum;
    cout<<game(maxnum)<<" times"<<endl;
    return 0;
}
