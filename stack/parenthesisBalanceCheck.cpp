#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string exp)
{
	bool flag = true;
	int count = 0;

	for (int i = 0; i < exp.length(); i++) {

		if (exp[i] == '(') {
			count++;
		}
		else {
			count--;
		}
		if (count < 0) {
            //no of ) more than (
			flag = false;
			break;
		}
	}

	// more ( are there
	if (count != 0) {
		flag = false;
	}

	return flag;
}

int main()
{
	string exp1 = "((()))()()";

	if (isBalanced(exp1))
		cout << "Balanced \n";
	else
		cout << "Not Balanced \n";

	string exp2 = "())((())";

	if (isBalanced(exp2))
		cout << "Balanced \n";
	else
		cout << "Not Balanced \n";

	return 0;
}
