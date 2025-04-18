 (LAB 1) PROGRAMMING HOMEWORK 

#include <iostream>
#include <string>
#include <list>

struct Number {

	std::string NumCall;
	int Num1;
	std::string NumCall2;
	double Num2;

};

void AddBeg() {
	std::list<int> num = { 1, 2, 3, 4, 5 };
	num.push_front(0);
};

void AddEnd() {
	std::list<int> num = { 1, 2, 3, 4, 5 };
	num.push_back(4);
};

void AddAft() {
	std::list<int> num = { 1, 2, 3, 4, 5 };
};

void AddBef() {
	std::list<int> num = { 1, 2, 3, 4, 5 };
};


int main() {
	Number ThisNum;
	std::list<int> num = { 1, 2, 3, 4, 5 };
	
    void Display(); {
		std::list<int> num = { 1, 2, 3, 4, 5 };
		for (int num : num)
			std::cout << num << " , ";
        std::cout << "\n";
	};




	ThisNum.NumCall = "Natural Numbers";
	ThisNum.Num1 = 10267;

	ThisNum.NumCall2 = "Rational Numbers";
	ThisNum.Num2 = 1024.9999;

	std::cout << ThisNum.NumCall + " : " << ThisNum.Num1 << std::endl;
	std::cout << ThisNum.NumCall2 + " : " << ThisNum.Num2 << std::endl;

};

