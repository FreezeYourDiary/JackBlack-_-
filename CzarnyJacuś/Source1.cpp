//Сформувати масив В(k), записавши в нього кожен другий елемент масиву А(N).Обчислити середнє арифметичне від'ємних елементів масивів А і B. З масиву 
//В видалити другий, п'ятий і шостий елементи(передбачити випадок, що елементів може бути в масиві менше).У програмі написати функції : формування масиву В, 
//видалення елемента, визначення середнього арифметичного від'ємних елементів
#include <iostream>
#include <ctime>
void Copy(int* copy, int* paste, int k);

int main() {


	const int k = 6;
	
	int* B;
	B = new int[k/2];

	int* A = new int[k];
	for (int i = 0; i < k; i++)
		A[i] = rand() % 50;

	Copy(A, B, k);

	for (int i = 0; i < k; i++)
		std::cout << "A: " << A[i] <<"\n";
	for (int i = 0; i < k/2; i++)
		std::cout << "B: " << B[i] << "\n";
}

void Copy(int* copy, int* paste, int k)
{
	
	for (int i = 0; i < k; i += 2 ) {
		copy[i] = paste[i];
	}

}
