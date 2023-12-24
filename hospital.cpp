#include<iostream>
using namespace std;
class Hospital
{
long double billno,roomno,totalamount,phoneno;
float a,b,c,d,e,f,g,z,x,totalamt,days;
char patientname[66],consulting[66],medicen1[66],medicen2[66],medicen3[66];
public:
void show()
{
cout<<"*********************************Satya Hospital************************************"<<endl;
cout<<"                         vidya road , rrpeta , hyderabad                 "<<endl;
cout<<"                        ph:0899-292922|282822        "<<endl;
cout<<"*********************************************************************************************"<<endl;
cout<<"Bill No            : 	                                            Date/mon/year:";               
cin>>billno;           
int year,date;
char mon;
cin>>date>>mon>>year;
cout<<"Patientname  : 	                                                   age/sex:";
cin>>patientname;
char age,sex[34];
cin>>age>>sex;
char address[999],area[555];
char dno;
cout<<"Address,D.no,Area  :	                                          Phone no   :";
cin>>address>>dno>>area;
cin>>phoneno;
cout<<"Consulting     :	                                         Room no     :  ";
cin>>consulting;
cin>>roomno;
cout<<"    --------------------------------------------------------------------     "<<endl;
}
void medic()
{
int mr,ex,sc,ec,choice,no;
cout<<"Any Tests   1(Yes)  2(No)  :";
cin>>no;
if(no==1)
{
cout<<"type of scan    1(MRI)     2(EXRAY)  3(SCANING)   4(ECG)  : ";
cin>>choice;
switch(choice)
{
case 1:
      	cout<<"MRI Scan Rs					:     ";					
		cin>>d;
		break;
case 2: 
		cout<<"Exray  Rs					:";					
		cin>>d;
		break;
case 3:
		cout<<"scaning Rs					:";					
		cin>>d;
		break;
case 4:
		cout<<"ECG Rs					:";					
		cin>>d;
		break;
}
}
else
{
}
if(d>=0)
{
cout<<"Total test Rs :"<<d<<endl;
}
else
{
cout<<"	No other tests	"<<endl;
}
int op;
cout<<"operation fee  1(Yes)  2(No)      :";
cin>>op;
if(op==1)
{
cout<<"operation fee  Rs      :";
cin>>a;
}
else
{
cout<<"No operation   Rs      :0"<<endl;
}
int bl;
cout<<"BLOOD require    1(Yes)  2(No)  :";
cin>>bl;
if(bl==1)
{
float lit;
cout<<"Blood in lit               :";
cin>>lit;
float aa,oo,ab,bb,totblood;
int choicee;
cout<<"Blood Group        1(A+/A-)  2(O+/O-)  3(AB+/AB-)  4(B+/B-)		:";
cin>>choicee;
switch(choicee)
{
case 1:
			cout<<"Price of A+/A- perlit		                        Rs:";
			cin>>aa;
			c=aa*lit;
			cout<<"TotalPrice of blood 		                        Rs:"<<c<<endl;
			break;
case 2:
			cout<<"Price of O+/O- perlit			Rs:";
			cin>>oo;
			c=oo*lit;
			cout<<"TotalPrice of blood 			Rs:"<<c<<endl;
			break;
case 3:
			cout<<"Price of AB+/AB- perlit				Rs:";
			cin>>ab;
			c=ab*lit;
			cout<<"TotalPrice of blood 			Rs:"<<c<<endl;
			break;
case 4:
			cout<<"Price of B+/B- perlit		Rs:";
			cin>>bb;
			c=bb*lit;
			cout<<"TotalPrice of blood 			Rs:"<<c<<endl;
			break;
}
}
else
{
cout<<"     BLOOD is not require      "<<endl;
}
int ch;
cout<<"Room charges  1(Yes)  2(No)   :";
cin>>ch;
if(ch==1)
{
cout<<"No of days in  a room:";
cin>>days;
int choose;
cout<<"Room type        1 Normal                2 ICU  :";
cin>>choose;
switch(choose)
{
case 1:                                        b=300*days;
                                                cout<<"room rent  Rs            :"<<b<<endl;
                                                break;
case 2:                                     b=600*days;
                                                cout<<"room rent  Rs            :"<<b<<endl;
                                                break;                                               
}
}
else
{
}
cout<<"     ------------------------------------------------------------------            "<<endl;
int i,n;
int k[55];
char j[800];
cout<<"No.of Medicens:";
cin>>n;
for(i=0;i<n;i++)
for(i=0;i<n;i++)
{
cout<<"Medicen Name:						Rs:  ";
cin>>j;
cin>>k[i];
}
int sum=0;
for(i=0;i<n;i++)
sum=sum+k[i];
cout<<"total medicen Rs:"<<sum<<endl;
z=a+b+c+d+sum;
cout<<"      --------------------------------------------------------------------       "<<endl;
cout<<"Total amount Rs 				       :"<<z<<endl;
if(z>=50000)
{
cout<<"Concession is   10%"<<endl;
  x=z/10;
cout<<"Concession is: "<<x<<endl;
totalamt=z-x;
}
else
{
cout<<"No  Concession    "<<endl;
totalamt=z;
}
cout<<"      --------------------------------------------------------------------       "<<endl;
cout<<"Total amount paid Rs			     :"<<totalamt;
cout<<"											                                                                        Authorised Signature"<<endl;
cout<<"*********************************************************************************************"<<endl;
cout<<"                                   Hope You A Fast Recovery                  "<<endl;
}
};
main()
{
Hospital ob;
ob.show();
ob.medic();
}
