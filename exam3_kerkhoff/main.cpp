#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Open an input file for read; receive two parameters and return true on
// success, otherwise false.
// file_name = the input file name (read only). (input).
// input_file_stream = the input file stream to open the file with (the function
// modifies it to be used later by the calling code).
// (output).
bool openFileForRead(const string &file_name, ifstream &input_file_stream);

// Read a student’s record from an input file (using its ifstream not its name).
// On success, it returns true; otherwise, false.
// input_file_stream = A strictly read only parameter used to read data from the
//                     input file (input).
// studentID         = The student ID to be read from the input file and returned
//                     back to the caller (output).
// studentName       = The student name as read from the input file (output).
// studentRecord     = The whole student record to hold exam, quiz, and
//                     assignment values (output). The function assumes that the
//                     total memory of the array has already been allocated by
//                     the calling process.
// recordSize        = The number of elements per record (input).
bool readStudentRecord(ifstream &input_file_stream, /*int &studentID,
                       string &studentName,*/ float studentRecord[],
                       const int recordSize);

// Return the average of the score whose values are stored in an array.
// scores = The array that holds the scores.
// arrayLength = The number of elements in the array (input).
float average(float scores[], const int arrayLength);

// Return the minimum score in an array.
// scores = The array that holds the scores.
// arrayLength = The number of elements in the array (input).
float minimumValue(float scores[], const int arrayLength);

// Return the maximum score in an array.
// scores = The array that holds the scores.
// arrayLength = The number of elements in the array (input).
float maximumValue(float scores[], const int arrayLength);

// Return the average of the exams of a given student.
// studentID = The student ID of interest [use as an index] (input).
// exam1scores = The scores of exam 1 for all students (input).
// exam2scores = The scores of exam 2 for all students (input).
// exam3scores = The scores of exam 3 for all students (input).
float examAverage(const int studentID, const float exam1scores[],
                  const float exam2scores[], const float exam3scores[]);

// Return the average of the quizzes of a given student.
// studentID = The student ID of interest [use as an index] (input).
// quiz1scores = The scores of quiz 1 for all students (input).
// quiz1scores = The scores of quiz 2 for all students (input).
// quiz1scores = The scores of quiz 3 for all students (input).
float quizAverage(const int studentID, const float quiz1scores[],
                  const float quiz2scores[], const float quiz3scores[]);

// Return the average of the assignments of a given student.
// studentID = The student ID of interest [use as an index] (input).
// assignment1scores = The scores of assignment 1 for all students (input).
// assignment2scores = The scores of assignment 2 for all students (input).
// assignment3scores = The scores of assignment 3 for all students (input).
// assignment4scores = The scores of assignment 4 for all students (input).
// assignment5scores = The scores of assignment 5 for all students (input).
float assignmentAverage(const int studentID,
                        const float assignment1scores[],
                        const float assignment2scores[],
                        const float assignment3scores[],
                        const float assignment4scores[],
                        const float assignment5scores[]);

void valueAssign(float studentRecord[],
                 float exam1scores[],
                 float exam2scores[],
                 float exam3scores[],
                 float quiz1scores[],
                 float quiz2scores[],
                 float quiz3scores[],
                 float assignment1scores[],
                 float assignment2scores[],
                 float assignment3scores[],
                 float assignment4scores[],
                 float assignment5scores[],
                 int kStudentCount,
                 int kRecordLength,
                 int studentID) {
    exam1scores[0]= studentRecord[0];
    exam2scores[0] = studentRecord[1];
    exam3scores[0] = studentRecord[2];
    quiz1scores[0] = studentRecord[3];
    quiz2scores[0] = studentRecord[4];
    quiz3scores[0] = studentRecord[5];
    assignment1scores[0] = studentRecord[6];
    assignment2scores[0] = studentRecord[7];
    assignment3scores[0] = studentRecord[8];;
    assignment4scores[0] = studentRecord[9];
    assignment5scores[0] = studentRecord[10];
}

