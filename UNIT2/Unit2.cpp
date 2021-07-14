
#include <iostream>

//������������� ����������

unsigned int A = 4'294'967'294;
char C = 'F';
bool B = true;
float D = 3.14f;
//-------------------------------------------------------------------------------------------------------------------------
//�������� sizeof
//-------------------------------------------------------------------------------------------------------------------------

int main_sizeof()
{
	bool flag = false;
	long long VeryLongVar = 1'000'000'000'000;
	double pi = 3.14;
	std::cout << sizeof(flag) << " " << sizeof(VeryLongVar) << " " << sizeof(pi) << std::endl;
	return 0;
}


//-------------------------------------------------------------------------------------------------------------------------
//������� ��������� ����������
//-------------------------------------------------------------------------------------------------------------------------

/*
int a = 100;//���������� ����������

int main()
{
	
	short int b = 255; // ��������� ����������, ��������� � �����
	std::cout << a << " " << b;
	return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//�������� ���������� ������� ��������� � ����� ��������� � �������
//-------------------------------------------------------------------------------------------------------------------------

/*
double var = 8.888; 
int main() {
	setlocale(LC_ALL, "Russian");    // ���������� ������� ���� � �������
	int var = 1555;std::cout << "��������� ����������: " << var << " ���������� ����������: " << ::var;
	return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//������� � �++
//-------------------------------------------------------------------------------------------------------------------------

/*
char Name[] = { 'J', 'o', 'n', '\0' };                                // \0 - ������ ����� ������ � �++
char Name2 [ ] = "Jon\0";                                           // ������ ��� ���� ������ ��������

int main()
{
std::cout << Name << " " << Name2 << std::endl;    // ������� �� �����: Jon Jon

Name[0] = 'D';
Name2[1] = 'a';

std::cout << Name << " " << Name2 << std::endl;    // ������� �� �����: Don Jan
}
*/


//-------------------------------------------------------------------------------------------------------------------------
//���� ���������� � ���������� � ������ cin
//-------------------------------------------------------------------------------------------------------------------------

/*
using namespace std; // ���������� ������������ ���� std �� ���� �����
int main() 
{
	cout << "Enter your name: ";
	char name [ ] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	cin >> name;                                                               // ������������ ������ ���� ���
	
	cout << "Enter your age: ";
	unsigned int age = 0;
	cin >> age;                                                                 // ������������ ������ ���� �������
	
	cout << "Hi, " << name << "_" << age << endl;
	return 0;
}*/

//-------------------------------------------------------------------------------------------------------------------------
//������ �� enum
//-------------------------------------------------------------------------------------------------------------------------

// ������������ - ��� ������
/*
enum Week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };

int main()
{
	Week work_days[4] = { Mon, Wed, Fri, Sat };
	Week holi_days[3] = { Tue, Thu, Sun };// �������� � ������ ���������
	std::cout <<"First work day: "<< work_days[0] << std::endl;
	std::cout <<"First holiday: "<< holi_days[0] << std::endl;
	work_days[0] = Sun;
	holi_days[2] = Mon;
	return 0;
}*/

//-------------------------------------------------------------------------------------------------------------------------
//��������� � �++
//-------------------------------------------------------------------------------------------------------------------------
/*
struct Employee   // ����� ��� ������ ���������
{
	long id;                        // ID ����������
	unsigned short age;    // ��� �������
	double salary;             // ��� ��������
};

int main()
{
	Employee e1, e2;
	e1.id = 125037;
	e1.age = 31;
	e1.salary = 120'000.0;
	e2 = { 125038, 28, 75'000.0 };
	return 0;
}*/

//-------------------------------------------------------------------------------------------------------------------------
//����� ������� ���������
//-------------------------------------------------------------------------------------------------------------------------

