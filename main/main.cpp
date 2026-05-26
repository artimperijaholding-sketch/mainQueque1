
#include<string>
#include <iostream>
#include <queue>
#include <vector>
#include"Queque.h"
#include"Multikuhnya.h"
using std::cout;
using std::endl;
using std::cin;

#define A 0
int main()
{
#if A==1
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
#elif A==0
	std::priority_queue<Multikuhnya> kitchen;
	int menu;
	do
	{
		cout<<"1.Add ingredient "<<endl;
		cout<<"2.Cook a dish "<<endl;
		cout<<"0.Exit "<<endl;
		cout << "Enter : ";cin>>menu;cin.ignore();
		switch (menu)
		{
		case 1: {
			cout << "Enter the name of the ingredient : "; string name; getline(cin, name);
			cout << "Enter the time of the ingredient : "; int time; cin >> time;
			kitchen.push(Multikuhnya(name, time));
			break;
		}
		case 2: {
			cout << "=======Cooking Process=======" << endl;
			while (!kitchen.empty()) {
				cout << "Cooking: " << kitchen.top().getName() << "(" << kitchen.top().getCookingTime() << ")" << endl;
				kitchen.pop();
			}
			break;
		}
		
		}


	}while(menu!=0);
	
#endif
	return 0;
}

