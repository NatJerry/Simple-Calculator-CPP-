//(���г����):��Ϊ���Դ��ǳ��ļ򵥣����Բ�ע���ˣ�Ӧ�ö����Ķ��ѣ� 
#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("title �򵥵ļ�����");
	system("mode con cols=52 lines=25");
	int fangfa = 0;
	double Version = 0.6;

chongqijisuanqi:
	system("color 7");
kaishi:
	cout << "��������Ҫʹ�õ�ģʽ:" << endl;
	cout << "1=�ӷ�" << endl;
	cout << "2=����" << endl;
	cout << "3=�˷�" << endl;
	cout << "4=����" << endl;
	cout << "5=����Բ���ܳ�(ֻ����2λС��)" << endl;
	cout << "6=����Բ�����(ֻ����2λС��)" << endl;
	cout << "7=�й����������" << endl;
	cout << "8=�л�������ɫ" << endl;
	cout << "9=��һҳ" << endl;
	cout << "ҳ��1/2" << endl;
	cin >> fangfa;


	long double num1 = 0;
	long double num2 = 0;
	long double num0 = 0;
	long double num3 = 0;
	long double num4 = 0;
	long double dengyu = 0;
	long double zj = 0;
	long double bj = 0;
	double PI = 3.14;
	long double mj = 0;
	int jisuanfangfa;
	int color = 0;
	int colorincolor = 0;
	system("cls");
