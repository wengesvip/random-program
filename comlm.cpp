#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <fstream> 
using namespace std;
string zhil;
char lname[256][100];
int n1;
int nu;
bool ir=false;
int help()
{
	cout<<"ָ���б�"<<endl;
	cout<<"random <int:n>����1~n֮�����ȡһ������"<<endl;
	cout<<"cls�����������Ļ"<<endl;
	cout<<"info����ʾϵͳ��Ϣ"<<endl;
	cout<<"exit���˳�����"<<endl;
	cout<<"listc <string:m> <int:n>������һ����Ϊm,����n��Ԫ�ص��б��ļ�"<<endl;
	cout<<"listr <string:m>����ȡ��Ϊm���ļ�"<<endl;
	return 0;
}
int randm(int n)
{
	int j=0;
	while(j==nu)
	{
	   srand((unsigned)time(NULL));
   	   j = rand() % n;
	}
	nu=j;
	return j;
}
int info()
{
	cout<<"ϵͳ�汾��2.0"<<endl;
	cout<<"�ڲ��汾��190203"<<endl;
	cout<<"��Ȩ��zrl����"<<endl;
	return 0;
}
int listc()
{
	ofstream of;
	char name[256];
	char a[256];
	cin>>a;
	of.open(a);
	int num;
	cin>>num;
	of<<num<<endl;
	cout<<"�ļ������ɹ�������������������ɴ�����ÿ������֮���ո���У�"<<endl;
	for(int i=1;i<=num;i++)
	{
		cin>>name;
		of<<name<<endl;
	}
	cout<<"�ļ�"<<a<<"�����ɹ�"<<endl;
	return 0; 
}
int listr()
{
	char n[256];
	cin>>n;
	ir=false;
	ifstream of(n);
	of>>n1;
	int i;
	for(i=1;i<=n1;i++)
	{
		of>>lname[i];
	}
	if(n1!=0)
	{
	   ir=true;
	   cout<<"�ļ�"<<n<<"��ȡ�ɹ���"<<endl;
    }
    else
       cout<<"�ļ�"<<n<<"��ȡʧ�ܣ�������Ϊɱ�������ֹ���ļ��Ѿ���"<<endl; 
}
int main()
{
	int num,cho; 
	system("cls");
	cout<<"#######################################"<<endl;
	cout<<"##      ��ӭʹ��zrl�ĳ��ϵͳ        ##"<<endl;
	cout<<"##      ��ѯָ���б�������\"help\"     ##"<<endl;
	cout<<"#######################################"<<endl;
	for(;;)
	{
		cin>>zhil;
	    if(zhil=="help")
	       help();
	    else if(zhil=="exit")
	       return 0;
	    else if(zhil=="random")
	    {
	       if(ir==false)
	       {
		      cin>>num;
		      cout<<randm(num)<<endl;
		   }
		   else
		   {
		   	  cho=randm(n1);
		   	  cout<<lname[cho]<<endl;
		   }
	    }
	    else if(zhil=="info")
	       info();
	    else if(zhil=="cls")
		   system("cls"); 
		else if(zhil=="listc")
		   listc();
        else if(zhil=="listr")
           listr();
		else
		   cout<<"δָ֪�������δ����"<<endl;
	}
	return 0;
}

