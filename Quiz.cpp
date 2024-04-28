#include <iostream>
using namespace std;

struct Questions {
    string q1;
    string q2;
    string q3;
};

struct Answers {
    string answ1[3];
    string answ2[3];
    string answ3[3];
};

Questions questions1;
Answers answers1;
int correct_answers = 0;
void addQuestions() {

    questions1.q1 = "Which city is the capital of India?";
    questions1.q2 = "What is the diameter of Earth?";
    questions1.q3 = "Who is G.R.R. Martin?";
}

void addAnswers() {
    answers1.answ1[0] = "Tbilisi";
    answers1.answ1[1] = "New Delhi";
    answers1.answ1[2] = "Bangkok";

    answers1.answ2[0] = "12,742 km";
    answers1.answ2[1] = "32, 123 km";
    answers1.answ2[2] = "6,431 km";

    answers1.answ3[0] = "Politician";
    answers1.answ3[1] = "Olympic Athlete";
    answers1.answ3[2] = "Writer";
}

void print(string question, string answers[3], int correct_index){
    cout << "Question: " << question << endl;
    for(int i = 0; i < 3; i++) cout<< "Answer " << i+1 << ": " << answers[i] << endl;
    cout << "Enter the correct answer(numerically): ";
    int n;
    cin >> n;
    cout << endl;
    if(n == correct_index + 1) {cout << "Correct!"; correct_answers++;}
    else cout << "Wrong! Correct answer was: " << answers[correct_index];
}

int main()
{
    addQuestions();
    addAnswers();

    cout << "This quiz has 3 questions. Choose all three correct answers and you will win the prize!" << endl;
    system("pause>0");
    system("cls");

    print(questions1.q1, answers1.answ1, 1);
    system("pause>0");
    system("cls");

    print(questions1.q2, answers1.answ2, 0);
    system("pause>0");
    system("cls");

    print(questions1.q3, answers1.answ3, 2);
    system("pause>0");
    system("cls");

    if(correct_answers == 3) cout << "Good job! You answered every question correctly! You won the prize!";
    else if(correct_answers == 2) cout << "Nice try, but you have failed to win a prize. Your score was: 2";
    else if(correct_answers == 1) cout << "You answered only 1 question correctly. Good luck next time!";
    else cout << "You have managed to fail the easiest quiz in world... Well, good luck next time! Your score: 0";

    cout << endl;
    system("pause>0");

}

