/*#include<iostream>
using namespace std;
#include "unsorted.cpp"

int main(){
    UnsortedType<int> u1;
    UnsortedType<int> u2;
    UnsortedType<int> u3;
	int m, n;

	cin >> m;

	for(int i = 0; i < m; i++){
        int In;
		cin>>In;
		u1.insertItem(In);
	}

	cin >> n;

	for(int i = 0; i < n; i++){
	    int In;
        cin>>In;
		u2.insertItem(In);
	}

    int i=0,j=0;
    int b,c;
	while(i<u1.lengthIs() && j< u2.lengthIs()){
		u1.getNextItem(b);
		u3.insertItem(b);

		u2.getNextItem(c);
        u3.insertItem(c);
		i++;
		j++;
	}
	u1.resetList();
	u2.resetList();

	int arr[m+n];

	for(i=0;i<(m+n);i++){
    u3.resetList();
    int mn;
	u3.getNextItem(mn);
	int t;
	for(i=0;i<u3.lengthIs();i++){
        u3.getNextItem(t);
        if(mn<t){
            continue;
        }
        else{
            mn=t;
        }
	}
	arr[i]=mn;
	m
	}
	while(!u3.isEmpty()){
        int x;
        u3.getNextItem(x);
		cout << x<< " ";
	}
	u3.resetList();

    int y;
	for(int i=0;i<m;i++){
        u1.getNextItem(y);
		cout << y << " ";
	}
	u1.resetList();
	cout << endl;
	int x;
	for(int i=0;i<n;i++){
        u2.getNextItem(x);
		cout << x << " ";
	}
	u2.resetList();

	cout << endl;

	return 0;
}
/*
