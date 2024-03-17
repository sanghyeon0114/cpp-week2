#include <iostream>
#include <time.h>

using namespace std;

bool checkDigits(int digits) {
    int first = digits / 100;
    int second = (digits % 100) / 10;
    int third = digits % 10;

    if(digits / 1000 != 0 || digits / 10 == 0) {
        return false;
    }

    if(first == second || second == third || first == third) {
        return false;
    }

    return true;
}

int inputValidValue(string message) {
    int answer;

    do {
        cout << message;
        cin >> answer;
    } while(!checkDigits(answer));

    return answer;
}

int getRandomValue() {
    srand(time(NULL));
    int random = rand() % 1000;
    while(!checkDigits(random)) {
        random = rand() % 1000;
    }
    return random;
}