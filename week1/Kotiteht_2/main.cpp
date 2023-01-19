#include <iostream>
#include <cstdlib>

using namespace std;

void guessGame () {
    int a, b;
    int seed;
    cout<<"give an integer for the seed"<<endl;
    cin>>seed;
    srand (seed);

      a = rand() % 20 + 1;

      do {
        cout<<"Guess the number from 1 to 20"<<endl;
        cin>>b;
        if (a<b) {
            cout<<"The secret number is lower"<<endl;
        } else if (a>b) {
            cout<<"The secret number is higher"<<endl;
        }
      } while (a!=b);

      cout<<"Congratulations!"<<endl;

}

int main()
{
    guessGame();
    return 0;
}
