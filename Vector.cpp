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
	cout << myVector.size() << endl;  // ��������� ������  �������
	vector <int> myVector2 = { 54465,44545,545,54555 };//����� ����� ����������������!
	for (int i = 0; i < myVector.size();  i++)
	{
		cout << myVector[i] << endl;

	}
	//cout << myVector.at(2) << endl; /// ������ �� ������� +  ��������  ������ �������// �������� �������� []

  //	myVector.clear(); // ������� ������ �� 0  
	myVector.pop_back();// �������  ��������� ������� 
	myVector.reserve(100);// �����������  ������  ���  ��������� ���������� ���������
	cout << myVector.capacity() << endl;/// �����  ��� ����������  ������ ��� ������(�����)
	myVector.shrink_to_fit();//// ��������� �������� ��  ��������� ���������� ��������
	cout << myVector.capacity() << endl;/// �����  ��� ����������  ������ ��� ������(�����)
	vector<int> myVector3(20); //�������� ���� ������� ������ ������� 
	vector<int> myVector3(20,55); //20 �������� �� ��������� 55!
	cout << myVector3.empty(); ///  bool true - ��������� ��� !
	myVector3.resize(20,20); //  �������  ������  20 �������� ���������  20 
 /////////////
	
*/
	/// ���������
	//int arr[] = { 2,6,9 };
	//cout << arr[1] << endl;

	//cout << *(arr + 1) << endl; //  ������  ������� ��������  + 1


	vector<int> vectorC = { 1,9,44,422,676,78 };
	vector<int>::iterator it;   // �������� ���������
	it = vectorC.begin(); /// begin  ��������  ��   ������  �������   ������� 
	*it = 1000; //  ��������  �������� 
	it+=2; // ��������� ��������������� 
	it--;
	for (vector<int>:: iterator i =vectorC.begin(); i != vectorC.end(); i++)//const_iterator �����  ��������� ����������� ��������
	{// cend  �  cbegin /// ��������� ����������� ��������  
		cout << *i << endl;
	}
	// ������������ �  ����� ���������� 
	for (vector<int>::reverse_iterator i = vectorC.rbegin(); i != vectorC.rend(); i++)//const_iterator �����  ��������� ����������� ��������
	{// cend  �  cbegin /// ��������� ����������� ��������  
		cout << *i << endl;
	}
	vector<int> vectorD = { 1,9,44,445,676,78 };
	vector<int> ::iterator di = vectorD.begin();
	//cout << *(di+3) << endl;
	advance(di, 3);  //�������� �������� �� ������������ ��������� ��������� 
    
	vectorD.insert(di, 999); ///  ��������� "999" ��  ������� ��������� 
	
	vector<int> ::iterator itErase = vectorD.begin();
	itErase++; //  ������� ���������  ������� ������� 
	vectorD.erase(itErase); // vectorD.erase(itErase,itErase+ 3 );// ������� � ������� �� 3���  ������� �������
	for (vector<int>:: iterator i= vectorD.begin(); i !=vectorD.end(); i++)
	{
		cout << *i << endl;

	}