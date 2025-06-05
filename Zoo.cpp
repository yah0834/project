#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 기본 클래스: Animal
class Animal {
public:
    // 순수가상 함수
    virtual void makeSound() = 0;
};

// 파생 클래스: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "댕댕이:아오오오옹오오오오옹! " << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "고영희: 캬야야야야아아악!" << endl;
    }
};

// 파생 클래스: Cow
class Cow : public Animal {
public:
    void makeSound() {
        cout << "흑우: 흑우우우우!" << endl;
    }
};
int main() {
    // Animal 타입 포인터로 다양한 객체를 가리킴
    Animal* myAnimal;
    Dog myDog;
    Cat myCat;
    Cow myCow;

    // Dog 객체 가리키기
    myAnimal = &myDog;
    myAnimal->makeSound();  // Dog의 makeSound() 호출

    // Cat 객체 가리키기
    myAnimal = &myCat;
    myAnimal->makeSound();  // Cat의 makeSound() 호출

    // Cow 객체 가리키기
    myAnimal = &myCow;
    myAnimal->makeSound();  // Cow의 makeSound() 호출

    return 0;
}
