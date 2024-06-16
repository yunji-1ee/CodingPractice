#include <iostream>
#include <queue>

using namespace std;

struct s_record
{
    int StudentId;
    string name;
    double score;
};

int main()
{

    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);

    cout << "front: " << q1.front() << endl;
    cout << "rear: " << q1.back() << endl;
    cout << "size: " << q1.size() << endl;
    cout << " " << endl;

    q1.pop();

    cout << "front: " << q1.front() << endl;
    cout << "rear: " << q1.back() << endl;
    cout << "size: " << q1.size() << endl;

    queue<s_record> q2;

    s_record st1 = {22100549, "yunji", 99.9};
    s_record st2 = {21800123, "creation", 98.9};
    s_record st3 = {22200560, "LEE", 98.0};

    q2.push(st1);
    q2.push(st2);
    q2.push(st3);

    cout << "size: " << q2.size() << endl;
    cout << "front: " << q2.front().name 
    << q2.front().score << endl;
    q2.pop();
    cout << "front: " << q2.front().name 
    << q2.front().score << endl;
    cout << "size: " << q2.size() << endl;

    return 0;
}