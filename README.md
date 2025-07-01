# FILE-MANAGEMENT-TOOL
COMPANY: CODTECH IT SOLUTIONS
NAME: SAGAR BHANDARI
INTERN ID: CT04DH388
DOMAIN: C++ PROGRAMMING
DURATION: 4 WEEKS
MENTOR: NEELA SANTOSH 
DESCRIPTION: As part of my internship assignment, I was tasked with creating a C++ program that demonstrates key file handling techniques, including reading, writing, and appending data to text files. The purpose of this task was to understand how C++ handles file input/output (I/O) operations, which is an essential part of real-world software development, especially when dealing with data persistence, logs, configuration files, or user-generated input.
The application I developed starts by prompting the user with a simple menu-driven interface, giving them options to:
Write data to a file (overwriting any existing content)
Append new data to an existing file without deleting old content
Read and display the contents of the file.
A key consideration during implementation was handling file opening errors gracefully. Before reading or writing, the program checks whether the file was successfully opened using conditions like if (!fileStream), which prevents unexpected crashes and helps the user understand what's going wrong.
Another improvement I added was using cin.ignore() before getline() to flush the input buffer. This ensures that no leftover newline characters interfere with user input—a subtle detail that can lead to bugs in C++ programs if not handled correctly
Although the assignment was primarily about understanding basic file operations, I wanted to give it a slightly more professional structure. I used clear function names, consistent indentation, and inline comments where necessary. I also made sure to use const string& as parameters to avoid unnecessary copying of data, which is a good practice in C++ programming.
Through this task, I not only reinforced my understanding of how file streams work in C++, but also how important it is to write clean, readable, and maintainable code—even for something as basic as file I/O. This exercise served as a strong foundation for more advanced tasks involving data manipulation, logging mechanisms, and even binary file operations, which are common in real-world software systems.
Overall, this task gave me valuable hands-on experience with one of the fundamental concepts in programming—file management. It helped me grasp the importance of precision, input handling, error checking, and user interaction, all while applying them through proper coding practices in C++. I now feel more confident about using file handling techniques in future development tasks or when building data-driven applications in C++.
