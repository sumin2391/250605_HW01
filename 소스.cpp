#include <iostream>
using namespace std;

int sum(int arr[], int 숫자)
{
    int s = 0;
    for (int i = 0; i < 숫자; i++)
    {
        s += arr[i];
    };
    return s;
};

int average(int arr[], int 숫자) 
{
    int s = 0;
    for (int i = 0; i < 숫자; i++)
    {
        s += arr[i];
    };
    return s / 숫자;
};

int main() {
    int nums[5];
    for (int i = 0; i < 5; i++) {
        std::cout << i+1 << "번째 숫자를 입력해주세요.";
        std::cin >> nums[i];
    }
    int s = sum(nums, 5);
    double a = average(nums, 5);
    std::cout << "합계: " << s << std::endl;
    std::cout << "평균: " << a << std::endl;

    return 0;
}
