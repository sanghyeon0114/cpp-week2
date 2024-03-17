#include <iostream>

using namespace std;

// util.cpp
int inputValidValue(string message);
bool checkDigits(int digits);
int getRandomValue();

int inputAnswer() {
    return inputValidValue("Enter a answer: ");
}

int getRandomAnswer() {
    int random = getRandomValue();
    if(random / 100 == 0) {
        cout << "Answer is 0" << random << endl;
    } else {
        cout << "Answer is " << random << endl;
    }
    return random;
}

int inputGuess() {
    return inputValidValue("Enter a guess: ");
}

void printScore(int strike, int ball) {
    cout << "Strikes: " << strike << ", ";
    cout << "Balls: " << ball << endl;
}

int getStrike(int answer, int guess) {
    int ballCount = 0;

    int an1 = answer / 100;
    int an2 = (answer % 100) / 10;
    int an3 = answer % 10;

    int gu1 = guess / 100;
    int gu2 = (guess % 100) / 10;
    int gu3 = guess % 10; 

    if(an1 == gu1) {
        ballCount++;
    }
    if(an2 == gu2) {
        ballCount++;
    }
    if(an3 == gu3) {
        ballCount++;
    }

    return ballCount;
}

int getBall(int answer, int guess) {
    int strikeCount = 0;

    int an1 = answer / 100;
    int an2 = (answer % 100) / 10;
    int an3 = answer % 10;

    int gu1 = guess / 100;
    int gu2 = (guess % 100) / 10;
    int gu3 = guess % 10;

    if(gu1 == an2 || gu1 == an3) {
        strikeCount++;
    }
    if(gu2 == an1 || gu2 == an3) {
        strikeCount++;
    }
    if(gu3 == an1 || gu3 == an2) {
        strikeCount++;
    }

    return strikeCount;
}

bool isThreeStrikes(int strike) {
    if(strike == 3) {
            cout << "You win!" << endl;
            return true;
    } 
    return false;
}