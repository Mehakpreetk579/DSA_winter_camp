#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st , int num){
	if(st.empty() || st.top() >= num){
		st.push(num);
		return;
	}
	int x=st.top();
	st.pop();
	insert(st,num);
	st.push(x);
}

void sortUsingStack(int array[],int n){
	
	stack<int> st;
	for(int i=0;i<n;i++){
		insert(st,array[i]);
	}
	cout << "top: " << st.top()<<endl;
	for(int i=0;i<n;i++){
		array[i]=st.top();
		st.pop();
	}
}

int main() {
	int array[5]={4,2,3,1,5};
	int n=5;
	
	cout<<"array before sorting : ";
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	sortUsingStack(array,n);
	
	cout<<"array after sorting : ";
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
}