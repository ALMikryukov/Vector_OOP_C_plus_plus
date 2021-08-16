#include<iostream>
#include<vector>
using namespace std;


int main() {

	setlocale(LC_ALL, "ru_RU");

	/*
	vector <int> myVector;
	myVector.push_back(2);
	myVector.push_back(44);
	myVector.push_back(77);

	myVector[0] = 1000;
	cout << myVector.size() << endl;  // возращает размер  массива
	vector <int> myVector2 = { 54465,44545,545,54555 };//можно сразу инициализировать!
	for (int i = 0; i < myVector.size();  i++)
	{
		cout << myVector[i] << endl;

	}
	//cout << myVector.at(2) << endl; /// доступ по индексу +  проверка  границ массива// работает медленее []

  //	myVector.clear(); // очищает вектор до 0  
	myVector.pop_back();// удаляет  последние элемент 
	myVector.reserve(100);// резервирует  память  для  заданного колечества элементов
	cout << myVector.capacity() << endl;/// обьем  уже выделенной  помяти под массив(запас)
	myVector.shrink_to_fit();//// уменьшает капасити до  реального количества элемнтов
	cout << myVector.capacity() << endl;/// обьем  уже выделенной  помяти под массив(запас)
	vector<int> myVector3(20); //возможно явно указать размер Вектора 
	vector<int> myVector3(20,55); //20 векторов со значением 55!
	cout << myVector3.empty(); ///  bool true - элементов нет !
	myVector3.resize(20,20); //  заменит  первые  20 векторов значением  20 
 /////////////
	
*/
	/// итераторы
	//int arr[] = { 2,6,9 };
	//cout << arr[1] << endl;

	//cout << *(arr + 1) << endl; //  адресс  первого элемента  + 1


	vector<int> vectorC = { 1,9,44,422,676,78 };
	vector<int>::iterator it;   // создание итератора
	it = vectorC.begin(); /// begin  указвает  на   первый  элемент   массива 
	*it = 1000; //  присваем  значение 
	it+=2; // итареторы инкрментируются 
	it--;
	for (vector<int>:: iterator i =vectorC.begin(); i != vectorC.end(); i++)//const_iterator можно  поставить константный итератор
	{// cend  и  cbegin /// возращают константные значения  
		cout << *i << endl;
	}
	// итерирование с  конца коллексции 
	for (vector<int>::reverse_iterator i = vectorC.rbegin(); i != vectorC.rend(); i++)//const_iterator можно  поставить константный итератор
	{// cend  и  cbegin /// возращают константные значения  
		cout << *i << endl;
	}
	vector<int> vectorD = { 1,9,44,445,676,78 };
	vector<int> ::iterator di = vectorD.begin();
	//cout << *(di+3) << endl;
	advance(di, 3);  //сдвигает итератор на определенное количесво элементов 
    
	vectorD.insert(di, 999); ///  вставляем "999" по  индексу итератора 
	
	vector<int> ::iterator itErase = vectorD.begin();
	itErase++; //  удалить следующий  элемент вектора 
	vectorD.erase(itErase); // vectorD.erase(itErase,itErase+ 3 );// удалить с первого по 3тий  элемент вектора
	for (vector<int>:: iterator i= vectorD.begin(); i !=vectorD.end(); i++)
	{
		cout << *i << endl;

	}