void fileOutput(const string fileOut, int kStudentCount,
                float exam1scores[],
                float exam2scores[],
                float exam3scores[],
                float quiz1scores[],
                float quiz2scores[],
                float quiz3scores[],
                float assignment1scores[],
                float assignment2scores[],
                float assignment3scores[],
                float assignment4scores[],
                float assignment5scores[]) {
    ofstream fout(fileOut);
    fout << " #"
         << setw(6) << "Name"
         << setw(8) << "E 1"
         << setw(8) << "E 2"
         << setw(8) << "E 3"
         << setw(8) << "Q 1"
         << setw(8) << "Q 2"
         << setw(8) << "Q 3"
         << setw(8) << "A 1"
         << setw(8) << "A 2"
         << setw(8) << "A 3"
         << setw(8) << "A 4"
         << setw(8) << "A 5"
         << setw(12) << "E Avg"
         << setw(8) << "Q Avg"
         << setw(8) << "A Avg"
         << setw(8) << "T Avg"
         << setw(4) << "G" <<
         endl;
    for (int i = 0; i < 1; i++) {
        fout << setw(18) << exam1scores[0]
             << setw(8) << exam2scores[0]
             << setw(8) << exam3scores[0]
             << setw(8) << quiz1scores[0]
             << setw(8) << quiz2scores[0]
             << setw(8) << quiz3scores[0]
             << setw(8) << assignment1scores[0]
             << setw(8) << assignment2scores[0]
             << setw(8) << assignment3scores[0]
             << setw(8) << assignment4scores[0]
             << setw(8) << assignment5scores[0];
    }
}

int main() {
    const int kStudentCount = 20;
    const int kRecordLength = 11;
    string studentName[kStudentCount];
    float exam1scores[kStudentCount];
    float exam2scores[kStudentCount];
    float exam3scores[kStudentCount];
    float quiz1scores[kStudentCount];
    float quiz2scores[kStudentCount];
    float quiz3scores[kStudentCount];
    float assignment1scores[kStudentCount];
    float assignment2scores[kStudentCount];
    float assignment3scores[kStudentCount];
    float assignment4scores[kStudentCount];
    float assignment5scores[kStudentCount];
    float studentRecord[kRecordLength];


    const string fileName = "C:\\Users\\david\\Desktop\\ScoresE3.txt";
    const string fileOut = "C:\\Users\\david\\Desktop\\e3_out.txt";
    system("PAUSE");
    ifstream fin;
    float things;
    float things2;
    float things3;
    fin >> things;
    fin >> things2;
    fin >> things3;
    ofstream fout(fileOut);
    fout << "things" << endl;
    fout << things << endl << things2 << endl << things3;
    system("PAUSE");
    if (openFileForRead(fileName, fin)) {
        int studentID;
        for (int i = 0; i < kStudentCount; ++i) {
            readStudentRecord(fin,
                              studentRecord,
                              kRecordLength
            );
            cout << studentID << " " << studentName[i];
            for (int j = 0; j < kRecordLength; j++) {
                cout << " " << studentRecord[j];
            }
            cout << endl;
        }
    }

    for (int i = 0; i < kStudentCount; i++) {
        readStudentRecord(fin, studentRecord, kRecordLength);
        valueAssign(studentRecord,
                    exam1scores,
                    exam2scores,
                    exam3scores,
                    quiz1scores,
                    quiz2scores,
                    quiz3scores,
                    assignment1scores,
                    assignment2scores,
                    assignment3scores,
                    assignment4scores,
                    assignment5scores,
                    kStudentCount,
                    kRecordLength,
                    i);
    }
    fileOutput(fileOut, kStudentCount,
               exam1scores,
               exam2scores,
               exam3scores,
               quiz1scores,
               quiz2scores,
               quiz3scores,
               assignment1scores,
               assignment2scores,
               assignment3scores,
               assignment4scores,
               assignment5scores);

    //readStudentRecord(fin, studentRecord,kRecordLength);

    system("PAUSE");
    return 0;
}

bool openFileForRead(const string &file_name, ifstream &input_file_stream) {
    input_file_stream.open(file_name, ifstream::in);
    return input_file_stream.is_open();
}

bool readStudentRecord(ifstream &fin, float studentRecord[], const int recordSize) {
    const string fileOut = "C:\\Users\\david\\Desktop\\e3_out.txt";
    ofstream fout(fileOut, ios::out);
    int studentID;
    fin >> studentID;
    fout << studentID;
    char studentName;
    fin >> studentName;
    fout << studentName;

    for (int i = 0; i < recordSize; ++i) {
        fin >> studentRecord[i];
        fout << studentRecord[i];

    }
    return true;
}

