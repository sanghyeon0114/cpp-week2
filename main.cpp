// game.cpp
int getRandomAnswer();
int inputGuess();
int getBall(int answer, int guess);
int getStrike(int answer, int guess);
void printScore(int strike, int ball);
bool isThreeStrikes(int strike);
void printChanceCount(int chances);
bool isLose(int chances);

int main() {
    int strike = 0, ball = 0;
    int answer, guess;
    int chances = 5;
    answer = getRandomAnswer();


    while(true) {  
        if(isLose(chances)) {
            break;
        }
        printChanceCount(chances);
        guess = inputGuess();

        strike = getStrike(answer, guess);
        ball = getBall(answer, guess);

        if(isThreeStrikes(strike)) {
            break;
        }

        printScore(strike, ball);
        chances--;
    }

    return 0;
}