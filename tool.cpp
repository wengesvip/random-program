#include <iostream>
#include "config.h"
#include <string>
#include <io.h>
using namespace std;
void ptools()
{
	cout<<"#############################################"<<endl;
	cout<<"#             ���Ǳ�����Ĺ�����            #"<<endl;
	cout<<"#               ��[1]��������               #"<<endl;
	cout<<"#              ��[2]�Զ��Ӻ�׺              #"<<endl;
	cout<<"#         ��[3]ɾ���˵��ļ�(����׺)         #"<<endl;
	//cout<<"#               ��[4]������               #"<<endl;
	cout<<"#                 ��[4]����                 #"<<endl;
	cout<<"#############################################"<<endl;
}
int main()
{
	char putin;
	while(1)
	{
		system("cls");
		ptools();
	    putin=getch();
	    if(putin=='1')
		{
			pconfig();
			return true;
		}
		else if(putin=='2')
		{
			string wjm;//wjm���ļ��� 
			cout<<"�������ļ�����";
			cin>>wjm;
			string name1,comm;
			name1=wjm+".lis";
			comm="ren "+wjm+" "+name1;
			char comma[1000],name2[500];
			memset(comma,0,sizeof(comma));
			strcpy(comma,comm.c_str());
			system(comma);
			memset(name2,0,sizeof(name2));
			strcpy(name2,name1.c_str());
			if(_access(name2,0)==-1)
				cout<<"����ʧ�ܣ�����ɱ��״̬�͹���ԱȨ��"<<endl;
			else
				cout<<"���ĳɹ���"<<endl;
		}
		else if(putin=='3')
		{
			cout<<"�������ļ��������üӺ�׺����";
			string name;
			cin>>name;
			name+=".lis";
			string comm;
			comm="del "+name;
			char comma[500];
			memset(comma,0,sizeof(comma));
			strcpy(comma,comm.c_str());
			system(comma);
			char tempname[256];
			memset(tempname,0,sizeof(tempname));
			strcpy(tempname,name.c_str());
			if(_access(tempname,0)==-1)
			    cout<<"ɾ���ɹ���"<<endl;
			else
			    cout<<"ɾ��ʧ�ܣ�����ɱ��״̬�͹���ԱȨ��"<<endl;
		}
		else if(putin=='4')
		     return 0;
		cout<<"�����������..."<<endl;
		getch();
	} 
}
