#include"Joseph.h"

int main() {
	int N,S,M,K;
	cout << "现有N人围成一圈，从第S个人开始报数，报M的人出局，再由下一个人开始报数，如此循环，直到剩下K个人为止"<<endl<<endl;
	cout << "请输入生死游戏的总人数N：";
	cin >> N;
	cout << endl << "请输入游戏开始的位置S：";
	cin >> S;
	cout << endl << "请输入死亡数字M:";
	cin >> M;
	cout << endl << "请输入剩余生存人数K:";
	cin >> K;
	Joseph* myJoseph=new Joseph(N,S,M,K);
	myJoseph->kill();
	myJoseph->tranverse();

	return 0;
}