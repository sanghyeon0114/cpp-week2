// game.cpp
int inputAnswer();
int inputGuess();
int getBall(int answer, int guess);
int getStrike(int answer, int guess);
void printScore(int strike, int ball);
bool isThreeStrikes(int strike);

int main() {
    int strike = 0, ball = 0;
    int answer, guess;
    answer = inputAnswer();


    while(true) {  
        guess = inputGuess();

        strike = getStrike(answer, guess);
        ball = getBall(answer, guess);

        if(isThreeStrikes(strike)) {
            break;
        }

        printScore(strike, ball);
    }

    return 0;
}