#include <iostream>
using namespace std;

int playquiz(void);

int main()
{
  int result;
  char again;

  result = playquiz();
  cout << "Your total score is " << result << endl;

  if (result >= 6)
  {
    cout << "PASS!!!!!!!" << endl;
    cout << "Thank you for playing the quiz" << endl;
  }
  else
  {
    cout << "Try again! (y or n)" << endl;
    cin >> again;
    if (again == 'y' || again == 'Y')
    {
      playquiz();
    }
    else
    {
      cout << "Thank you for playing the quiz" << endl;
    }
  }
}

int playquiz()
{
  char ch, option;
  int score = 0;

  cout << "******Welcome to Quiz Game******" << endl;
  cout << endl;
  cout << "Please follow the instructions" << endl;
  cout << "___________________________________________________" << endl;
  cout << "1) Quiz contains 10 questions" << endl;
  cout << "2) You will be given 1 point for each right answer" << endl;
  cout << "3) No negative marking" << endl;
  cout << "4) Select the correct option out of the four options" << endl;
  cout << "5) If you score >= 6, you will pass the quiz" << endl;
  cout << "6) Press s to start the quiz" << endl;

  cin >> ch;
  cout << endl;
  if (ch == 's' || ch == 'S')
  {
    cout << "Q1. Who invented C++" << endl;
    cout << "a) Dennis Ritchie b) Ken Thompson c) Brian Kernighan d) Bjarne Stroustrup" << endl;
    cin >> option;
    if (option == 'd' || option == 'D')
    {
      score = score + 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q2. Which of the following approach is used by C++" << endl;
    cout << "a) Left-right b) Right-left c) Bottom-up d) Top-down" << endl;
    cin >> option;
    if (option == 'c' || option == 'C')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q3. WWhich of the following correctly declares an array in C++?" << endl;
    cout << "a) array{10}; b) array array[10]; c) int array; d) int array[10]; " << endl;
    cin >> option;
    if (option == 'd' || option == 'D')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q4. Which of the following is used to terminate the function declaration in C++?" << endl;
    cout << "a) ; b) ] c) ) d) : " << endl;
    cin >> option;
    if (option == 'a' || option == 'A')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q5. What is Inheritance in C++?" << endl;
    cout << "a) Deriving new classes from existing classes b) Overloading of classes c) Classes with same names d) Wrapping of data into a single class" << endl;
    cin >> option;
    if (option == 'a' || option == 'A')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q6. Which of the following symbol is used to declare the preprocessor directives in C++?" << endl;
    cout << "a) $ b) ^ c) # d) *" << endl;
    cin >> option;
    if (option == 'c' || option == 'C')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q7. What is meant by a polymorphism in C++?" << endl;
    cout << "a) Class having only single form b) class having four forms c) class having many forms d) class having two forms " << endl;
    cin >> option;
    if (option == 'c' || option == 'C')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q8. _____ is the smallest individual unit in a program" << endl;
    cout << "a) Variable b) Control c) Character d) Token " << endl;
    cin >> option;
    if (option == 'd' || option == 'D')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q9. The modulus operator uses ___ character." << endl;
    cout << "a) + b) * c) / d) %" << endl;
    cin >> option;
    if (option == 'd' || option == 'D')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }

    cout << "Q10. && and || are _____ operators." << endl;
    cout << "a) Logical b) Equality c) Class member d) Comma " << endl;
    cin >> option;
    if (option == 'a' || option == 'A')
    {
      score += 1;
    }
    else
    {
      score = score + 0;
    }
  }
  else
  {
    cout << "You have entered wrong character... Please enter s" << endl;
    playquiz();
  }

  return score;
}