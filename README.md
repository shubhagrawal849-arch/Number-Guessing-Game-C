# Number Guessing Game in C

A console-based Number Guessing Game developed in C for a 1st Semester B.Tech CSE (AI/DS) programming assignment.

## Project Overview
The program generates a random secret number between **1 and 50**. The player gets up to **7 attempts** to guess the number and receives hints (*"Try a higher number!"* or *"Try a lower number!"*) after each guess.

## Concepts Used
- Standard Input / Output (`printf`, `scanf`)
- Random Number Generation (`srand`, `rand`, `time`)
- Loops (`while`)
- Conditional Statements (`if`, `else if`, `else`) and `break`

## How to Compile and Run

### Using GCC (Command Prompt / Terminal)
```bash
gcc guess_game.c -o guess
.\guess.exe
