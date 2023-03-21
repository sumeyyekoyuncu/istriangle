#include <iostream>
using namespace std;
int istriangle(float a, float b, float c){
	cout<<"sides of triangle"<<endl;
	cin>>a>>b>>c;
	if(a+b>c && abs(a-b)<c){
		return 1;
	}
	else {
		return 0;
	}
	
}
int main(int argc, char** argv) {
	float a,b,c;
if(istriangle(a,b,c)==1){
	cout<<"you can make a triangle with this sides"<<endl;
}
else  {
	cout<<"you can NOT make a triangle with this sides";
}
	return 0;
}