yunsuan:
	switch (fangfa) {
	case 1: {
		cout << "��ѡ�����λ�ļ���" << endl;
		cout << "2=2λ����" << endl;
		cout << "3=3λ" << endl;
		cout << "4=4λ" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 2: {
			cout << "�������(1)" << endl;
			cin >> num1;
			cout << "�������(2)" << endl;
			cin >> num2;
			dengyu = num1 + num2;
			cout << "������ķ�ʽΪ" << num1 << "+" << num2 << endl;
			cout << "����ǣ�" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;

			break;
		}
		case 3: {
			cout << "�������(1)" << endl;
			cin >> num1;
			cout << "�������(2)" << endl;
			cin >> num2;
			cout << "�������(3)" << endl;
			cin >> num3;
			dengyu = num1 + num2 + num3;
			cout << "������ķ�ʽΪ" << num1 << "+" << num2 << "+" << num3 << endl;
			cout << "����ǣ�" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 4: {
			cout << "�������(1)" << endl;
			cin >> num1;
			cout << "�������(2)" << endl;
			cin >> num2;
			cout << "�������(3)" << endl;
			cin >> num3;
			cout << "�������(4)" << endl;
			cin >> num4;
			dengyu = num1 + num2 + num3 + num4;
			cout<<"���������ʽΪ:"<<num1<<"+"<<num2<<"+"<<num3<<"+"<<num4<<endl;
			cout << "����ǣ�" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "��������\n";
			system("pause");
			system("cls");

			goto yunsuan;
			break;
		}
		}
		break;
	}
	case 2: {
		cout << "�����뱻����(1)" << endl;
		cin >> num1;
		cout << "���������(2)" << endl;
		cin >> num2;
		dengyu = num1 - num2;
		cout << "���������ʽΪ:" << num1 << "-" << num2;
		cout << "���Ϊ��" << dengyu << endl;
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	case 3: {
		cout << "������˷������ģʽ(2=2λ�����������㡢3=3λ��4=4λ):" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 2: {
			cout << "���������(1):" << endl;
			cin >> num1;
			cout << "���������(2):" << endl;
			cin >> num2;
			dengyu = num1 * num2;
			cout << "���������ʽΪ:" << num1 << "*" << num2 << endl;
			cout << "���Ϊ:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 3: {
			cout << "���������(1):" << endl;
			cin >> num1;
			cout << "���������(2)" << endl;
			cin >> num2;
			cout << "���������(3)" << endl;
			cin >> num3;
			dengyu = num1 * num2 * num3;
			cout << "���������ʽΪ:" << num1 << "*" << num2 << "*" << num3 << endl;
			cout << "���Ϊ:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 4: {
			cout << "���������(1):" << endl;
			cin >> num1;
			cout << "���������(2)" << endl;
			cin >> num2;
			cout << "���������(3)" << endl;
			cin >> num3;
			cout << "���������(4)" << endl;
			cin >> num4;
			dengyu = num1 * num2 * num3 * num4;
			cout << "���������ʽΪ:" << num1 << "*" << num2 << "*" << num3 << "*" << num4;
			cout << "���Ϊ:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "��������\n";
			system("pause");
			system("cls");

			goto yunsuan;
			break;
		}
		}
		break;
	}
	case 4: {
		cout << "�����뱻����(1)" << endl;
		cin >> num1;
		cout << "���������(2)" << endl;
		cin >> num2;
		dengyu = num1 / num2;
		cout << "���������ʽΪ:" << num1 << "/" << num2 << endl;
		cout << "��Ľ��Ϊ��" << dengyu << endl;
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	case 5: {
		cout << "���㷽����" << endl;
		cout << "1=ֱ�������ܳ�" << endl;
		cout << "2=�뾶���ܳ�" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 1: {
			cout << "����ֱ��:";
			cin >> zj;
			dengyu = PI * zj;
			cout << "������Բ�ܳ��ķ���Ϊֱ�����ܳ�:" << PI << "��ȡֵ��3.14��" << "*" << zj << endl;
			cout << "" << endl;
			cout << "���Բ�ε��ܳ�Ϊ:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 2: {
			cout << "����뾶:";
			cin >> bj;
			dengyu = PI * bj * 2;
			cout << "������Բ�ܳ�����Ϊ�뾶���ܳ�:" << "����ȡֵ��3.14��" << PI << "*" << bj << "*" << "2" << endl;
			cout << "" << endl;
			cout << "���Բ�ε��ܳ�Ϊ:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "��������\n";
			system("pause");
			system("cls");
			goto yunsuan;
			break;

		}
		}

		break;
	}
	case 6: {
		cout << "��ѡ����㷽��:" << endl;
		cout << "1=��֪�뾶�����" << endl;
		cout << "2=��ֱ֪�������" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 1: {
			cout << "����������֪�İ뾶:";
			cin >> bj;
			cout << "" << endl;
			mj = PI * (bj * bj);
			cout << "���Ϊ:" << mj << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 2: {
			cout << "����������֪��ֱ��";
			cin >> zj;
			cout << "" << endl;
			mj = PI * (zj / 2) * (zj / 2);
			cout << "���Ϊ:" << mj << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "��������\n";
			system("pause");
			system("cls");
			goto yunsuan;
			break;
		}

				 break;
		}
	}
	case 7: {
		cout << "���:����ѧ����һ��������ѧ������Ϸ��C++��д��ռ��С���ܶ࣬���ھ���928034473�˽�����Beta�棡" << endl;
		cout << "�汾:" << Version << "�������԰�" << endl;
		cout << "��Ȩ����:Jerry" << endl;
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	case 8: {
		cout << "��ѡ����ɫ\n";
		cout << "1=��ɫ����\n";
		cout << "2=��ɫ����\n";
		cout << "3=ǳ������(Ӧ����ǳ��)\n";
		cout << "4=��ɫ����\n";
		cout << "5=��ɫ����(��ɫ)\n";
		cout << "6=��ɫ����\n";
		cout << "7=��ɫ����\n";
		cout << "8=��ɫ����\n";
		cout << "9=�ָ�Ĭ��\n";
		cin >> color;
		switch (color) {
		case 1: {
			system("color 1");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 2: {
			system("color 2");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 3: {
			system("color 3");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 4: {
			system("color 4");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 5: {
			system("color 1");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 6: {
			system("color 6");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 7: {
			system("color f");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 8: {
			system("color 8");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 9: {
			system("color 7");
			cout << "�л��ɹ�\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "��������\n";
			system("pause");
			system("cls");
			goto yunsuan;
			break;
		}
		}

		break;
	}
	case 9: {
		system("cls");
		goto next;
		break;
	}

	default: {
		cout << "��������\n";
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	}






next:
	cout << "1=������ɫ����\n";
	cout << "2=�����\n";
	cout << "3=���㳤���λ������ε��ܳ�\n";
	cout << "4=���㳤���λ������ε����\n";
	cout << "5=�˳�������\n";
	cout << "0=������һҳ\n";
	cout << "ҳ��2/2\n";
	int nextinput = 0;
	cin >> nextinput;
	system("cls");
	int wallcolor = 0;
nextyunsuan:
	switch (nextinput) {
	case 1: {
		cout << "�����ڴ�...\n";
		system("pause");
		system("cls");
		goto next;
		break;
	}
	case 2: {
		cout << "��������...\n";
		system("pause");
		system("cls");
		goto next;
		/*long long rand1 = 0;
		long long rand2 = 0;
		cout << "��������ĸ�����ʼ:";
		cin >> rand1;
		cout << "\n";
		cout << "��������ĸ�������:";
		cin >> rand2;
		cout << "\n";*/

	}
	case 3: {
		cout << "��ѡ�񳤷��λ�������(1/2)\n";
		short zc = 0;
		long double zhouchang = 0;
		cin >> zc;
		switch (zc) {
		case 1: {
			long double chang = 0;
			long double kuan = 0;
			cout << "���볤\n";
			cin >> chang;
			cout << "�����\n";
			cin >> kuan;
			zhouchang = (chang + kuan) * 2;
			cout << "�ܳ�Ϊ:" << zhouchang << endl;
			system("pause");
			system("cls");
			goto next;
			break;
		}
		case 2: {
			long double bc = 0;
			cout << "����߳�:";
			cin >> bc;
			cout << "\n";
			zhouchang = bc * 4;
			cout << "�ܳ�Ϊ:" << bc << "\n";
			break;
		}


		default: {
			cout << "��������\n";
			system("pause");
			system("cls");
			goto next;
			break;
		}
		}}

	case 4: {
		int mj = 0;
		long double mianji = 0;
		cout << "��ѡ����������ͼ��\n";
		cout << "1=�����ε��������\n";
		cout << "2=�����ε��������\n";
		cin >> mj;
		switch (mj) {
		case 1: {
			long double chang = 0;
			long double kuan = 0;
			cout << "�����볤:";
			cin >> chang;
			cout << "\n";
			cout << "�������:";
			cin >> kuan;
			cout << "\n";
			mianji = chang * kuan;
			cout << "����������Ϊ:" << mianji << endl;
			system("pause");
			system("cls");
			goto next;
			break;
		}
		case 2: {
			long double chouchang = 0;
			cout << "�����������ε��ܳ�:";
			cin >> chouchang;
			cout << "\n";
			mianji = chouchang * chouchang;
			cout << "������������Ϊ:" << mianji << endl;
			system("pause");
			system("cls");
			goto next;
			break;
		}
		}
	}
	case 5: {
		int quit = 0;
		cout << "��ȷ��Ҫ�˳���\n";
		cout << "0=�����\n";
		cout << "1=ȷ��\n";
		cout << "������:\n";
		cin >> quit;
		switch (quit) {
		case 0: {
			cout << "�����������У������õ�������ɫ�Լ�������ɫ�����ָ�ΪĬ��...\n";
			system("pause");
			system("cls");
			goto chongqijisuanqi;
			break;
		}
		case 1: {
			cout << "�ټ�,��ӭ�´��ٴ�ʹ��!\n";
			goto tuichu;
			break;
		}
		default: {
			cout << "��������\n";
			system("pause");
			system("cls");
			goto next;
			break;
		}

		}
	}
	case 0: {

		system("cls");
		goto kaishi;
		break;
	}
	default: {
		cout << "��������\n";
		system("pause");
		system("cls");
		goto next;
		break;
	}
	}


tuichu:
	system("pause");
	return 0;
}

