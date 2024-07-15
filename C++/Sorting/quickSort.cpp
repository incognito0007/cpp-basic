#include<bits/stdc++.h>
using namespace std;

int partitionArray(int input[], int start, int end) {
	int pivot = input[start];
	int i = start;
	int j = end;

	while(i < j) {
		while(input[i] <= pivot && i <= end -1){
			i++;
		}
		while(input[j] > pivot && j >= start + 1){
			j--;
		}
		if(i<j) swap(input[i], input[j]);
	}
	swap(input[start], input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	
	if(start<end){
		int pIndex = partitionArray(input, start, end);
		quickSort(input, start, pIndex - 1);
		quickSort(input, pIndex + 1, end);
	}
}



int main() {
    //write your code here
    int input[8] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = 8;
    int start = 0;
    int end = 7;

    cout<<"array before sorting is : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;

    quickSort(input, start, end);

    cout<<"array after sorting is : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    return 0;
}