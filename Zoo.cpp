#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// �⺻ Ŭ����: Animal
class Animal {
public:
    // �������� �Լ�
    virtual void makeSound() = 0;
};

// �Ļ� Ŭ����: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "�����:�ƿ������˿���������! " << endl;
    }
};

// �Ļ� Ŭ����: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "����: ļ�߾߾߾߾ƾƾ�!" << endl;
    }
};

// �Ļ� Ŭ����: Cow
class Cow : public Animal {
public:
    void makeSound() {
        cout << "���: ������!" << endl;
    }
};
int main() {
    // Animal Ÿ�� �����ͷ� �پ��� ��ü�� ����Ŵ
    Animal* myAnimal;
    Dog myDog;
    Cat myCat;
    Cow myCow;

    // Dog ��ü ����Ű��
    myAnimal = &myDog;
    myAnimal->makeSound();  // Dog�� makeSound() ȣ��

    // Cat ��ü ����Ű��
    myAnimal = &myCat;
    myAnimal->makeSound();  // Cat�� makeSound() ȣ��

    // Cow ��ü ����Ű��
    myAnimal = &myCow;
    myAnimal->makeSound();  // Cow�� makeSound() ȣ��

    return 0;
}
