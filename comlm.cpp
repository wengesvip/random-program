#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <fstream> 
#include "command.h"
using namespace std;
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
		cout<<"RANDOM-POGRA> ";
		cin>>zhil;
	    if(zhil=="help")
	       help();
	    else if(zhil=="exit")
	       return 0;
	    else if(zhil=="random")
	    {
	       randm();
	    }
	    else if(zhil=="info")
	       info();
	    else if(zhil=="cls")
		   system("cls"); 
		else if(zhil=="listc")
		   listc(true);
        else if(zhil=="listr")
           listr();
        else if(zhil=="tool")
        {
		    system("tool.exe");
		    system("cls");
		    cout<<"#######################################"<<endl;
	        cout<<"##      ��ӭʹ��zrl�ĳ��ϵͳ        ##"<<endl;
        	cout<<"##      ��ѯָ���б�������\"help\"     ##"<<endl;
	        cout<<"#######################################"<<endl;
		}
		else
		   cout<<"δָ֪�������δ����"<<endl;
	}
	return 0;
}
