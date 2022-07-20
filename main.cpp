#include<iostream>
using namespace std;

int main() {
	short int maksData, data[100], tukar, pilih;
	char ulang;
    
	cout << "Masukan MaksData: ";
	cin >> maksData;
    
	for(int i = 0; i < maksData; i++) {
        cout << "Data ke - " << i+1 << " = ";
        cin >> data[i];
    }
	do{
		system("cls");
		cout <<"# Menu #"<<endl;
		cout <<"1. Ascending"<<endl;
		cout <<"2. Descending"<<endl<<endl;
		
		cout <<"   Pilih Menu = ";cin >>pilih;
		
		switch(pilih){
			case 1:
				for(int i = 0; i < (maksData-1); i++) {
			        for (int j = 0; j < (maksData-1); j++){
			            if(data[j] > data[j + 1]){
			                tukar = data[j];
			                data[j] = data[j+1];
			                data[j+1] = tukar;
			            }
			        }
	    		}
	    	break;
	    	case 2:
	    		for(int i = 0; i < (maksData-1); i++) {
			        for (int j = 0; j < (maksData-1); j++){
			            if(data[j] < data[j + 1]){
			                tukar = data[j];
			                data[j] = data[j+1];
			                data[j+1] = tukar;
			            }
			        }
	    		}
	    	break;
	    	default :
	    		cout <<"Error!"<<endl;
	    	break;
		}
	
	    cout << endl << "Data setelah diurutkan " << endl;
	    for(int i = 0; i < maksData; i++) {
	        cout << data[i] << " ";
	    }
	    
		cout <<endl<<endl;
		cout <<"Ulangi Program? "; cin >> ulang;
	}while (ulang=='y'|| ulang =='Y');

	
cin.get();
return 0;
}
