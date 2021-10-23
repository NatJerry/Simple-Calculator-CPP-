//(胸有成竹的):因为这个源码非常的简单，所以不注释了，应该都看的懂把？ 
#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("title 简单的计算器");
	system("mode con cols=52 lines=25");
	int fangfa = 0;
	double Version = 0.6;

chongqijisuanqi:
	system("color 7");
kaishi:
	cout << "请输入您要使用的模式:" << endl;
	cout << "1=加法" << endl;
	cout << "2=减法" << endl;
	cout << "3=乘法" << endl;
	cout << "4=除法" << endl;
	cout << "5=计算圆的周长(只保留2位小数)" << endl;
	cout << "6=计算圆的面积(只保留2位小数)" << endl;
	cout << "7=有关这个计算器" << endl;
	cout << "8=切换字体颜色" << endl;
	cout << "9=下一页" << endl;
	cout << "页数1/2" << endl;
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
		cout << "请选择多少位的加数" << endl;
		cout << "2=2位加数" << endl;
		cout << "3=3位" << endl;
		cout << "4=4位" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 2: {
			cout << "输入加数(1)" << endl;
			cin >> num1;
			cout << "输入加数(2)" << endl;
			cin >> num2;
			dengyu = num1 + num2;
			cout << "您运算的方式为" << num1 << "+" << num2 << endl;
			cout << "结果是：" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;

			break;
		}
		case 3: {
			cout << "输入加数(1)" << endl;
			cin >> num1;
			cout << "输入加数(2)" << endl;
			cin >> num2;
			cout << "输入加数(3)" << endl;
			cin >> num3;
			dengyu = num1 + num2 + num3;
			cout << "您运算的方式为" << num1 << "+" << num2 << "+" << num3 << endl;
			cout << "结果是：" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 4: {
			cout << "输入加数(1)" << endl;
			cin >> num1;
			cout << "输入加数(2)" << endl;
			cin >> num2;
			cout << "输入加数(3)" << endl;
			cin >> num3;
			cout << "输入加数(4)" << endl;
			cin >> num4;
			dengyu = num1 + num2 + num3 + num4;
			cout<<"您计算的算式为:"<<num1<<"+"<<num2<<"+"<<num3<<"+"<<num4<<endl;
			cout << "结果是：" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "你就乱输把\n";
			system("pause");
			system("cls");

			goto yunsuan;
			break;
		}
		}
		break;
	}
	case 2: {
		cout << "请输入被减数(1)" << endl;
		cin >> num1;
		cout << "请输入减数(2)" << endl;
		cin >> num2;
		dengyu = num1 - num2;
		cout << "您计算的算式为:" << num1 << "-" << num2;
		cout << "结果为：" << dengyu << endl;
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	case 3: {
		cout << "请输入乘法计算的模式(2=2位乘数进行运算、3=3位、4=4位):" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 2: {
			cout << "请输入乘数(1):" << endl;
			cin >> num1;
			cout << "请输入乘数(2):" << endl;
			cin >> num2;
			dengyu = num1 * num2;
			cout << "您计算的算式为:" << num1 << "*" << num2 << endl;
			cout << "结果为:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 3: {
			cout << "请输入乘数(1):" << endl;
			cin >> num1;
			cout << "请输入乘数(2)" << endl;
			cin >> num2;
			cout << "请输入乘数(3)" << endl;
			cin >> num3;
			dengyu = num1 * num2 * num3;
			cout << "您计算的算式为:" << num1 << "*" << num2 << "*" << num3 << endl;
			cout << "结果为:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 4: {
			cout << "请输入乘数(1):" << endl;
			cin >> num1;
			cout << "请输入乘数(2)" << endl;
			cin >> num2;
			cout << "请输入乘数(3)" << endl;
			cin >> num3;
			cout << "请输入乘数(4)" << endl;
			cin >> num4;
			dengyu = num1 * num2 * num3 * num4;
			cout << "您计算的算式为:" << num1 << "*" << num2 << "*" << num3 << "*" << num4;
			cout << "结果为:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "你就乱输把\n";
			system("pause");
			system("cls");

			goto yunsuan;
			break;
		}
		}
		break;
	}
	case 4: {
		cout << "请输入被除数(1)" << endl;
		cin >> num1;
		cout << "请输入除数(2)" << endl;
		cin >> num2;
		dengyu = num1 / num2;
		cout << "您计算的算式为:" << num1 << "/" << num2 << endl;
		cout << "你的结果为：" << dengyu << endl;
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	case 5: {
		cout << "计算方法：" << endl;
		cout << "1=直径计算周长" << endl;
		cout << "2=半径求周长" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 1: {
			cout << "输入直径:";
			cin >> zj;
			dengyu = PI * zj;
			cout << "您计算圆周长的方法为直径求周长:" << PI << "（取值到3.14）" << "*" << zj << endl;
			cout << "" << endl;
			cout << "这个圆形的周长为:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 2: {
			cout << "输入半径:";
			cin >> bj;
			dengyu = PI * bj * 2;
			cout << "您计算圆周长方法为半径求周长:" << "（Π取值到3.14）" << PI << "*" << bj << "*" << "2" << endl;
			cout << "" << endl;
			cout << "这个圆形的周长为:" << dengyu << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "你就乱输吧\n";
			system("pause");
			system("cls");
			goto yunsuan;
			break;

		}
		}

		break;
	}
	case 6: {
		cout << "请选择计算方法:" << endl;
		cout << "1=已知半径求面积" << endl;
		cout << "2=已知直径求面积" << endl;
		cin >> jisuanfangfa;
		switch (jisuanfangfa) {
		case 1: {
			cout << "请输入你已知的半径:";
			cin >> bj;
			cout << "" << endl;
			mj = PI * (bj * bj);
			cout << "面积为:" << mj << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 2: {
			cout << "请输入你已知的直径";
			cin >> zj;
			cout << "" << endl;
			mj = PI * (zj / 2) * (zj / 2);
			cout << "面积为:" << mj << endl;
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "你就乱输吧\n";
			system("pause");
			system("cls");
			goto yunsuan;
			break;
		}

				 break;
		}
	}
	case 7: {
		cout << "版本:" << Version << "公开测试版" << endl;
		cout << "版权所有:Jerry" << endl;
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	case 8: {
		cout << "请选择颜色\n";
		cout << "1=蓝色字体\n";
		cout << "2=绿色字体\n";
		cout << "3=浅绿字体(应该是浅蓝)\n";
		cout << "4=红色字体\n";
		cout << "5=紫色字体(蓝色)\n";
		cout << "6=黄色字体\n";
		cout << "7=白色字体\n";
		cout << "8=灰色字体\n";
		cout << "9=恢复默认\n";
		cin >> color;
		switch (color) {
		case 1: {
			system("color 1");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 2: {
			system("color 2");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 3: {
			system("color 3");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 4: {
			system("color 4");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 5: {
			system("color 1");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 6: {
			system("color 6");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 7: {
			system("color f");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 8: {
			system("color 8");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		case 9: {
			system("color 7");
			cout << "切换成功\n";
			system("pause");
			system("cls");
			goto kaishi;
			break;
		}
		default: {
			cout << "你就乱输把\n";
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
		cout << "你就乱输把\n";
		system("pause");
		system("cls");
		goto kaishi;
		break;
	}
	}






next:
	cout << "1=背景颜色设置\n";
	cout << "2=随机数\n";
	cout << "3=计算长方形或正方形的周长\n";
	cout << "4=计算长方形或正方形的面积\n";
	cout << "5=退出计算器\n";
	cout << "0=返回上一页\n";
	cout << "页面2/2\n";
	int nextinput = 0;
	cin >> nextinput;
	system("cls");
	int wallcolor = 0;
nextyunsuan:
	switch (nextinput) {
	case 1: {
		cout << "敬请期待...\n";
		system("pause");
		system("cls");
		goto next;
		break;
	}
	case 2: {
		cout << "即将加入...\n";
		system("pause");
		system("cls");
		goto next;
		/*long long rand1 = 0;
		long long rand2 = 0;
		cout << "请输入从哪个数开始:";
		cin >> rand1;
		cout << "\n";
		cout << "请输入从哪个数结束:";
		cin >> rand2;
		cout << "\n";*/

	}
	case 3: {
		cout << "请选择长方形或正方形(1/2)\n";
		short zc = 0;
		long double zhouchang = 0;
		cin >> zc;
		switch (zc) {
		case 1: {
			long double chang = 0;
			long double kuan = 0;
			cout << "输入长\n";
			cin >> chang;
			cout << "输入宽\n";
			cin >> kuan;
			zhouchang = (chang + kuan) * 2;
			cout << "周长为:" << zhouchang << endl;
			system("pause");
			system("cls");
			goto next;
			break;
		}
		case 2: {
			long double bc = 0;
			cout << "输入边长:";
			cin >> bc;
			cout << "\n";
			zhouchang = bc * 4;
			cout << "周长为:" << bc << "\n";
			break;
		}


		default: {
			cout << "错误数字\n";
			system("pause");
			system("cls");
			goto next;
			break;
		}
		}}

	case 4: {
		int mj = 0;
		long double mianji = 0;
		cout << "请选择计算面积的图形\n";
		cout << "1=长方形的面积计算\n";
		cout << "2=正方形的面积计算\n";
		cin >> mj;
		switch (mj) {
		case 1: {
			long double chang = 0;
			long double kuan = 0;
			cout << "请输入长:";
			cin >> chang;
			cout << "\n";
			cout << "请输入宽:";
			cin >> kuan;
			cout << "\n";
			mianji = chang * kuan;
			cout << "计算出的面积为:" << mianji << endl;
			system("pause");
			system("cls");
			goto next;
			break;
		}
		case 2: {
			long double chouchang = 0;
			cout << "请输入正方形的周长:";
			cin >> chouchang;
			cout << "\n";
			mianji = chouchang * chouchang;
			cout << "计算出来的面积为:" << mianji << endl;
			system("pause");
			system("cls");
			goto next;
			break;
		}
		}
	}
	case 5: {
		int quit = 0;
		cout << "您确定要退出吗？\n";
		cout << "0=点错了\n";
		cout << "1=确定\n";
		cout << "请输入:\n";
		cin >> quit;
		switch (quit) {
		case 0: {
			cout << "重启计算器中，您设置的字体颜色以及背景颜色都将恢复为默认...\n";
			system("pause");
			system("cls");
			goto chongqijisuanqi;
			break;
		}
		case 1: {
			cout << "再见,欢迎下次再次使用!\n";
			goto tuichu;
			break;
		}
		default: {
			cout << "错误数字\n";
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
		cout << "错误数字\n";
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

