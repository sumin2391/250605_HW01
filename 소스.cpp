#include <iostream>
using namespace std;

double �հ���(double �迭[], int ũ��) {
    double �� = 0;
    for (int i = 0; i < ũ��; i++) {
        �� += �迭[i];
    }
    return ��;
}

double ��հ��(double �迭[], int ũ��) {
    if (ũ�� == 0) return 0;
    double �� = �հ���(�迭, ũ��);
    return �� / ũ��;
}

int main() {
    const int ���� = 5;
    double ���ڵ�[����];

    cout << "5���� ���ڸ� �Է��ϼ���:" << endl;
    for (int i = 0; i < ����; i++) {
        cout << (i + 1) << "��° ����: ";
        cin >> ���ڵ�[i];
    }

    cout << "\n�Էµ� �迭: [";
    for (int i = 0; i < ����; i++) {
        cout << ���ڵ�[i];
        if (i < ���� - 1) cout << ", ";
    }
    cout << "]" << endl;

    double �����հ� = 0;
    for (int i = 0; i < ����; i++) {
        �����հ� += ���ڵ�[i];
    }
    double ������� = �����հ� / ����;

    cout << "�հ�: " << �����հ� << endl;
    cout << "���: " << ������� << endl;

    double �Լ��հ� = �հ���(���ڵ�, ����);
    double �Լ���� = ��հ��(���ڵ�, ����);

    cout << "�հ� �Լ� ���: " << �Լ��հ� << endl;
    cout << "��� �Լ� ���: " << �Լ���� << endl;

    return 0;
}