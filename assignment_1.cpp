//Required header files for system/shell commands, input output streaming, and string header file
#include <cstdlib>      
#include <iostream>
#include <string>

//function to list the directories in current path
void listDirectoryContent() {     
    int output = system("ls");    //system function with ls command to list directories
    if (output == -1)
        std::cerr << "List directory command execution failed" << std::endl;  //error message if command fails
    else
        std::cout << "List directory command executed successfully" << std::endl; //command success message
}

//function to print the name of current directory
void printWorkingDirectory() {    
    int output = system("pwd");   //system function with pwd command to print name of working directory
    if (output == -1)
        std::cerr << "Print working directory command execution failed" << std::endl;   //error message if command fails
    else
        std::cout << "Print working directory command executed successfully" << std::endl;  //command success message
}

//function to create new directory in the working directory
void createNewDirectory() {     
    std::string directory_name;
    std::cout << "Enter directory name: " << std::endl;
    std::cin >> directory_name;       //user input directory name

    if (!directory_name.empty()) {
        std::string make_directory = "mkdir " + directory_name;     //using command function mkdir and the user provided name of folder
        int output = system(make_directory.c_str());      //.c_str() function enables conversion of c++ string to c-style string(for system execution)

        if (output == -1)
            std::cerr << "Make directory command execution failed" << std::endl;    //error message if command fails
        else
            std::cout << "Directory name: " << directory_name << " command executed successfully" << std::endl; //success message with directory name
    } else {
        std::cerr << "Directory name cannot be empty" << std::endl; //error message if no input
    }
}

//function to display message 
void displayMessage() {     
    std::string message;
    std::cout << "Enter message to display: ";    //user input message
    std::cin.ignore();    //remove undesired character from input buffer
    std::getline(std::cin, message);    //read the entire line
    std::string command = "echo " + message;    //system command echo and the message to display
    int output = system(command.c_str());   //converting c++ string to c-style string for system function execution

    if (output == -1)
        std::cerr << "Display message execution failed" << std::endl; //error message if command fails
}

//function to concatenate and display file content
void concatenateFile() {
    std::string file_path;
    std::cout << "Enter the file path to display: ";
    std::cin.ignore(); // remove undesired character from input buffer
    std::getline(std::cin, file_path); // read the entire file path

    if (!file_path.empty()) {
        std::string concatenate = "cat \"" + file_path + "\""; //string that has cat command and puts file path inside quotes
        int output = system(concatenate.c_str()); //converting c++ string to c-style string for system function execution

        if (output == -1)
            std::cerr << "File concatenation and display execution failed" << std::endl;  //error message if command fails
    } else
        std::cerr << "File path cannot be empty" << std::endl;  //error message if no file path input
}

//driver code
int main() {
    int input = 0; 
    while (input != 6) {  //loop until user exits
        std::cout << "System Menu: " << std::endl;    //system menu display
        std::cout << "1. List directory content" << std::endl;
        std::cout << "2. Print working directory" << std::endl;
        std::cout << "3. Create new directory" << std::endl;
        std::cout << "4. Display a message" << std::endl;
        std::cout << "5. Concatenate and display content of a file" << std::endl;
        std::cout << "6. Exit" << std::endl;

        std::cout << "Input number: ";  
        std::cin >> input;

        if (input == 1)     //if else condition for each input for corresponding menu list
            listDirectoryContent();
        else if (input == 2)
            printWorkingDirectory();
        else if (input == 3)
            createNewDirectory();
        else if (input == 4)
            displayMessage();
        else if (input == 5)
            concatenateFile();
        else if (input == 6)
            break;
        else
            std::cerr << "Error; Enter valid number: ";   //error message for invalid number
    }

    return 0;
}
