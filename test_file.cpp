#include <iostream>
using namespace std;

int main (){
	
	int arr [8]={2,3,4,1,8,7,9,5};
	cout <<"this is even number"<<endl;
	
	for(int i = 0;i<8;i++){
	
	
	if (arr [i] % 2==0){
		cout << arr[i]<<" "<<endl;
	}
}
	return 0;
}
