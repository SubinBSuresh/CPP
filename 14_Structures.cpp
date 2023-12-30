#include <iostream>

int main()
{
    struct StudentDetails
    {
        int studentId;
        std::string studentName;
        std::string studentNumber;
        std::string studentEmail;
    };

    StudentDetails student1;
    student1.studentId = 1;
    student1.studentName = "Max";
    student1.studentNumber = "1234";
    student1.studentEmail = "qwerty";

    StudentDetails student2 = {2,
                               "Roy",
                               "1234",
                               "qwerty"};

    // unnamed struct
    struct
    {
        int id;
        std::string name;
    } student3, student4;

    return 0;
}
