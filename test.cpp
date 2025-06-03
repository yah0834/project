#include <iostream>
using namespace std;

// 합계를 계산하는 함수

double calculateSum(double arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	return sum;
}

//평균을 계산하는 함수

double calculateAverage(double arr[], int size) {
	return calculateSum(arr, size) / size;
}

// 오름차순 정렬 (버블 정렬)

void sortAscending(double arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				//스왑
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//내림차순 정렬 (버블 정렬)
void sortDescending(double arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] < arr[j + 1]) {
				//스왑
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(double arr[], int size) {
	cout << "정렬된 배열: ";
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	const int size = 5;
	double score[size];

	cout << "첫번째 수: ";
	cin >> score[0];
	cout << "두번째 수: ";
	cin >> score[1];
	cout << "세번째 수: ";
	cin >> score[2];
	cout << "네번째 수: ";
	cin >> score[3];
	cout << "다섯번째 수: ";
	cin >> score[4];

	//정렬 방식 선택
	int sortOption;
	cout << "정렬 방식을 선택하세요 (1: 오름차순, 2: 내림차순):";
	cin >> sortOption;

	if(sortOption == 1) {
		sortAscending(score, size);
		cout << "오름차순 정렬 결과:" << endl;
	} else if (sortOption == 2) {
	 sortDescending(score, size);
	 cout << "내림차순 정렬 결과:" << endl;
	} else {
	 cout << "잘못된 입력입니다. 정렬하지 않습니다." << endl;
	}

	printArray(score, size);

	double tot = calculateSum(score, size);
	double avg = calculateAverage(score, size);

	cout << " 합계 : " << tot << endl;
	cout << " 평균 : " << avg << endl;

	return 0;

}