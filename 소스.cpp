#include <iostream>
using namespace std;

int sum(int arr[], int ����)
{
    int s = 0;
    for (int i = 0; i < ����; i++)
    {
        s += arr[i];
    };
    return s;
};

int average(int arr[], int ����) 
{
    int s = 0;
    for (int i = 0; i < ����; i++)
    {
        s += arr[i];
    };
    return s / ����;
};

int main() {
    int nums[5];
    for (int i = 0; i < 5; i++) {
        std::cout << i+1 << "��° ���ڸ� �Է����ּ���.";
        std::cin >> nums[i];
    }
    int s = sum(nums, 5);
    double a = average(nums, 5);
    std::cout << "�հ�: " << s << std::endl;
    std::cout << "���: " << a << std::endl;

    return 0;
}
