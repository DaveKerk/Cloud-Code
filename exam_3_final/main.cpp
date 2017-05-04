#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

bool openFileForRead(const string & file_name, ifstream & input_file_stream);

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
bool readStudentRecord(ifstream & input_file_stream, int & studentID,
                       string & studentName, float studentRecord[],
                       const int recordSize);
int main()
{
    const  int kStudentCount = 20;
    const  int kRecordLength = 11;
    string studentName[kStudentCount];
    float  exam1scores[kStudentCount];
    float  exam2scores[kStudentCount];
    float  exam3scores[kStudentCount];
    float  quiz1scores[kStudentCount];
    float  quiz2scores[kStudentCount];
    float  quiz3scores[kStudentCount];
    float  assignment1scores[kStudentCount];
    float  assignment2scores[kStudentCount];
    float  assignment3scores[kStudentCount];
    float  assignment4scores[kStudentCount];
    float  assignment5scores[kStudentCount];
    float  studentRecord[kRecordLength];
    const string fileName = "C:\\Users\\david\\Desktop\\ScoresE3.txt";
    const string fileOut = "C:\\Users\\david\\Desktop\\e3_out.txt";
    ofstream fout (fileOut, ios::out);
    ifstream fin;

    if (openFileForRead(fileName, fin))
    {
        int studentID;
        for (int i = 0; i < kStudentCount; ++i)
        {
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
            assignment3scores[i] = studentRecord[8];;
            assignment4scores[i] = studentRecord[9];
            assignment5scores[i] = studentRecord[10];

            fout << studentID << " " << studentName[i];
            for (int j = 0; j < kRecordLength; j++)
            {
                fout << " " << studentRecord[j];
            }
            fout << endl;
        }
    }

    system("PAUSE");
    return 0;
}

bool openFileForRead(const string & file_name, ifstream & input_file_stream)
{
    input_file_stream.open(file_name, ifstream::in);
    return input_file_stream.is_open();
}

bool readStudentRecord(ifstream & fin, int & studentID,
                       string & studentName, float studentRecord[],
                       const int recordSize)
{
    fin >> studentID;
    fin >> studentName;
    for (int i = 0; i < recordSize; ++i)
    {
        fin >> studentRecord[i];
    }

    return true;
}