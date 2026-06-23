# Number Guessing Game

A simple command-line number guessing game written in C. The program generates a random number between 1 and 100, and the user must guess it. The game provides hints if the guess is too high or too low and tracks the total number of attempts.

## Features
* Random number generation using `<stdlib.h>` and `<time.h>`.
* Interactive command-line prompts.
* Basic game loop with conditional feedback ("Too low!!" / "Too high!!").
* Attempt tracking.

## Prerequisites
To compile and run this program, you need a C compiler installed on your system (e.g., GCC).

## How to Compile and Run

1. Clone the repository or download the source code file.
2. Open your terminal and navigate to the directory containing the file.
3. Compile the code using GCC:
```bash
   gcc "Number Guessing Game.c" -o guess_game
