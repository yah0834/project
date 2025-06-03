#include <iostream>
using namespace std;

// �հ踦 ����ϴ� �Լ�

double calculateSum(double arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	return sum;
}

//����� ����ϴ� �Լ�

double calculateAverage(double arr[], int size) {
	return calculateSum(arr, size) / size;
}

// �������� ���� (���� ����)

void sortAscending(double arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				//����
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//�������� ���� (���� ����)
void sortDescending(double arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] < arr[j + 1]) {
				//����
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(double arr[], int size) {
	cout << "���ĵ� �迭: ";
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	const int size = 5;
	double score[size];

	cout << "ù��° ��: ";
	cin >> score[0];
	cout << "�ι�° ��: ";
	cin >> score[1];
	cout << "����° ��: ";
	cin >> score[2];
	cout << "�׹�° ��: ";
	cin >> score[3];
	cout << "�ټ���° ��: ";
	cin >> score[4];

	//���� ��� ����
	int sortOption;
	cout << "���� ����� �����ϼ��� (1: ��������, 2: ��������):";
	cin >> sortOption;

	if(sortOption == 1) {
		sortAscending(score, size);
		cout << "�������� ���� ���:" << endl;
	} else if (sortOption == 2) {
	 sortDescending(score, size);
	 cout << "�������� ���� ���:" << endl;
	} else {
	 cout << "�߸��� �Է��Դϴ�. �������� �ʽ��ϴ�." << endl;
	}

	printArray(score, size);

	double tot = calculateSum(score, size);
	double avg = calculateAverage(score, size);

	cout << " �հ� : " << tot << endl;
	cout << " ��� : " << avg << endl;

	return 0;

}