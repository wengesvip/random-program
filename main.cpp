//�����ڱ���ѡ������-std=c++11 
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "command.h"
#include "config.h"
using namespace std;
void print_main()
{

	cout<<"#############################################"<<endl;
	cout<<"#          ��ӭʹ�ó��ϵͳ   v2.0.1        #"<<endl;
	cout<<"#              �밴[1]ֱ�ӳ��              #"<<endl;
	cout<<"#               ��[2]��������               #"<<endl;
	cout<<"#               ��[3]�½�����               #"<<endl;
	cout<<"#             ��[4]�鿴�汾��Ϣ             #"<<endl;
	cout<<"#               ��[5]��������               #"<<endl;
	cout<<"#                 ��[6]�˳�                 #"<<endl;
	cout<<"#############################################"<<endl;
	return;
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
			    randm();
			else if(input=='2')
			{
				cout<<"�����ļ�����";
				ifread=true;
				if(listr()==1)
				   ifread=false;
			}
			else if(input=='3')
			    listc(ifcomm);
			else if(input=='4')
			    info();
			else if(input=='5')
			    pconfig();
			else if(input=='6')
			    return 0;
			system("pause");
			system("cls");
		}
	}
	return 0;

}
