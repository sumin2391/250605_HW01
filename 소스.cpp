#include <iostream>
using namespace std;

double 합계계산(double 배열[], int 크기) {
    double 합 = 0;
    for (int i = 0; i < 크기; i++) {
        합 += 배열[i];
    }
    return 합;
}

double 평균계산(double 배열[], int 크기) {
    if (크기 == 0) return 0;
    double 합 = 합계계산(배열, 크기);
    return 합 / 크기;
}

int main() {
    const int 개수 = 5;
    double 숫자들[개수];

    cout << "5개의 숫자를 입력하세요:" << endl;
    for (int i = 0; i < 개수; i++) {
        cout << (i + 1) << "번째 숫자: ";
        cin >> 숫자들[i];
    }

    cout << "\n입력된 배열: [";
    for (int i = 0; i < 개수; i++) {
        cout << 숫자들[i];
        if (i < 개수 - 1) cout << ", ";
    }
    cout << "]" << endl;

    double 직접합계 = 0;
    for (int i = 0; i < 개수; i++) {
        직접합계 += 숫자들[i];
    }
    double 직접평균 = 직접합계 / 개수;

    cout << "합계: " << 직접합계 << endl;
    cout << "평균: " << 직접평균 << endl;

    double 함수합계 = 합계계산(숫자들, 개수);
    double 함수평균 = 평균계산(숫자들, 개수);

    cout << "합계 함수 결과: " << 함수합계 << endl;
    cout << "평균 함수 결과: " << 함수평균 << endl;

    return 0;
}