#include <iostream>
#include <string>
using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     cin.ignore();

//     while (T--) {
//         string S, X;
//         cin >> S >> X;

//         size_t pos = 0;
//         while ((pos = S.find(X, pos)) != string::npos) {
//             S.replace(pos, X.length(), "#");
//             pos += 1;
//         }

//         cout << S << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;

// int main() {
//     string S;
//     getline(cin, S);

//     stringstream ss(S);
//     string word;

//     bool found = false;

//     while (ss >> word) {
//         if (word == "Jessica") {
//             found = true;
//             break;
//         }
//     }

//     if (found) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int cls;
//     char section;
//     int id;
// };

// int main() {
//     int N;
//     cin >> N;

//     Student students[100];

//     for (int i = 0; i < N; i++) {
//         cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
//     }

//     for (int i = 0; i < N / 2; i++) {
//         swap(students[i].section, students[N - i - 1].section);
//     }

//     for (int i = 0; i < N; i++) {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// struct Student {
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math_marks;
//     int eng_marks;
//     int total_marks;

//     Student(string nm, int c, char s, int id, int math, int eng)
//         : name(nm), cls(c), section(s), id(id), math_marks(math), eng_marks(eng) {
//             total_marks = math_marks + eng_marks;
//         }
// };

// bool cmp(const Student& a, const Student& b) {
//     if (a.total_marks != b.total_marks) {
//         return a.total_marks > b.total_marks;
//     }
//     return a.id < b.id;
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<Student> students;

//     for (int i = 0; i < N; i++) {
//         string name;
//         int cls, id, math_marks, eng_marks;
//         char section;
//         cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
//         students.push_back(Student(name, cls, section, id, math_marks, eng_marks));
//     }

//     sort(students.begin(), students.end(), cmp);

//     for (int i = 0; i < N; i++) {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
//              << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

    Student(string nm, int c, char s, int i, int math, int eng)
        : name(nm), cls(c), section(s), id(i), math_marks(math), eng_marks(eng) {}
};

bool cmp(const Student& a, const Student& b) {
    if (a.eng_marks != b.eng_marks) {
        return a.eng_marks > b.eng_marks;
    }
    if (a.math_marks != b.math_marks) {
        return a.math_marks > b.math_marks;
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
        students.emplace_back(name, cls, section, id, math_marks, eng_marks);
    }

    sort(students.begin(), students.end(), cmp);

    for (const auto& student : students) {
        cout << student.name << " " << student.cls << " " << student.section << " "
             << student.id << " " << student.math_marks << " " << student.eng_marks << endl;
    }

    return 0;
}




