# CS540_shell_commands

CS540 Programming Assignment 1: Implementing Basic Shell Commands

## Brief Description

This program is written in C++ and implements basic shell commands using shell/system functions. The implemented shell commands are:

- ls: List directory content
- pwd: Print working directory
- mkdir: Make new directory
- echo: Display message
- cat: Concatenate and display content of a file

## Layout

The program consists of a function for each shell command and a main function that acts as a driver code to call the command functions.

## Driver Code

The driver code displays a system menu with 6 options. Users are given the option to use any of the shell commands or exit the menu. The system menu is displayed each time a shell command executes until the user exits.

## Functions

### list_directory_content_function

Displays files and folders (directories) of the current working directory in the terminal.

### print_working_directory_function

Displays the file path of the working directory in the terminal.

### make_new_directory_function

Prompts the user to input a name to create a new directory. The provided name is used to create a new directory in the working folder.

### display_message_function

Prompts the user to input a message. The provided message is then displayed in the terminal.

### concatenate_and_display_content_of_file_function

Prompts the user to input the file path of the file for which they want to display the content. The content of the file is then displayed in the terminal.

## Usage Instruction
- Compilation: Compile the program using a C++ program.
- Execution: Execute the compiled program.
- Interaction: Follow prompt on screen to choose a shell program and interact with it.

## Error Handling
The program includes error handling for failure in command execution. If a command execution fails, an error message is displayed to the user.
