#include<iostream>
using namespace std;

int main(){
	int sz1, sz2;
	cin >> sz1;
	int arr1[sz1];
	for(int i = 0; i < sz1; i++){
		cin >> arr1[i];
	}
	cin >> sz2;
	int arr2[sz2];
	for(int i = 0; i < sz2; i++){
		cin >> arr2[i];
	}
	int i=0,j=0,k=0;
	int sorted[sz1+sz2];
	while(i < sz1 && j < sz2){
		if(arr1[i] < arr2[j]){
			sorted[k] = arr1[i];
			k++;
			i++;
		}else{
			sorted[k] = arr2[j];
			k++;
			j++;
		}
	}
	while(i<sz1){
		sorted[k] = arr1[i];
		k++;
		i++;
	}
	while(j<sz2){
		sorted[k] = arr2[j];
		k++;
		j++;
	}
	for(int i = 0; i<(sz1+sz2); i++){
		cout << sorted[i] << " ";
	}
	cout << endl;
	return 0;
}
