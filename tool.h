#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
using namespace std;
string charToStr(char * contentChar)

{
	string tempStr;
	for (int i=0;contentChar[i]!='\0';i++)
	{

		tempStr+=contentChar[i];
	}
	return tempStr;
}
void change(int lineNum,char *content)
{
	/*
	ifstream in;
	char line[1024]={'\0'};
	in.open("basic.config");
	int i=0;
	string tempStr;
	while(in.getline(line,sizeof(line)))
	{
		i++;
		if(lineNum!=i)
		{
			tempStr+=charToStr(line);
		}
		else
		{
	       tempStr+=charToStr(content);
		}
		tempStr+='\n';
	}
	in.close();
	ofstream out;
	out.open("basic.config");
	out.flush();
	out<<tempStr;
	out.close();
	*/
	ofstream out;
	out.open("basic.config",ios::out|ios::trunc);
	out<<content;
	out.close();
	return;
}
void pconfig()
{
	system("cls");
	ifstream rea;
	rea.open("basic.config");
	int con;//basic.config������Ҫд��һ��'0'(wenge) 
	
	if(con=rea.get(),con!=EOF){
		char tempstr[2]={'0','\n'};
		change(1,tempstr);
		con=0;
	}
	while(1)
	{
		cout<<"����"<<endl;
		if(con==0)
	        cout<<"����ģʽ       ͼ�ν���"<<endl;
    	else
    	    cout<<"����ģʽ       ������"<<endl;
    	cout<<"��\"1\"���ı佻��ģʽ�����ã���\"2\"���沢����";
    	char get;
    	get=getch();
    	if(get=='1')
    		con^=1;
	        //con=1-con;
	    if(get=='2' && con==0)
	    {
	    	char tempstr[2]={'0','\n'};
	    	change(1,tempstr);
	    	cout<<endl<<"����ɹ���"<<endl;
		    return;
		}
		if(get=='2' && con==1)
	    {
	    	char tempstr[2]={'1','\n'};
	    	change(1,tempstr);
	    	cout<<endl<<"����ɹ���"<<endl;
		    exit(0);
		}
		system("cls");
	}
}

const int current_version=211;
int update()
{
	system("del version.txt"); 
	system("cls"); 
	cout<<"������..."<<endl;
	int ver;
	char link[260];
	//������
	system("aria2c.exe https://zhengruilin.github.io/random-program/version.txt");
	//cout<<"\n\n\n\n\n\n233\n";�����ﶼ���� 
	ifstream up;
	
	up.open("version.txt");
	
	
	up>>ver>>link;
	cout<<"bfgsgfdvgdxbngbjnhdxv grscdxnbvgyudnsc"; 
	
	if(ver==current_version)
	{
		cout<<"�����е������°汾��\n";
		system("cls");
		return 0;
	}
	else if(ver<current_version)
	{
	    cout<<"�����޷�ʶ��İ汾��\n";
	    system("pause");
	    return 0;
	}
	//���ظ��°�
	system("cls");
	cout<<"��鵽���£��汾��"<<ver/100<<"."<<ver/10%10<<"."<<ver%10<<endl;
	cout<<"�Ƿ�Ҫ���£�(Y/N)\n";
	while(1){
		char c=getch();
		if     (c=='Y'||c=='y')break;
		else if(c=='N'||c=='n')return 0;
	}
	char cmd[260];
	strcpy(cmd,"aria2c.exe ");
	strcat(cmd,link); 
	system(cmd);
	//�����°�
	//��ѹ��
	system("start updatelauncher.exe");
	exit(0);
	//���и��³���
	/*
    STARTUPINFO startupInfo = {0};
    PROCESS_INFORMATION processInformation = { 0 };
    
    	BOOL bSuccess = CreateProcess(TEXT("up\\update.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL,&startupInfo,&processInformation);
    if (bSuccess)
    {
        cout << "Succeed loading the update programme!" << endl;
    }
    else
    {
    	ofstream error;
    	error.open("error.txt");
        error << "Cannot start the pogramme!" << endl
            << "Error code:\t" << GetLastError() << endl;
    }
    */
    return 0;
}

