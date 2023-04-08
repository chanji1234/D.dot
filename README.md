# D.dot
写代码的代码，实现快速排序，二分查找，字符串匹配和for和if的配合
本项目实现写代码的代码，用于C++，实现了快速排序、二分查找、字符串匹配和for和if的配合。
if(!flag3) {//开头     	fout << "#include <iostream>" << endl;
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
		if(!flag4) {//判断是字符串输入还是数字输入 			fout << "    int count = 0;" << endl;
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
这里是写入开头部分，通过flag的操作保证只会书写一次，并且判断是否为数字输入还是字符串输入。
flag3 = true;
    int flag2 = -1;
    for(int i = 0;temp[i] != '\0';++i) {//判断是哪种逻辑     	if(temp[i] == '>') {
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
判断是哪种逻辑，是排序还是二分查找还是字符串匹配还是for和if的配合。
if(flag2 == 1) {//快速排序 		fout << "    sort(a, a + count, greater<int>());" << endl; 
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
这两个是快速排序的输出
else if(flag2 == 3) {//二分查找 
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
这三个是二分查找
else if(flag2 == 6) {//字符串匹配 
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
这个是字符串匹配
else if(flag2 == 7) {//for和if的配合 
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
这个是for和if的配合
if(y == num3 - 1) {//结尾 
	    fout << "    fin.close();" << endl;
		fout << "    fout.close();" << endl;
        fout << "    return 0;" << endl;
        fout << "}" << endl;
	}	
这个是输出结尾
int main(int argc, char** argv) {
    fout.open("out.cpp");
	fin1.open("code.txt");
	fin2.open("in.txt");
	flag3 = false;
	count1 = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;
	for(num0 = 0;getline(fin2, a2[num0]);++num0){//读取文件 
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
	for(num = 0;getline(fin1, a1[num]);++num){//判断是哪一部分 
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
	if(temp[0] == 'n' || temp[0] == 'N') {//对逻辑进行处理 
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
以上是主函数
if(temp[0] == 'n' || temp[0] == 'N') {//没有输出的情况 
		fout << "#include <iostream>" << endl;
        fout << "using namespace std;" << endl;
        fout << "int main() {" << endl;
        fout << "    return 0;" << endl;
        fout << "}" << endl;
	}
这个是处理没有输出的情况
else {//有输出的情况 
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
这个是处理有输出的情况
实际操作如图：


#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <sstream>
using namespace std;
int main() {
    srand(time(NULL));
    ofstream fout;
    ifstream fin;
    stringstream stream;
    fout.open("o.txt");
    fin.open("in.txt");
    int a[10000];
    string b[10000];
    string temp;
    getline(fin, temp);
    temp += '\0';
    int count = 0;
    bool flag = false;
    for(int i = 0;temp[i] != '\0';++i) {
        if(temp[i] != ' '){
            b[count] += temp[i];
        }
        else if(temp[i] == ' ') {
            flag = true;
        }
        if(flag) {
            stream << b[count];
            stream >> a[count];
            stream.clear();
            ++count;
            flag = false;
        }
    }
    sort(a, a + count, greater<int>());
    for(int i = 0;i < count;++i) {
        fout << a[i] << ' ';
    }
    fout << endl;
    fin.close();
    fout.close();
    return 0;
}
得到代码
运行结果如图：

这里提示数组数据最后要以空格结尾。
然后是快速排序和二分查找的配合：
实际操作如图：


#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <sstream>
using namespace std;
int main() {
    srand(time(NULL));
    ofstream fout;
    ifstream fin;
    stringstream stream;
    fout.open("o.txt");
    fin.open("in.txt");
    int a[10000];
    string b[10000];
    string temp;
    getline(fin, temp);
    temp += '\0';
    int count = 0;
    bool flag = false;
    for(int i = 0;temp[i] != '\0';++i) {
        if(temp[i] != ' '){
            b[count] += temp[i];
        }
        else if(temp[i] == ' ') {
            flag = true;
        }
        if(flag) {
            stream << b[count];
            stream >> a[count];
            stream.clear();
            ++count;
            flag = false;
        }
    }
    sort(a, a + count, greater<int>());
    for(int i = 0;i < count;++i) {
        fout << a[i] << ' ';
    }
    fout << endl;
    int x = lower_bound(a, a + count, 1) - a;
    fout << x << endl;
    fin.close();
    fout.close();
    return 0;
}
得到代码

然后是字符串匹配：


#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <sstream>
using namespace std;
int main() {
    srand(time(NULL));
    ofstream fout;
    ifstream fin;
    stringstream stream;
    fout.open("o.txt");
    fin.open("in.txt");
    int a[10000];
    string b[10000];
    string temp;
    getline(fin, temp);
    temp += '\0';
    string str;
    for(int i = 0;i < temp.length() - 1;++i) {
        str += temp[i];
    }
    str += '\0';
    char str1[10000], str2[10000];
    int i;
    for(i = 0;temp[i] != '\0';++i) {
        str1[i] = temp[i];
    }
    str1[i] = '\0';
    for(i = 0;str[i] != '\0';++i) {
        str2[i] = str[i];
    }
    str2[i] = '\0';
    char* pos = strstr(str1, str2);
    fout << *pos << endl;
    fin.close();
    fout.close();
    return 0;
}
得到代码
运行结果如图：

然后是for和if的配合：

得到代码：
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <sstream>
using namespace std;
int main() {
    srand(time(NULL));
    ofstream fout;
    ifstream fin;
    stringstream stream;
    fout.open("o.txt");
    fin.open("in.txt");
    int a[10000];
    string b[10000];
    string temp;
    getline(fin, temp);
    temp += '\0';
for(;;) {
    if() {
        for(;;) {
            if() {
                for(;;) {
                }
            }
        }
    }
}
    fin.close();
    fout.close();
    return 0;
}
然后output还有none和有输出的情况，none我们直接选择输出空程序，有输出直接输出结果，不管逻辑。
none情况如图：

#include <iostream>
using namespace std;
int main() {
    return 0;
}
得到代码
有输出的情况如图：

得到代码：
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout;
    fout.open("o.txt");
    fout << "1 2 3 4
运行结果如图：

以上就是写代码的代码的全部内容了，希望能给各位C++的忠粉带来便利！

