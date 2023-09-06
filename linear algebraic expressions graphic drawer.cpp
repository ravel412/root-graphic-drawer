#include <iostream>
using namespace std;

int main() {
string giris;
int a,b,c;
cout<<"Doğrusal bir denklem giriniz, ardından örnek olarak"<<endl<<"Örnek:"<<endl<<"    2x+5"<<endl<<"    7x+8"<<endl<<"    9x+3"<<endl;

cin>>giris;

if(giris[0] =='1' || giris[0] =='2' || giris[0] =='3' || giris[0] =='4' || giris[0] =='5' || giris[0] =='6' || giris[0] =='7' || giris[0] =='8' || giris[0] =='9' || giris[0] =='0' ) {

if(giris[1] == 'x' && giris[2]=='+') {

if(giris[3] =='1' || giris[3] =='2' || giris[4] =='3' || giris[3] =='4' || giris[3] =='5' || giris[3] =='6' || giris[3] =='7' || giris[3] =='8' || giris[3] =='9' || giris[3] =='0' ) {
a = giris[0] - '0';
b = giris[3] - '0';
//c burada köktür.
c = (-b)/a;

}
}
}
 
cout<<"                    ^              "<< endl;
if(b ==9)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b==8)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b==7)
cout<<"                    o              "<< endl;
else
cout<<"                    |              "<< endl;
if(b==6)
cout<<"                    o              "<< endl;
else
cout<<"                    |              "<< endl;
if(b==5)
cout<<"                    o              "<< endl;
else
cout<<"                    |              "<< endl;
if(b==4)
cout<<"                    o              "<< endl;
else
cout<<"                    |              "<< endl;
if(b==3)
cout<<"                    o              "<< endl;
else
cout<<"                    |              "<< endl;
if(b==2)
cout<<"                    o              "<< endl;
else
cout<<"                    |              "<< endl;

if(b==1) 
cout<<"                    0              "<< endl;
else
cout<<"                    |              "<< endl;
if(b == 0 || c == 0) 
cout<<" < _ _ _ _ _ _ _ _ _o_ _ _ _ _ _ _ _ _> "<< endl;
if(c == 1)
cout<<" < _ _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _ _> "<< endl;
if(c == 2)
cout<<" < _ _ _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _> "<< endl;
if(c == 3)
cout<<" < _ _ _ _ _ _ _ _ _ _ _ o _ _ _ _ _ _> "<< endl;
if(c == 4)
cout<<" < _ _ _ _ _ _ _ _ _ _ _ _ o _ _ _ _ _> "<< endl;
if(c == 5)
cout<<" < _ _ _ _ _ _ _ _ _ _ _ _ _ o _ _ _ _> "<< endl;
if(c == 6)
cout<<" < _ _ _ _ _ _ _ _ _ _ _ _ _ _ o _ _ _> "<< endl;
if(c == 7)
cout<<" < _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ o _ _> "<< endl;
if(c == 8)
cout<<" < _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ o _> "<< endl;
if(c == 9)
cout<<" < _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ o > "<< endl;
if(c == -1)
cout<<" < _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -2)
cout<<" < _ _ _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -3) 
cout<<" < _ _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -4)
cout<<" < _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -5)
cout<<" < _ _ _ _ o _ _ _ _ _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -6)
cout<<" < _ _ _ o _ _ _ _ _ _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -7)
cout<<" < _ _ o _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -8)
cout<<" < _ o _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ > "<< endl;
if(c == -9)
cout<<" < o _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ > "<< endl;

if(b == -1)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b == -2)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b == -3)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b == -4)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b == -5)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b == -6)
cout<<"                    o               "<< endl;
else
if(b == -7)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b == -8)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
if(b == -9)
cout<<"                    o               "<< endl;
else
cout<<"                    |               "<< endl;
cout<<"                    *               "<< endl;
}




