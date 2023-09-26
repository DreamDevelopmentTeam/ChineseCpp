#ifndef CPPCN_LIBRARY_H
#define CPPCN_LIBRARY_H

void hello();

#endif //CPPCN_LIBRARY_H

// chinese.h
// 将所有C++ 17关键字声明为中文宏
#define 空值 void
#define 无符号 unsigned
#define 类 class
#define 有符号 signed
#define 布尔 bool
#define 短 short
#define 整型 int
#define 长 long
#define 双精度 double
#define 浮点 float
#define 字符 char
#define 字符串 string
#define 常量 const
#define 友元 friend
#define 虚拟 virtual
#define 内联 inline
#define 静态 static
#define 公共 public
#define 私有 private
#define 保护 protected
#define 枚举 enum
#define 结构体 struct
#define 联合体 union
#define 命名空间 namespace
#define 使用 using
#define 抛出 throw
#define 捕获 catch
#define 尝试 try
#define 新 new
#define 删除 delete
#define 返回 return
#define 继承 :
#define 大于 >
#define 小于 <
#define 等于 =
#define 不等于 !=
#define 与 &&
#define 或 ||
#define 非 !

#define 主函数 main

// 新增的宏定义

// 用于表示条件判断或者循环控制的语句关键字

// 例如：如果（条件）{语句}否则{语句}
// 等价于：if(condition){statement}else{statement}
// 例如：当（条件）{语句}
// 等价于：while(condition){statement}
// 例如：做{语句}直到（条件）
// 等价于：do{statement}while(condition)
// 例如：对于（整型 i = 0，i < n，i++）{语句}
// 等价于：for(int i = 0;i < n;i++){statement}
// 例如：开关（表达式）{情况 值１：语句；跳出；情况 值２：语句；跳出；默认：语句；跳出；}
// 等价于：switch(expression){case value1:statement;break;case value2:statement;break;default:statement;break;}
// 注意：跳出是用来结束开关或者循环的语句，等价于break。如果不写跳出，会导致情况穿透。
// 注意：默认是用来表示开关中没有匹配到任何情况时执行的语句，等价于default。如果不写默认，会导致开关无效。
// 注意：情况是用来表示开关中每个可能的值，等价于case。如果不写情况，会导致开关空白。
// 注意：对于循环控制条件中的分号，请使用英文半角分号或者中文全角逗号，不要使用中文全角分号。
// 参见上面的中文全角逗号和分号宏定义。

#define 如果 if
#define 否则 else
#define 当 while
#define 做 do
#define 直到 while // 注意这里直到和当是一样的，只是为了方便理解do-while循环的逻辑。
#define 对于 for
#define 开关 switch
#define 情况 case
#define 默认 default
#define 跳出 break
#define 继续 continue
#define 去 goto

// 用于表示递增或者递减运算符

// 例如：整型 变量 = 0；
// 变量自增；
// 等价于：int variable = 0;
// variable++;
// 例如：整型 变量 = 10；
// 变量自减；
// 等价于：int variable = 10;
// variable--;

#define 自增 ++
#define 自减 --

// 用于表示赋值运算符

// 例如：整型 变量１ = 10；
// 整型 变量２ = 20；
// 变量１ 加等于 变量２；
// 等价于：int variable1 = 10;
// int variable2 = 20;
// variable1 += variable2;

#define 加等于 +=
#define 减等于 -=
#define 乘等于 *=
#define 除等于 /=
#define 取余等于 %=
#define 与等于 &=
#define 或等于 |=
#define 异或等于 ^=
#define 左移等于 <<=
#define 右移等于 >>=

// 用于表示位运算符

// 例如：整型 变量１ = 0b1010；
// 整型 变量２ = 0b1100；
// 整型 变量３ = 变量１ 按位与 变量２；
// 等价于：int variable1 = 0b1010;
// int variable2 = 0b1100;
// int variable3 = variable1 & variable2;

#define 按位与 &
#define 按位或 |
#define 按位异或 ^
#define 按位非 ~
#define 左移 <<
#define 右移 >>

// 用于表示逻辑运算符

// 例如：布尔 条件１ = 真；
// 布尔 条件２ = 假；
// 布尔 结果 = 条件１ 逻辑与 条件２；
// 等价于：bool condition1 = true;
// bool condition2 = false;
// bool result = condition1 && condition2;

#define 真 true
#define 假 false
#define 逻辑与 &&
#define 逻辑或 ||
#define 逻辑非 !

// 用于表示关系运算符

