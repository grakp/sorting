#include<iostream> 

using namespace std;

int main(){
	int list[9999], size, i, j, temp;


	cin >> size;

	for(i = 0; i < size; i++){
		cin >> list[i];
	}

	for(i = 1; i < size; i++){ 
		
		for(j = 0; j < (size - i); j++){

			if(list[j] > list[j + 1]){
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	for(i = 0; i < size; i++){
		cout << list[i] << " " ;
	}
	cout << endl; 
	return 0;
}

# asasass
