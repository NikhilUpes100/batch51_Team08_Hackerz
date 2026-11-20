# Quiz and Score Management System

## 1. Project Title
**Quiz and Score Management System (Multiple Students)**

## 2. Problem Statement

The Quiz and Score Management System is a menu-driven application developed using the C programming language. It allows up to 50 students to participate in a multiple-choice quiz.

The system accepts student names, displays predefined questions with four options, checks the answers automatically, calculates individual scores and percentages, and displays the final results.

It also generates a combined result report and identifies the highest-scoring student (topper).

## 3. Team Details

| Member | Name | Responsibility |
|---|---|---|
| Member 1 | [Hansika Pundir] | Question and Student Data Management |
| Member 2 | [Shreyas Singh] | Student Registration and Quiz Execution |
| Member 3 | [Nikhil Singh] | Result Management and Topper Identification |

## 4. Project Objectives

- To develop a quiz application using C programming.
- To allow multiple students to participate in a quiz.
- To store student details using structures.
- To store questions, options, and correct answers.
- To check answers automatically.
- To calculate individual scores and percentages.
- To display the results of all participating students.
- To identify the highest-scoring student.

## 5. Features

1. **Menu-driven interface:** Provides options to start a quiz, display results, and exit.
2. **Multiple-student support:** Allows up to 50 students to participate.
3. **Student registration:** Accepts the name of each student.
4. **Multiple-choice questions:** Contains 5 predefined questions with 4 options each.
5. **Automatic answer checking:** Checks whether the selected option is correct.
6. **Score calculation:** Awards one mark for every correct answer.
7. **Percentage calculation:** Calculates each student's percentage.
8. **Performance classification:**
   - 80% or above: Excellent
   - 60% or above: Good
   - 40% or above: Average
   - Below 40%: Needs Improvement
9. **Individual result display:** Shows each student's score and percentage.
10. **Combined result report:** Displays the results of all students.
11. **Topper identification:** Finds the student with the highest score.
12. **Input validation:** Checks the student count and answer range.

## 6. C Programming Concepts Used

| C Concept | Application |
|---|---|
| Header Files | `stdio.h` for input and output |
| Macro Definitions | `#define MAX_STUDENTS 50` |
| Data Types | `int`, `float`, and `char` |
| Structures | Stores question and student information |
| Arrays | Stores multiple questions and students |
| Two-Dimensional Arrays | Stores four options for each question |
| Strings | Stores questions, options, and student names |
| Array of Structures | Stores multiple student records |
| `printf()` | Displays output |
| `scanf()` | Accepts user input |
| For Loop | Iterates through students, questions, and options |
| Nested Loops | Handles multiple students and quiz questions |
| Do-While Loop | Repeats the main menu and validates answers |
| If-Else Statements | Checks answers and classifies performance |
| Arithmetic Operators | Calculates scores and percentages |
| Relational Operators | Compares answers and scores |
| Increment Operator | Increases the score |
| Continue Statement | Skips invalid student-count input |

## 7. Algorithm

1. Start the program.
2. Include the required header file.
3. Define constants for the maximum number of students (50) and total questions (5).
4. Define a structure named `Question` to store questions, options, and correct answers.
5. Define a structure named `Student` to store student names, scores, and percentages.
6. Initialize the quiz questions and correct answers.
7. Create an array to store student records.
8. Display the main menu:
   - Start Quiz for Students
   - Display All Results
   - Exit
9. Accept the user's menu choice.

### If the user selects Start Quiz:

10. Ask for the number of students.
11. Check whether the number is between 1 and 50.
12. If invalid, display an error message and return to the menu.
13. If valid, repeat the following steps for each student:
    - Accept the student's name.
    - Initialize the student's score to zero.
    - Display each question and its four options.
    - Accept the student's answer.
    - Validate that the answer is between 1 and 4.
    - Compare the selected answer with the correct answer.
    - Increase the score by one if the answer is correct.
14. After all questions, calculate the student's percentage.
15. Display the student's individual result and performance category.
16. Repeat until all students have completed the quiz.

