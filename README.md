# Quiz and Score Management System

## 1. Project Title
**Quiz and Score Management System**

## 2. Problem Statement
The Quiz and Score Management System is a menu-driven C programming project designed to conduct a simple multiple-choice quiz and calculate the user's performance.

The system displays questions with four options, accepts answers from the user, checks whether the selected answers are correct, and calculates the final score and percentage.

## 3. Team Details

| Member | Name | Responsibility |
|---|---|---|
| Member 1 | [Hansika Pundir] | Structure and Question Storage |
| Member 2 | [Shreyas Singh] | Menu and Quiz Execution |
| Member 3 | [Nikhil Singh] | Result Calculation and Program Exit |

## 4. Project Objectives

- To develop a quiz application using the C programming language.
- To store questions, options, and correct answers.
- To accept answers from the user.
- To check answers automatically.
- To calculate the final score and percentage.
- To display the user's performance based on the score.

## 5. Features

1. Menu-driven interface.
2. Five multiple-choice questions.
3. Four options for each question.
4. Automatic answer checking.
5. Automatic score calculation.
6. Percentage calculation.
7. Performance classification:
   - 80% or above: Excellent
   - 60% or above: Good
   - 40% or above: Average
   - Below 40%: Needs Improvement
8. Option to restart the quiz.
9. Option to exit the program.

## 6. C Programming Concepts Used

| Concept | Application |
|---|---|
| Header Files | `stdio.h` for input and output |
| Data Types | `int`, `float`, and `char` |
| Structures | To group question information |
| Arrays | To store multiple questions |
| Two-Dimensional Arrays | To store question options |
| Strings | To store questions and options |
| `printf()` | To display output |
| `scanf()` | To accept user input |
| For Loop | To display questions and options |
| Nested Loops | To display four options for each question |
| Do-While Loop | To repeat the main menu |
| If-Else Statements | To check answers and classify performance |
| Arithmetic Operators | To calculate score and percentage |
| Increment Operator | To increase the score |
| Relational Operators | To compare answers and percentages |

## 7. Algorithm

1. Start the program.
2. Define a structure named `Question`.
3. Store five questions, four options for each question, and their correct answers.
4. Display the main menu:
   - Start Quiz
   - Exit
5. Accept the user's choice.
6. If the user selects Start Quiz:
   - Initialize the score to zero.
   - Display each question and its four options.
   - Accept the user's answer.
   - Compare the answer with the correct answer.
   - If correct, increase the score by one.
   - Repeat until all five questions are completed.
7. Calculate the percentage.
8. Calculate the number of wrong answers.
9. Display the final score, percentage, and performance category.
10. Return to the main menu.
11. If the user selects Exit, display a thank-you message.
12. Stop the program.

## 8. Formula Used

**Percentage Calculation:**

`Percentage = (Correct Answers / Total Questions) × 100`

**Wrong Answers:**

`Wrong Answers = Total Questions - Correct Answers`

## 9. How to Compile and Run

### Requirements
- C compiler (GCC recommended).
- Visual Studio Code or any C programming IDE.
- Terminal or command prompt.

### Steps

**Step 1:** Save the source code as:

`quiz.c`

**Step 2:** Open the terminal in the project folder.

**Step 3:** Compile the program using GCC:

```bash
gcc quiz.c -o quiz
```

**Step 4:** Run the program.

For Windows:

```bash
.\quiz.exe
```

For Linux:

```bash
./quiz
```

## 10. Sample Test Cases

| Test Case | Correct Answers | Wrong Answers | Percentage | Performance |
|---|---:|---:|---:|---|
| 1 | 5 | 0 | 100% | Excellent |
| 2 | 4 | 1 | 80% | Excellent |
| 3 | 3 | 2 | 60% | Good |
| 4 | 2 | 3 | 40% | Average |
| 5 | 1 | 4 | 20% | Needs Improvement |
| 6 | 0 | 5 | 0% | Needs Improvement |

## 11. Sample Output

```text
===== QUIZ AND SCORE MANAGEMENT SYSTEM =====
1. Start Quiz
2. Exit
Enter your choice: 1

===== QUIZ STARTED =====

Q1. Which language is used for system programming?
1. Python
2. C
3. HTML
4. CSS

Enter your answer (1-4): 2
Correct Answer!

===== QUIZ RESULT =====
Total Questions: 5
Correct Answers: 5
Wrong Answers: 0
Final Score: 5/5
Percentage: 100.00%
Performance: Excellent
```

## 12. Limitations

- The current version contains only five predefined questions.
- Each question has four options.
- There is no negative marking.
- The program does not save scores permanently.
- The program does not store multiple students' results.
- Input validation for non-numeric entries and answers outside the range 1–4 can be improved.

## 13. Future Improvements

- Add more questions.
- Add student name and student ID.
- Store results in a file.
- Add a timer for each question.
- Introduce negative marking.
- Display the correct answers after the quiz.
- Add a leaderboard to compare scores.

## 14. Conclusion

The Quiz and Score Management System demonstrates the practical use of fundamental C programming concepts such as structures, arrays, loops, conditional statements, and arithmetic operations.

The project provides a simple way to conduct a multiple-choice quiz and automatically evaluate the user's performance. It also helps students understand how different C programming concepts can be combined to develop a working application.

---

**Project:** Quiz and Score Management System  
**Programming Language:** C  
**Compiler:** GCC  
**Project Type:** Menu-Driven Console Application
