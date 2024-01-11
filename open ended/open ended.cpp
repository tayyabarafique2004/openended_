#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void merge(int arr1[], int arr2[]) {
	int i,j=0;
	int merge_arr[12];
	for ( i = 0; i < 5; i++) {
		merge_arr[i] = arr1[i];

	}
	j = i;
	for ( i = 0; i < 7; i++) {
		merge_arr[j] = arr2[i];
		j++;
	}
	cout << "\n merged array=";
	for (i = 0; i < 12; i++) {
		cout << merge_arr[i] << "  ";

	}
	//int smallest = merge_arr[0];
	int temp=0;
	for (int i = 0; i< 11; i++)
	{
		for (int j = 0 ; j < 11; j++)
		{
			if (merge_arr[j] > merge_arr[j+1])
			{
				temp = merge_arr[j];
				merge_arr[j] = merge_arr[j+1];
				merge_arr[j+1] = temp;
			}
		}
	}
	cout << "\nsorted array:";
	for (int i = 0; i < 12; i++)
	{
		cout << merge_arr[i] << "  ";
	}
	
}
//common
void common(int arr1[], int arr2[]) {
	cout << "\ncommon elements are:";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			if (arr1[i] == arr2[j]) {
				
				cout << arr1[i]<<"   ";
				break;
			}
		}
	}
}
void palindrome(string &sentence) {
	
	string  temp;
	int i = 0, j;
	temp = sentence;
	j = sentence.length() - 1;
	//Reversing the temp string.

	cout << sentence<<"   ";

	while (i < j)
	{
		swap(sentence[i], sentence[j]);
		i++;
		j--;
	}

	if (temp == sentence)
	{
		cout << "The string is a palindrome." << endl;
	}
	else
	{
		cout << "The string is not a palindrome." << endl;
	}
}
int main() {
	string sentence="";
	int arr1[5] = { 3,6,2,4,8};
	int arr2[7] = { 4,5,7,5,2,8,2 };
	merge(arr1,arr2);
	common(arr1, arr2);
	cout << "\nenter a string to check palindrome:";
	getline(cin, sentence);
	palindrome(sentence);
	return 0;

}