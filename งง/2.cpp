#include<iostream>
#include<math.h>

using namespace std;

int menu(int &r) {
	int x;
    cout << "Enter the number of radious : " ; cin >>r;
	cout << "---------- Menu of Program -----------" << endl;
	cout << " 1. Calculate the circumference of circle " << endl;
	cout << " 2. Calculate the area of circle " << endl;
	cout << " 3. Calculate the volume of phere " << endl;
	cout << " Enter the choice : " ; 
	cin >> x;
	return x;
}

int circum(int &r) {
	
    float ans;
	ans = 2.0*3.14*r;
	return ans;
	
}

int round(int &r) {
    float sum;
	sum = 3.14*pow(r,2);
	return sum;
}

int volume(int &r){
    float total;
    total = (4.0/3.0)*3.14*pow(r,3);
    return total;
}

void function(const int total,int r) {

	switch (total) {
	case 1 : cout <<"1. Calculate the circumference of circle "<<circum(r)<<endl;
		break;
	case 2: cout << "2. Calculate the area of circle  " <<round(r)<<endl;
		break;
	case 3 : cout <<"3. Calculate the volume of phere  " <<volume(r)<<endl;
		break;
	default : cout << endl << "Not Correct" << endl;
		      cout << endl << "Please input again" << endl;
				break;
	}	
}

int main() {
	int x,r;
	
	do {
		system("cls");
		x = menu(r);
		function(x,r);
		system("pause");

	} while (x != 3);
	
	return 0;
}
