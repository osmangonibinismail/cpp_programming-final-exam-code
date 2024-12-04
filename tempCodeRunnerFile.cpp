#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;

    Student(string nm, int c, char s, int id, int math, int eng)
        : name(nm), cls(c), section(s), id(id), math_marks(math), eng_marks(eng) {
            total_marks = math_marks + eng_marks;
        }
};

bool cmp(const Student& a, const Student& b) {
    if (a.total_marks != b.total_marks) {
        return a.total_marks > b.total_marks;
    }
    return a.id < b.id;
}

int main() {
    int N;
    cin >> N;

    vector<Student> students;

    for (int i = 0; i < N; i++) {
        string name;
        int cls, id, math_marks, eng_marks;
        char section;
        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
        students.push_back(Student(name, cls, section, id, math_marks, eng_marks));
    }

    sort(students.begin(), students.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