/*
struct Employee             // ����� ��� ������ ���������
{  
	long id;                        // ID ����������
    unsigned short age;    // ��� �������
	double salary;             // ��� ��������
};

enum CompanySize { CS_SMALL, CS_MIDDLE, CS_BIG };  // ������������ � ������ ��������
struct Company   // ����� ��� ������ �������� 
{
	Employee people[30];             // �� ���������� (30 ��������)
	Employee director;                  // ��������
	CompanySize size;                 // ������ ��������
	unsigned int PeopleNumber;   // ���������� �����������
};

int main()
{
	Company comp;
	comp.director = { 125093, 45, 350'000.0 };
	comp.size = CS_MIDDLE;
	comp.PeopleNumber = 215;
	comp.people[0] = comp.director;
	comp.people[1] = { 134578, 34, 60'000.0 };
	return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//������ �� ��������

/*
struct Employee                   // ����� ��� ������ ��������� 
{  
	long id;                        // ID ����������
	unsigned short age;    // ��� �������
	double salary;             // ��� ��������
};

enum CompanySize { CS_SMALL, CS_MIDDLE, CS_BIG };  // ������������ � ������ ��������
struct Company // ����� ��� ������ �������� 
{  
	Employee people[30];             // �� ���������� (30 ��������)
	Employee director;                  // ��������
	CompanySize size;                 // ������ ��������
	unsigned int PeopleNumber;   // ���������� �����������
	bool isBankrupt;                      // �������� �� �������� ��������� (true / false)
};

int main()
{
	Company comp[3]; // ������ �� 3� ��������
	comp[0].director = { 334567, 60, 150'000.0 };
	comp[0].isBankrupt = true;
	comp[0].PeopleNumber = 1;
	comp[0].size = CS_SMALL;
	comp[1] = comp[0];                // �������� ���������� � ������ �������� �� ������
	comp[1].isBankrupt = false;
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//����� ������ �������� ������ ���������?
//-------------------------------------------------------------------------------------------------------------------------
/*
using namespace std;
struct TEmptyStruct
{

}; 
int main(int argc, char* argv[]) 
{ 
	TEmptyStruct s1;
	
	cout << sizeof(s1) << " " << sizeof(TEmptyStruct) << endl; 
	return 0; 
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//����������� - union
//-------------------------------------------------------------------------------------------------------------------------
/*
union EmployeeInfo         // ����� ��� ������ ���������� � ���������� 
{  
	long id;                        // ID ����������
	unsigned short age;    // ��� �������
	double salary;             // ��� ��������
};

int main() {
	EmployeeInfo info;
	info.age = 25;
	std::cout << info.salary << std::endl;    // ������� �� �����: -9.25596e+61
	std::cout << info.age << std::endl;        // ������� �� �����: 25
	std::cout << info.id << std::endl;           // ������� �� �����: -859045863

	info.salary = 175'000.0;
	std::cout << info.salary << std::endl;    // ������� �� �����: 175000
	std::cout << info.age << std::endl;        // ������� �� �����: 0
	std::cout << info.id << std::endl;           // ������� �� �����: 0
*/

//-------------------------------------------------------------------------------------------------------------------------
//������� ���� ��������
//-------------------------------------------------------------------------------------------------------------------------
/*
struct MyDate
{
	unsigned short  Day : 5;      // ����� ������� 0..31
	unsigned short  Month : 4;  // ����� ������� 0..15
	unsigned short  Year : 7;    // ����� ������� 0..127 
};

int main()
{
	MyDate date1 = { 31, 01, 20 };
	std::cout << sizeof(date1);         // ������� �� ����� 2
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//������� ���� �������� � ������� �����
//-------------------------------------------------------------------------------------------------------------------------

struct MyBoolean
{
	unsigned int Flag : 1;   // ������� ����
};

int main() 
{
	MyBoolean mybool;
	mybool.Flag = 1;   // ����� �������� ������ 0 ��� 1 ��� ��� �� ���� ���� ������ 1 ���.
	main_sizeof();
	return 0; 
}