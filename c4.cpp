#include<iostream>
using namespace std;
int main()
{
	char a = ' ';//���ڴ���û��������ĸ
	cout<<"�²������ĸ���ĸ���������Ŷ��"<<endl;
	int i = 0;//���ڼ�¼�¹����ٴ���
	for(i = 0;i < 5;i++)
	{
		cin>>a;
		if(a == 'G')//�������
		{
			cout<<"��������ˣ�"<<endl;
			break;//��ֹѭ�� 
		 } 
		 else	//���û�в���
		 	cout<<"��´��ˣ����Ų°ɣ�"<<endl; 
	 } 
	return 0;
}
