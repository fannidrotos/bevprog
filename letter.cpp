#include "std_lib_facilities.h"

int main()
{
	cout<<"Enter the name of the person you want to write to (followed by 'enter'):\n";
	string first_name;
	cin>>first_name;
	cout << "Enter one of your friend's name!\n"
	string friend_name;
	cin>>friend_name;
	char friend_sex = 0;
	cout << "If the friend is a male enter 'm', if the friend is female enter 'f'!\n";
	char friend_sex;
	cin>>friend_sex;
	cout << "Enter your friend's age!\n";
	int age;
	cin>> age;
	
	cout<<"Dear" <<first_name<< ",\n";
	cout << "How are you?\n I am fine. I miss you.\n";
	if (friend_sex == m) {cout << "If you see" <<friend_name<< "please ask him to call me.\n";
	} else { cout << "If you see" <<friend_name<< "please ask her to call me.\n";
	}
	if (0>age || 110<age) { simple_error("you're kidding!"); }
	else { cout << "I hear you just had a birthday and you are" <<age<< "years old.\n";}
	if (age<12) { cout << "Next year you will be" <<age+1<< "years old.\n";
	cout << "Yours sincerely,\n";
	}
	else if (age==17) { cout << "Next year you will be able to vote.\n";
	cout << "Yours sincerely,\n";
	}
	else if (age>70) { cout << "I hope you are enjoying retirement.\n";
	cout << "Yours sincerely,\n";
	}
	else { cout << "Yours sincerely,\n";}
cout << "\n\n";
cout << first_name;
	
	
}