### If the user selects Display All Results:

17. Check whether results are available.
18. Display all students' names, scores, and percentages.
19. Compare the scores to identify the highest-scoring student.
20. Display the topper's name and highest score.

### If the user selects Exit:

21. Display a thank-you message.
22. Terminate the program.

## 8. Formulas Used

**Percentage Calculation**

Percentage = (Correct Answers / Total Questions) × 100

**Wrong Answers**

Wrong Answers = Total Questions - Correct Answers

**Highest Score**

The program compares the scores of all students and identifies the highest value.

## 9. How to Compile and Run

### Requirements

- C compiler (GCC recommended).
- Visual Studio Code or any C programming IDE.
- Terminal or Command Prompt.

### Steps

**Step 1:** Save the source code as:

`quiz.c`

**Step 2:** Open the terminal in the project folder.

**Step 3:** Compile the program:

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

### Individual Student Test Cases

| Test Case | Correct Answers | Wrong Answers | Percentage | Performance |
|---|---:|---:|---:|---|
| 1 | 5 | 0 | 100% | Excellent |
| 2 | 4 | 1 | 80% | Excellent |
| 3 | 3 | 2 | 60% | Good |
| 4 | 2 | 3 | 40% | Average |
| 5 | 1 | 4 | 20% | Needs Improvement |
| 6 | 0 | 5 | 0% | Needs Improvement |

### Multiple-Student Test Cases

| Test Case | Number of Students | Expected Result |
|---|---:|---|
| 1 | 1 | One student's result displayed |
| 2 | 3 | Three students' results displayed |
| 3 | 10 | Ten students' results displayed |
| 4 | 50 | All 50 students' results displayed |
| 5 | 0 | Invalid student count |
| 6 | 51 | Invalid student count |

## 11. Sample Output

### Main Menu

```text
===== QUIZ AND SCORE MANAGEMENT SYSTEM =====
1. Start Quiz for Students
2. Display All Results
3. Exit

Enter your choice: 1

Enter number of students (1-50): 3
```

### Student Registration

```text
===== STUDENT 1 =====
Enter student name: Rahul

Quiz started for Rahul!
```

The program displays five questions, accepts answers, and calculates Rahul's result. It then repeats the process for the remaining students.

### Combined Result Report

```text
===== ALL STUDENTS' RESULTS =====

No.   Name                 Score      Percentage
1     Rahul                5/5        100.00%
2     Aman                 4/5        80.00%
3     Priya                3/5        60.00%

Topper: Rahul
Highest Score: 5/5
```

*Note: The above is an illustrative sample output.*

## 12. Limitations

- The system supports a maximum of 50 students.
- The current version contains only five predefined questions.
- Each question has four options.
- There is no negative marking.
- Results are stored temporarily in memory.
- Results are lost when the program exits.
- Selecting Start Quiz again replaces the previous batch of results.
- If multiple students achieve the same highest score, the first student with that score is displayed as the topper.
- Non-numeric input validation can be improved.

## 13. Future Improvements

- Add more questions to the quiz.
- Allow faculty to add or modify questions.
- Store student results permanently using file handling.
- Add student roll numbers or IDs.
- Introduce a timer for each question.
- Implement negative marking.
- Display correct answers after the quiz.
- Add a leaderboard.
- Allow students to view their previous results.
- Generate detailed performance reports.

## 14. Conclusion

The Quiz and Score Management System demonstrates the practical application of fundamental C programming concepts, including structures, arrays, strings, loops, conditional statements, and arithmetic operations.

The project allows up to 50 students to participate in a quiz and automatically evaluates their performance. It also generates a combined result report and identifies the highest-scoring student.

This project helps students understand how basic C programming concepts can be combined to develop a useful, menu-driven application.

---

**Project Name:** Quiz and Score Management System  
**Programming Language:** C  
**Compiler:** GCC  
**Project Type:** Menu-Driven Console Application  
**Maximum Students:** 50  
**Total Questions:** 5
