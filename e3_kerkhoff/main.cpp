#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

bool openFileForRead(const string &file_name, ifstream &input_file_stream);

// Read a student's record from an input file (using its ifstream not its name).
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
bool readStudentRecord(ifstream &input_file_stream, int &studentID,
                       string &studentName, float studentRecord[],
                       const int recordSize);

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

// Return the student’s final average that needs to use the following equation:
// The final average = examAverage*0.5 + quizAverage*0.3 + assignmentAverage*0.2
// examAverage = The exam average [use examAverage as a helping function to
// calculate such an average]. (input)
// quizAverage = The quiz average [use quizAverage as a helping
// function to calculate such an average]. (input)
// assignmentAverage = The assignment average [use assignmentAverage as a helping
// function to calculate such an average]. (input)
float studentAverage(const float examAverage, const float quizAverage,
                     const float assignmentAverage);

// Return the student’s final grade that needs to use the following equation:
// A if score >= 90
// B if 90 > score >= 80
// C if 80 > score >= 70
// D if 70 > score >= 60
// F if score < 60
// score = The final score of the student [use the studentAverage to
// calculate it]. (input)
char studentGrade(const float score);


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
    ofstream fout(fileOut, ios::out);
    ifstream fin;

    if (openFileForRead(fileName, fin)) {
        int studentID;
        for (int i = 0; i < kStudentCount; ++i) {
            readStudentRecord(fin, studentID,
                              studentName[i],
                              studentRecord,
                              kRecordLength);

            exam1scores[i] = studentRecord[0];
            exam2scores[i] = studentRecord[1];
            exam3scores[i] = studentRecord[2];
            quiz1scores[i] = studentRecord[3];
            quiz2scores[i] = studentRecord[4];
            quiz3scores[i] = studentRecord[5];
            assignment1scores[i] = studentRecord[6];
            assignment2scores[i] = studentRecord[7];
            assignment3scores[i] = studentRecord[8];
            assignment4scores[i] = studentRecord[9];
            assignment5scores[i] = studentRecord[10];

            /*            fout << studentID << " " << studentName[i];
            for (int j = 0; j < kRecordLength; j++) {
            fout << " " << studentRecord[j];
            }
            fout << endl;*/
        }
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
             << setw(4) << "G" << endl;


        for (int j = 0; j < kStudentCount; ++j) {
            float examAvg = examAverage(j, exam1scores, exam2scores, exam3scores);
            float quizAvg = quizAverage(j, quiz1scores, quiz2scores, quiz3scores);
            float assignmentAvg = assignmentAverage(j, assignment1scores, assignment2scores, assignment3scores,
                                                    assignment4scores,
                                                    assignment5scores);
            float studentAvg = studentAverage(examAvg, quizAvg, assignmentAvg);
            fout << setw(2) << j + 1
                 << setw(4) << studentName[j]
                 << setw(10) << exam1scores[j]
                 << setw(8) << exam2scores[j]
                 << setw(8) << exam3scores[j]
                 << setw(8) << quiz1scores[j]
                 << setw(8) << quiz2scores[j]
                 << setw(8) << quiz3scores[j]
                 << setw(8) << assignment1scores[j]
                 << setw(8) << assignment2scores[j]
                 << setw(8) << assignment3scores[j]
                 << setw(8) << assignment4scores[j]
                 << setw(8) << assignment5scores[j]
                 << setw(12) << examAvg
                 << setw(8) << quizAvg
                 << setw(8) << assignmentAvg
                 << setw(8) << studentAvg
                 << setw(4) << studentGrade(studentAvg)
                 << endl;

        }
    }
    system("PAUSE");
    return 0;
}

bool openFileForRead(const string &file_name, ifstream &input_file_stream) {
    input_file_stream.open(file_name, ifstream::in);
    return input_file_stream.is_open();
}

bool readStudentRecord(ifstream &fin, int &studentID,
                       string &studentName, float studentRecord[],
                       const int recordSize) {
    fin >> studentID;
    fin >> studentName;
    for (int i = 0; i < recordSize; ++i) {
        fin >> studentRecord[i];
    }

    return true;
}

float
examAverage(const int studentID, const float exam1scores[], const float exam2scores[], const float exam3scores[]) {
    float examAverage;
    examAverage =
            (exam1scores[studentID] +
             exam2scores[studentID] +
             exam3scores[studentID]) / 3;

    return examAverage;
}

float
quizAverage(const int studentID, const float quiz1scores[], const float quiz2scores[], const float quiz3scores[]) {
    float quizAverage =
            (quiz1scores[studentID] +
             quiz2scores[studentID] +
             quiz3scores[studentID]) / 3;

    return quizAverage;
}

float assignmentAverage(const int studentID, const float assignment1scores[], const float assignment2scores[],
                        const float assignment3scores[], const float assignment4scores[],
                        const float assignment5scores[]) {
    float assignmentAverage =
            (assignment1scores[studentID] +
             assignment2scores[studentID] +
             assignment3scores[studentID] +
             assignment4scores[studentID] +
             assignment5scores[studentID]) / 5;

    return assignmentAverage;
}

float studentAverage(const float examAverage, const float quizAverage, const float assignmentAverage) {
    float studentAverage =
            (examAverage * 0.5) +
            (quizAverage * 0.3) +
            (assignmentAverage * 0.2);

    return studentAverage;
}

char studentGrade(const float score) {
    char studentGrade;

    if (score >= 90) {
        studentGrade = 'A';
    }
    else if (score >= 80) {
        studentGrade = 'B';
    }
    else if (score >= 70) {
        studentGrade = 'C';
    }
    else if (score >= 60) {
        studentGrade = 'D';
    }
    else {
        studentGrade = 'F';
    }

    return studentGrade;
}