// 例如：整型 变量１ = 10；
// 整型 变量２ = 20；
// 布尔 结果 = 变量１ 小于等于 变量２；
// 等价于：int variable1 = 10;
// int variable2 = 20;
// bool result = variable1 <= variable2;

#define 小于 <
#define 大于 >
#define 小于等于 <=
#define 大于等于 >=
#define 等于 ==
#define 不等于 !=


// 将中文符号声明为宏，使得中文全角符号可以替代代码中的英文半角符号

// 中文全角逗号，替代英文半角逗号，
// 用于分隔函数参数、数组元素等。
// 例如：void 函数（整型 参数１，布尔 参数２）
// 等价于：void function(int param1, bool param2)
// 注意：中文全角逗号不能用于初始化列表，如int a[] = {1，2，3}是错误的。
// 应该使用英文半角逗号，如int a[] = {1,2,3}
// 或者使用中文全角分号，如int a[] = {1；2；3}
// 参见下面的中文全角分号宏定义。
#define ， ,

// 中文全角分号，替代英文半角分号，
// 用于结束一条语句或者分隔初始化列表元素。
// 例如：整型 变量 = 10；
// 等价于：int variable = 10;
// 例如：整型 数组[] = {1；2；3}；
// 等价于：int array[] = {1;2;3};
// 注意：中文全角分号不能用于for循环的控制条件，如for（i = 0；i < n；i++）是错误的。
// 应该使用英文半角分号，如for(i = 0;i < n;i++)
// 或者使用中文全角逗号，如for（i = 0，i < n，i++）
// 参见上面的中文全角逗号宏定义。
#define ； ;

// 中文全角冒号，替代英文半角冒号，
// 用于表示继承关系或者作为三目运算符的一部分。
// 例如：类 子类 内联 继承 父类；
// 等价于：class subclass inline : parent;
// 例如：布尔 条件？真值：假值；
// 等价于：bool condition?true:false;
// 注意：中文全角冒号不能用于标签、作用域解析符或者位域声明，如void 函数（）{ 标签１：语句１；标签２：语句２；}是错误的。
// 应该使用英文半角冒号，如void function(){ label1:statement1;label2:statement2;}
// 或者使用其他方式重写代码，避免使用标签和goto语句。
#define ： :

// 中文全角问号，替代英文半角问号，
// 用于作为三目运算符的一部分。
// 例如：布尔 条件？真值：假值；
// 等价于：bool condition?true:false;
// 注意：中文全角问号不能用于条件编译指令或者模板参数声明，如#ifdef 条件？是错误的。
// 应该使用英文半角问号，如#ifdef condition?
// 或者使用其他方式重写代码，避免使用条件编译指令。
#define ？ ?

// 中文全角句号，替代英文半角句号，
// 用于访问类或结构体的成员或者调用函数。
// 例如：对象．成员；
// 等价于：object.member;
// 例如：函数（参数）．返回值；
// 等价于：function(param).return_value;
// 注意：中文全角句号不能用于表示浮点数或者作为文件扩展名的一部分，如浮点 变量 = 3．14是错误的。
// 应该使用英文半角句号，如float variable = 3.14
// 或者使用科学计数法，如float variable = 3.14E0
#define ． .

// 中文全角加号，替代英文半角加号，
// 用于表示算术加法或者字符串连接。
// 例如：整型 变量１ = 变量２ ＋ 变量３；
// 等价于：int variable1 = variable2 + variable3;
// 例如：字符串 变量４ = 变量５ ＋ 变量６；
// 等价于：string variable4 = variable5 + variable6;
#define ＋ +

// 中文全角减号，替代英文半角减号，
// 用于表示算术减法或者负号。
// 例如：整型 变量１ = 变量２ － 变量３；
// 等价于：int variable1 = variable2 - variable3;
// 例如：整型 变量４ = － 变量５；
// 等价于：int variable4 = - variable5;
#define － -

// 中文全角乘号，替代英文半角乘号，
// 用于表示算术乘法。
// 例如：整型 变量１ = 变量２ ＊ 变量３；
// 等价于：int variable1 = variable2 * variable3;
#define ＊ *

// 中文全角除号，替代英文半角除号，
// 用于表示算术除法。
// 例如：整型 变量１ = 变量２ ／ 变量３；
// 等价于：int variable1 = variable2 / variable3;
#define ／ /

// 中文全角百分号，替代英文半角百分号，
// 用于表示算术取余。
// 例如：整型 变量１ = 变量２ ％ 变量３；
// 等价于：int variable1 = variable2 % variable3;
#define ％ %

//#define 《 <
//#define 》 >
//#define “ '"'
//#define ” '"'
//#define ‘ "'"
//#define ’ "'"

