
#include <iostream>
using namespace std;

// 숫자 n을 입력받고, n개의 숫자를 입력받아 오름자순으로 정력하여 출력하기

//결국 버블솔트로 해버림..


int main()
{
    int n;
    int i, j; // 반복문을 위한 변수
    int temp = 0;

    cin >> n;
    int *arr = new int[n]();

    for (i = 0; i < n; i++) // 몇 번 입력을 받을건지
    {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++) // 배열 정렬
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) // 출력
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}