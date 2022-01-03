#include <iostream>
#include <cstring>

class Number
{
	public:
		Number(int x) : number(x)
		{

		}

		void setAnnotation(char *a) 
		{
			memcpy(annotation, a, strlen(a));
		}

		virtual int operator+(Number &r) 
		{
			return number + r.number;
		}

	private:
		char annotation[100];
		int number;
};

int main(int argc, char **argv)
{
	if(argc < 2) exit(1);

	Number *x = new Number(5);
	Number *y = new Number(6);
	Number &five = *x, &six = *y;

	five.setAnnotation(argv[1]);

	return six + five;
}
