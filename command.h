#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <random>
using namespace std;


#define rand() _r_a_n_d_(r_a_n_d)

string zhil;
char lname[256][100];
char a[256],n[256];
int n1,times;//times:�����������һλͬѧ 
char name[256];
bool ir=false;
int help()
{
	cout<<"ָ���б�"<<endl;
	cout<<"random [int:n]����1~n֮�����ȡһ������������Ѿ���ȡ�б�������n"<<endl; 
	cout<<"cls�����������Ļ"<<endl;
	cout<<"info����ʾϵͳ��Ϣ"<<endl;
	cout<<"exit���˳�����"<<endl;
	cout<<"listc <string:m> <int:n>������һ����Ϊm,����n��Ԫ�ص��б��ļ�"<<endl;
	cout<<"listr <string:m>����ȡ��Ϊm���ļ�"<<endl;
	cout<<"tool���������ò˵�"<<endl;
	cout<<"ע��<>��Ϊ���[]��Ϊ��������д"<<endl;
	return 0;
}
void re_upset()//���´���
{
	random_shuffle(lname,lname+n1);
	    ofstream ow;
	    ow.open(n);
	    char comman[265]="del ";
	    strcat(comman,n); 
	    system(comman); 
	    ow<<n1<<endl;
	    for(int i=0;i<=n1;i++)
			ow<<lname[i]<<endl;
		ow.close();
		return;
}
void randm()
{
	if(ir==false)
	{	
		mt19937_64 r_a_n_d(time(NULL));
		uniform_int_distribution<long long> _r_a_n_d_(0,9223372036854775807);
	    cout<<"�������ܳ鵽�����ֵ����СֵΪ0��:";
        cin>>n1;
	    cout<<rand() % n1<<endl;
	}
	else if(ir==true)
	{
		if(times>=n1)
	        re_upset();
		cout<<lname[times]<<endl;
		times++;
	}
	return;
}
int info()
{
	cout<<"ϵͳ�汾��2.0.2"<<endl;
	cout<<"�ڲ��汾��190226"<<endl;
	cout<<"��Ȩ��zrl����"<<endl;
	return 0;
}
int listc(bool comm)
{
	ofstream of;
	string a1;
	cin>>a1;
	a1+=".lis";
	strcpy(a,a1.c_str());
	of.open(a);
	int num;
	if(comm==false)
	   cout<<char(7);
	cin>>num;
	of<<num<<endl;
	cout<<"�ļ������ɹ�������������������ɴ�����ÿ������֮���ո���У�"<<endl;
	for(int i=1;i<=num;i++)
	{
		cin>>name;
		of<<name<<endl;
	}
	cout<<"�ļ�"<<a<<"�����ɹ�"<<endl;
	of.close();
	return 0; 
}
int listr()
{
	string n2;
	cin>>n2;
	n2+=".lis";
	strcpy(n,n2.c_str());
	ir=false;
	ifstream of(n);
	of>>n1;
	int i=0,counter=0;
	while(of>>lname[i])
	{
		i++;
		counter++;
	}
	of.close();
	if(n1!=0 && counter==n1)
	{
	   ir=true;
	   cout<<"�ļ�"<<n<<"��ȡ�ɹ���"<<endl;
	   random_shuffle(lname,lname+n1);
	   //ʹ�������������滻֮ǰ�� 
	   ofstream ow;//ow = over_write
	   ow.open(n);
	   //��ɾ��֮ǰ��
	   char comman[265]="del ";//���ڴ���ƴ�Ӻ������ 
	   strcat(comman,n); 
	   system(comman);
	   //���ɴ��Һ�� 
	   ow<<n1<<endl;
	   for(i=0;i<=n1;i++)
	   	   ow<<lname[i]<<endl;
	   	ow.close();
    }
    else
       cout<<"�ļ�"<<n<<"��ȡʧ�ܣ�������Ϊɱ�������ֹ���ļ��Ѿ���"<<endl; 
    return 0;
}
