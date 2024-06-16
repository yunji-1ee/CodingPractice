#include <iostream>
#include <stack>

using namespace std;

// 사용자 정의 구조체
struct s_record
{
    double score;
    int StudentId;
    string name;
};

int main()
{

    stack<int> s1; // 정수형 스택 생성

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout << "top :" << s1.top() << endl;

    s1.pop();
    cout << "top :" << s1.top() << endl;

    cout << " "
         << endl;
    stack<double> s2; // 실수형 스택 생성
    s2.push(1.1);
    s2.push(2.2);
    s2.push(3.3);

    cout << s2.top() << endl;
    s2.pop();
    cout << s2.top() << endl;
    cout << " "
         << endl;

    stack<s_record> s3; // 사용자정의 구조체형 스택 생성

    s_record st1 = {100.0, 22100549, "yunji"};
    s_record st2 = {99.5, 22200560, "park"};

    s3.push(st1);
    s3.push(st2);

    cout << s3.top().StudentId << " " <<
    s3.top().name << " " << s3.top().score << endl;

    s3.pop();

    cout << s3.top().StudentId << " " <<
     s3.top().name <<" " << s3.top().score << endl;

    cout << "\n"
         << endl;

    cout << s1.size() << " " << s2.size()
     << " " << s3.size() << endl;
    return 0;
}
