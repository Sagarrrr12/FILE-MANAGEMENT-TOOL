#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Function for writting data to a file
void writeToFile(const string& filename) {
    ofstream outFile(filename);  // it will be opened in write mode by default
    if (!outFile) {
        cerr << "Error: Unable to open file for writing."<<endl;
        return;
    }
    string data;
    cout << "Enter content to write into the file:"<<endl;
    cin.ignore();  // input buffer is clear
    getline(cin, data);
    outFile << data << endl;
    outFile.close();
    cout << "Data written successfully.";
}
// function to append data to a file
void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app);  // it will be opened in the append mode
    if (!outFile) {
        cerr << "Error: Unable to open file for appending."<<endl;
        return;
    }
    string data;
    cout << "Enter content to append into the file:"<<endl;
    cin.ignore();
    getline(cin, data);
    outFile << data << endl;
    outFile.close();
    cout << "Data appended successfully."<<endl;
}
// function to read and display the file contents
void readFromFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Unable to open file for reading."<<endl;
        return;
    }
    string line;
    cout << "\n--- File Content ---"<<endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    cout << "---------------------"<<endl;
    inFile.close();
}

int main() {
    string filename;
    cout<<"enter the filename (eg. sagar.txt etc)"<<endl;
    cin>>filename;
    int choice;
    do {
        cout << "\n===== File Handling Menu ====="<<endl;
        cout << "1. Write to file (Overwrite)"<<endl;
        cout << "2. Append to file"<<endl;
        cout << "3. Read from file"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Shutting down the program."<<endl;
                break;
            default:
                cout << "Invalid choice. Please select between 1 and 4."<<endl;
        }
    } while (choice != 4);

    return 0;
}
