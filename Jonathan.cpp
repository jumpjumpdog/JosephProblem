#include"Joseph.h"

int main() {
	int N,S,M,K;
	cout << "����N��Χ��һȦ���ӵ�S���˿�ʼ��������M���˳��֣�������һ���˿�ʼ���������ѭ����ֱ��ʣ��K����Ϊֹ"<<endl<<endl;
	cout << "������������Ϸ��������N��";
	cin >> N;
	cout << endl << "��������Ϸ��ʼ��λ��S��";
	cin >> S;
	cout << endl << "��������������M:";
	cin >> M;
	cout << endl << "������ʣ����������K:";
	cin >> K;
	Joseph* myJoseph=new Joseph(N,S,M,K);
	myJoseph->kill();
	myJoseph->tranverse();

	return 0;
}