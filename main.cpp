#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>
using namespace std;
int n1;
string lname[1000];
void print_main()
{
	cout<<"#############################################"<<endl;
	cout<<"#           ��ӭʹ�ó��ϵͳ   v2.0         #"<<endl;
	cout<<"#              �밴[1]ֱ�ӳ��              #"<<endl;
	cout<<"#               ��[2]��������               #"<<endl;
	cout<<"#               ��[3]�½�����               #"<<endl;
	cout<<"#              ��[4]�鿴�汾��Ϣ            #"<<endl;
	cout<<"#                 ��[5]�˳�                 #"<<endl;
	cout<<"#############################################"<<endl;
	return;
}
void info()
{
	cout<<"����汾��2.0"<<endl;
	cout<<"�ڲ��汾��190203"<<endl;
	cout<<"��Ȩ��zrl����"<<endl;
	getch();
	return; 
}
void listc()
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
	return; 
}
int listr()
{
	char n[256];
	cin>>n;
	ifstream of(n);
	of>>n1;
	int i;
	for(i=1;i<=n1;i++)
	{
		of>>lname[i];
	}
	if(n1!=0)
	{
	   cout<<"�ļ�"<<n<<"��ȡ�ɹ���"<<endl;
	   return 0;
    }
    else
       cout<<"�ļ�"<<n<<"��ȡʧ�ܣ�������Ϊɱ�������ֹ���ļ��Ѿ���"<<endl;
    return 1;
}
int radom(int n)
{
int j=0;
	while(j==0)
	{
	   srand((unsigned)time(NULL));
   	   j = rand() % n;
	}
	return j;
}
int main()
{
	//Read config
	std::ifstream rcon ("basic.config", std::ifstream::binary);
	bool ifcomm;
	rcon>>ifcomm;
	//Use command line mod
	if(ifcomm == true)
	{
		system("comlm.exe");
	}
	else//Use graphical interface 
	{
	    char input;
	    int n;
	    bool ifread=false;
		while(1)
		{
			print_main();
			input=getch();
			if(input=='1')
			{
				if(ifread==false)
				{
					cout<<"�������ܳ鵽�����ֵ����СֵΪ0��:";
				    cin>>n;
			        cout<<radom(n);
				}
				else
					cout<<lname[radom(n)]<<endl;
				getch();
			}
			else if(input=='2')
			{
				cout<<"�����ļ�����";
				ifread=true;
				if(listr()==1)
				   ifread=false;
			}
			else if(input=='3')
			    listc();
			else if(input=='4')
			    info();
			else if(input=='5')
			    return 0;
			system("cls");
		}
	}
	system("pause");
	return 0;
}

