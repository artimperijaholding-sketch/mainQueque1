
#include<string>
#include <iostream>
#include"Queque.h"
int main()
{
	Queque::Queque<std::string> q;
	q.push("one");
	q.push("two");
	q.push("three");
	q.push("four");
	q.push("five");
	q.push("six");
	
	q.show();
	std::cout << std::endl;
	q.pop();
	q.pop();
	q.push("seven");
	q.push("eight");
	q.show();
	std::cout << std::endl;
	int count = 0;
	try {
		
		for (int i = -1; i < q.getTopindex(); i++)
		//for (int i = 0; i < q.getTopindex(); i++)
		{
			if (q[i][0] == 'f' || q[i][0] == 't')
				count++;
		}
		std::cout << count;
	}
	catch (const std::exception& e) { std::cout << e.what(); }
	
	return 0;
}

