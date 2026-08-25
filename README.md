# CodeAlpha Login and Registration System

## About the Project

This project is a console-based Login and Registration System developed in C++ as part of the CodeAlpha C++ Programming Internship.

The program allows users to register with a username and password, stores the credentials in a file, and verifies the credentials during login.

## Features

- User registration
- Username and password validation
- Duplicate username checking
- File-based credential storage
- User login authentication
- Success and error messages
- Simple menu-driven console interface

## Technologies Used

- C++
- C++ Standard Library
- File Handling

## How It Works

### Registration

1. The user selects the Register option.
2. The program takes a username and password.
3. The username and password are validated.
4. The program checks whether the username already exists.
5. If the username is available, the credentials are stored in a file.
6. A registration success message is displayed.

### Login

1. The user selects the Login option.
2. The program asks for the username and password.
3. The stored credentials are read from the file.
4. The entered credentials are verified.
5. A success or error message is displayed.

## How to Run

1. Download or clone this repository.
2. Open `main.cpp` in a C++ compiler or IDE.
3. Compile and run the program.
4. Select Register to create a new account.
5. Select Login to authenticate an existing account.
6. Select Exit to close the program.

## Project Files

- `main.cpp` — Source code of the Login and Registration System
- `users.txt` — File used to store user credentials
- `output.png` — Sample output of the program

## Internship

This project was completed as Task 2 of the CodeAlpha C++ Programming Internship.
