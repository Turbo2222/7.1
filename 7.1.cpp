#include <iostream>
#define   MODE 1
#define  add(int,a,b) a+b

#ifndef MODE 
#error "Необходимо определить MODE"
#endif 





int main() {
	setlocale(LC_ALL, "ru");
	int a = 0;
	int b = 0;

#if MODE==0
	std::cout << "Работаю в учебном режиме" << std::endl;
#elif MODE==1
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: " << std::endl;
	std::cin >> a;
	std::cout << "Введите число 2: " << std::endl;
	std::cin >> b;
	std::cout << "Результат сложения: " << add(int, a, b);
#elif MODE>1||MODE<0
	std::cout << "Неизвестный режим. Завершение работы.";
#endif

	return 0;
}