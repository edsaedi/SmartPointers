//#include <iostream>
//#include <vector>
//#include <string>
//#include <array>
//#include <memory>
//
//struct Person
//{
//private:
//	std::string Name;
//public:
//	Person(std::string name) : Name{ name } {}
//
//	const std::string GetName()
//	{
//		return Name;
//	}
//};
//
//Person GetRandomPerson(std::string name)
//{
//	Person temp(name);
//
//	return temp;
//}
//
//
//// create a function that returns an array containing 100 numbers
//
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	Person me("Karan");
//
//	std::cout << me.GetName() << std::endl;
//
//	auto test = GetRandomPerson("Jimmy");
//	std::cout << test.GetName() << std::endl;
//
//	int x = 5;
//
//	int* y = &x;
//
//	cout << x << endl;
//	cout << &x << endl;
//	cout << y << endl;
//	cout << *y << endl;
//	cout << &y << endl;
//
//
//
//	int* z = new int(7);
//
//	cout << z << endl;
//	cout << *z << endl;
//
//	delete z;
//
//	z = nullptr;
//
//
//	Person* p = new Person("Bob");
//
//	cout << (*p).GetName() << p->GetName() << endl;
//
//	delete p;
//
//
//	// create an int array on the heap to hold 5 numbers and print out the value on terminal
//	int size = 5;
//	int* array = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = i + 10;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(array + i) << " " << array + i <<  endl;
//		//cout << array[i] << endl;
//	}
//
//	cout << array << endl;
//	cout << sizeof(int) << endl;
//
//	cout << sizeof(char) << endl;
//
//	delete[] array;
//
//	array = new int[sizeof(int) * 100000];
//
//	delete[] array;
//
//	std::unique_ptr<int> age = std::make_unique<int>(28);
//
//	cout << age << endl;
//	
//	cout << *age << endl;
//
//	cout << age.get() << endl;
//
//	std::unique_ptr<Person> edan = std::make_unique<Person>("Edan");
//
//	cout << edan << endl;
//	cout << edan->GetName() << endl;
//	cout << edan.get() << endl;
//
//
//
//	return 0;
//}

#include <iostream>
#include <memory>

struct Vec3
{
private:
	int x, y, z;
public:
	Vec3() : x(0), y(0), z(0) { }
	Vec3(const Vec3& other)	// copy constructor
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}



	Vec3(int x, int y, int z) :x(x), y(y), z(z) { }
	friend std::ostream& operator<<(std::ostream& os, const Vec3& v) {
		return os << '{' << "x:" << v.x << " y:" << v.y << " z:" << v.z << '}';
	}
};

int main()
{
	using std::cout;
	using std::endl;

	Vec3 test(4, 5, 6);


	Vec3 meow = test;

	cout << test << endl;




	// Use the default constructor.
	std::unique_ptr<Vec3> v1 = std::make_unique<Vec3>();

	std::unique_ptr<Vec3> v2 = v1;	// discuss why we cannot assign this, *copy constructor*




	//cout << v1 << endl;
	//cout << *v1 << endl;
	//// Use the constructor that matches these arguments
	//std::unique_ptr<Vec3> v2 = std::make_unique<Vec3>(0, 1, 2);
	//cout << v2 << endl;
	//cout << *v2 << endl;
	//// Create a unique_ptr to an array of 5 elements
	//std::unique_ptr<Vec3[]> v3 = std::make_unique<Vec3[]>(5);	// 5 refers to the size


	//for (int i = 0; i < 5; i++) {
	//	std::cout << "     " << v3[i] << '\n';
	//}
}