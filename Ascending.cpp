#include<iostream>
using namespace std;

int main(){
	short int maksData, data[100], tukar, pilih;
	char ulang;
    
    //Awal Input
	cout << "Masukan MaksData: ";
	cin >> maksData;
    
	for(int i = 0; i < maksData; i++) {
        cout << "Data ke - " << i+1 << " = ";
        cin >> data[i];
    }
    //Akhir Input
    
    //Awal codingan Bubble Sort Ascending
    for(int i = 0; i < (maksData-1); i++) {
		for (int j = 0; j < (maksData-1); j++){
			if(data[j] > data[j + 1]){
                tukar = data[j];
                data[j] = data[j+1];
	            data[j+1] = tukar;
	        }
		}
	}
	//Akhir codingan Bubble Sort Ascending
	
	//Awal Output
	cout << endl << "Data setelah diurutkan " << endl;
	for(int i = 0; i < maksData; i++) {
        cout << data[i] << " ";
	}
	//Akhir Output
	
	cin.get();
	return 0;
}
