#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
	return a < b;		// default
}

int main() {
	//-----Vector����������-----
	vector<int> arr(100);
	int size = arr.size();
	for(int i = 0; i < size; i++) {
		arr[i] = i+1;
	}
	arr.push_back(1);
	size = arr.size();
	for(int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	arr.clear();
	//arr.pop_back();
	if(!arr.empty()) {
		vector<int>::iterator p = arr.begin();
		p++;
		printf("%d", *p);
	}


	vector<int> arr2 { 4, 2, 7, 5, 0 };
	int size2 = arr2.size();
	sort(arr2.begin(), arr2.end(), cmp);
	size2 = arr2.size();
	for(int i = 0; i < size2; i++) {
		cout << arr2[i] << " ";		//0 2 4 5 7
	}
	cout << endl;


	vector<int> arr3 { 3, 8, 6, 7, 2, 5, 1, 0 };
	nth_element(arr3.begin(), arr3.begin() + 4, arr3.end());	// ��4������ȷλ�ã���С�Ҵ󵫻���
	int size3 = arr3.size();
	for(int i = 0; i < size3; i++) {
		cout << arr3[i] << " ";		// 2 0 1 *3* 5 7 6 8
	}
	cout << endl;


	int bigger;
	bigger = max(1, 2);
	cout << bigger << endl;		// 2

	int a = 1, b = 2;
	swap(a, b);
	swap(arr3[0], arr3[1]);		//��ֹ����������������������
	
	//-----unique�÷���δ��ɣ�-----
	vector<int> same_arr { 1, 2, 2, 3, 4, 3, 1 };
	sort(same_arr.begin(), same_arr.end());
	// unique(same_arr.begin(), same_arr.end());	// ɸѡ���ظ�Ԫ�ز���ǰ����ʱ�����1 2 3 4 *3 3 4*�������Ϊ��ʱԪ��
	int new_length = unique(same_arr.begin(), same_arr.end()) - arr.begin();	//��д������ȥ������Ԫ��***
	int size4 = same_arr.size();
	for(int i = 0; i < size4; i++) {
		cout << same_arr[i] << " ";		
	}
	cout << endl;	
	
	

	return 0;
}
