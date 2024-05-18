#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct Student {
    int roll;
    string name;
    string gender;
    int room;
};

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N, Q;
        cin >> N >> Q;

        // Data structure to store students by room number
        map<int, vector<Student>> studentsByRoom;

        // Reading student data
        for (int i = 0; i < N; ++i) {
            Student student;
            cin >> student.roll >> student.name >> student.room >> student.gender;
            studentsByRoom[student.room].push_back(student);
        }

        cout << "Case #" << t << ":" << endl;

        // Handling queries
        for (int i = 0; i < Q; ++i) {
            int roomNumber;
            cin >> roomNumber;
            cout << "Query #" << i + 1 << ":" << endl;
            
            // Retrieve the list of students in the specified room
            auto& studentsInRoom = studentsByRoom[roomNumber];
            
            // Sort the list of students by roll numbers
            sort(studentsInRoom.begin(), studentsInRoom.end(), [](const Student& a, const Student& b) {
                return a.roll < b.roll;
            });

            // Print students' data for that room
            if (studentsInRoom.empty()) {
                cout << "No Student" << endl;
            } else {
                for (const auto& student : studentsInRoom) {
                    cout << student.roll << " " << student.name << " " << student.gender << endl;
                }
            }
        }
    }

    return 0;
}
