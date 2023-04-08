#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <windows.h> 
#include <fstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int flag;
bool flag3;
string search1, search2, search3;
int count1, count2;
string a1[100000];
string a2[100000];
string a3[100000];
string logic[100000];
string input[100000];
string output[100000];
string temp;
int num, num0, num2, num3, num4;
ifstream fin1, fin2;
ofstream fout;

void out1(){
    if(temp[0] == 'n' || temp[0] == 'N') {//û���������� 
		fout << "#include <iostream>" << endl;
        fout << "using namespace std;" << endl;
        fout << "int main() {" << endl;
        fout << "    return 0;" << endl;
        fout << "}" << endl;
	}
	else {//���������� 
		fout << "#include <iostream>" << endl;
		fout << "#include <fstream>" << endl;
        fout << "using namespace std;" << endl;
        fout << "int main() {" << endl;
        fout << "    ofstream fout;" << endl;
        fout << "    fout.open(\"o.txt\");" << endl;
        fout << "    fout << \"" << temp << "\";" << endl;
        fout << "    fout.close();" << endl;
        fout << "    return 0;" << endl;
        fout << "}" << endl;
	}
}
void out2(const int y) {//�����߼��������� 
	if(!flag3) {//��ͷ 
    	fout << "#include <iostream>" << endl;
    	fout << "#include <fstream>" << endl;
    	fout << "#include <algorithm>" << endl;
    	fout << "#include <string>" << endl;
		fout << "#include <string.h>" << endl;
    	fout << "#include <cstdlib>" << endl;
    	fout << "#include <ctime>" << endl;
    	fout << "#include <cmath>" << endl;
    	fout << "#include <sstream>" << endl;
        fout << "using namespace std;" << endl;
        fout << "int main() {" << endl;
        fout << "    srand(time(NULL));" << endl;
        fout << "    ofstream fout;" << endl;
        fout << "    ifstream fin;" << endl;
        fout << "    stringstream stream;" << endl;
        fout << "    fout.open(\"o.txt\");" << endl;
        fout << "    fin.open(\"in.txt\");" << endl;
        fout << "    int a[10000];" << endl;
        fout << "    string b[10000];" << endl;
    	fout << "    string temp;" << endl;
        fout << "    getline(fin, temp);" << endl;
        fout << "    temp += '\\0';" << endl;
		bool flag4 = false;			
		for(int i = 0;temp[i] != '\0';++i) {
			if(temp[i] == '\"' || temp[i] == 'f' || temp[i] == 'F' || temp[i] == 'i' || temp[i] == 'I' ) {
				flag4 = true;
				break;
			}
		}
		if(!flag4) {//�ж����ַ������뻹���������� 
			fout << "    int count = 0;" << endl;
			fout << "    bool flag = false;" << endl;
			fout << "    for(int i = 0;temp[i] != '\\0';++i) {" << endl;
			fout << "        if(temp[i] != ' '){" << endl;
			fout << "            b[count] += temp[i];" << endl;
			fout << "        }" << endl;
			fout << "        else if(temp[i] == ' ') {" << endl; 	
			fout << "            flag = true;" << endl; 	
			fout << "        }" << endl;
			fout << "        if(flag) {" << endl;	
			fout << "            stream << b[count];" << endl;			
			fout << "            stream >> a[count];" << endl;
			fout << "            stream.clear();" << endl;
			fout << "            ++count;" << endl;
			fout << "            flag = false;" << endl;
      	 	fout << "        }" << endl;
			fout << "    }" << endl;
		}
		else {
			
		}
	}
	flag3 = true;
    int flag2 = -1;
    for(int i = 0;temp[i] != '\0';++i) {//�ж��������߼� 
    	if(temp[i] == '>') {
    		flag2 = 1;
    		break;
		}
		else if(temp[i] == '<') {
			flag2 = 2;
			break;
		}
		else if(temp[i] == 'l' || temp[i] == 'L') {
			flag2 = 3;
			search1 = temp[i + 10];
			break;
		}
		else if(temp[i] == 'u' || temp[i] == 'U') {
			flag2 = 4;
			search2 = temp[i + 10];
			break;
		}
		else if(temp[i] == 'b' || temp[i] == 'B') {
			flag2 = 5;
			search3 = temp[i + 12];
			break;
		}
		else if(temp[i] == '\"') {
			flag2 = 6;
			break;
		}
		else if(temp[i] == 'f' || temp[i] == 'F' || temp[i] == 'i' || temp[i] == 'I' ) {
			flag2 = 7;
			break;
		}
	}
	if(flag2 == 1) {//�������� 
		fout << "    sort(a, a + count, greater<int>());" << endl; 
		fout << "    for(int i = 0;i < count;++i) {" << endl;
		fout << "        fout << a[i] << ' ';" << endl;
		fout << "    }" << endl;
		fout << "    fout << endl;" << endl;
	}
	else if(flag2 == 2) {
		fout << "    sort(a, a + count, less<int>());" << endl; 
		fout << "    for(int i = 0;i < count;++i) {" << endl;
		fout << "        fout << a[i] << ' ';" << endl;
		fout << "    }" << endl;
		fout << "    fout << endl;" << endl;
	}
	else if(flag2 == 3) {//���ֲ��� 
		fout << "    int x = lower_bound(a, a + count, " << search1 << ") - a;" << endl;
		fout << "    fout << x << endl;" << endl;
	}
	else if(flag2 == 4) {
		fout << "    int y = upper_bound(a, a + count, " << search2 << ") - a;" << endl;
		fout << "    fout << y << endl;" << endl;

	}
	else if(flag2 == 5) {
		fout << "    bool z = binary_search(a, a + count, " << search3 << ");" << endl;
		fout << "    fout << z << endl;" << endl;
		
	}	
	else if(flag2 == 6) {//�ַ���ƥ�� 
		fout << "    string str;" << endl;
		fout << "    for(int i = 0;i < temp.length() - 1;++i) {" << endl;
		fout << "        str += temp[i];" << endl;
		fout << "    }" << endl;
		fout << "    str += '\\0';" << endl;
		fout << "    char str1[10000], str2[10000];" << endl;
  		fout << "    int i;" << endl;
        fout << "    for(i = 0;temp[i] != '\\0';++i) {" << endl;
    	fout << "        str1[i] = temp[i];" << endl;
	    fout << "    }" << endl;
	    fout << "    str1[i] = '\\0';" << endl;
	    fout << "    for(i = 0;str[i] != '\\0';++i) {" << endl;
    	fout << "        str2[i] = str[i];" << endl;
	    fout << "    }" << endl;
	    fout << "    str2[i] = '\\0';" << endl;
        fout << "    char* pos = strstr(str1, str2);" << endl;
        fout << "    fout << *pos << endl;" << endl;
	}	
	else if(flag2 == 7) {//for��if����� 
		int c = 0;
		for(int i = 0;i < temp.length();++i) {
			if(temp[i] == 'f' || temp[i] == 'F') {
				for(int j = 0;j < c;++j) {
			        fout << "    ";
		        }
				fout << "for(;;) {" << endl;
				i += 2;
				++c;
			}
			else if(temp[i] == 'i' || temp[i] == 'I') {
				for(int j = 0;j < c;++j) {
			        fout << "    ";
		        }
				fout << "if() {" << endl;
				i += 1; 
				++c;
			}
		}
		int sum = c - 1;
		for(int i = 0;i < c;++i) {
			for(int j = sum;j > 0;--j) {
			        fout << "    ";
		    }
		    --sum;
			fout << "}" << endl;
		}
	}
	if(y == num3 - 1) {//��β 
	    fout << "    fin.close();" << endl;
		fout << "    fout.close();" << endl;
        fout << "    return 0;" << endl;
        fout << "}" << endl;
	}		
}
int main(int argc, char** argv) {
    fout.open("out.cpp");
	fin1.open("code.txt");
	fin2.open("in.txt");
	flag3 = false;
	count1 = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;
	for(num0 = 0;getline(fin2, a2[num0]);++num0){//��ȡ�ļ� 
		a2[num0] += '\0';
		temp = a2[num0];
		count2 = 0;
		for(int i = 0;temp[i] != '\0';++i) {
			if(temp[i] != ' '){
				a3[count2] += temp[i];
				++count2;
			} 
		}
	}
	for(num = 0;getline(fin1, a1[num]);++num){//�ж�����һ���� 
		a1[num] += '\0';
		temp = a1[num];
		flag = -1;
		for(int i = 0;i < temp.length();++i) {
			if(temp[i] == '#') {
				flag = 0;
				break;
			}
			else if(temp[i] == 'l' || temp[i] == 'L') {
				flag = 2;
				break;
			}
			else if(temp[i] == 'o' || temp[i] == 'O') {
				flag = 3;
				break;
			}
	    }
	    if(flag == 0) {
	    	continue;
		}
		else if(flag == 2) {
			for(int i = 0;temp[i] != ':';++i) {
				count1 = i;
			}
			++count1;
			++count1;
			for(;temp[count1] != '\0';++count1){
				logic[num3] += temp[count1];
			} 
			logic[num3]+= '\0';
			++num3;
		}
		else if(flag == 3) {
			for(int i = 0;temp[i] != ':';++i) {
				count1 = i;
			}
			++count1;
			++count1;
			for(;temp[count1] != '\0';++count1){
				output[num4] += temp[count1];
			} 
			output[num4] += '\0';
			++num4;
		}
		
	}
	temp = output[0];
	if(temp[0] == 'n' || temp[0] == 'N') {//���߼����д��� 
		out1();
	}
	else if(temp[0] == 'r' || temp[0] == 'R'){
		for(int i = 0;i < num3;++i) {
			temp = logic[i];
			out2(i);
		}
	}
	else {
		out1();
	}
	
	fin1.close();
	fin2.close();
	fout.close();
	return 0;
}
