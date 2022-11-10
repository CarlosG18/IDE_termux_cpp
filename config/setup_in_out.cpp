#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(void){

	std::string s;

	std::ifstream input("../../name_class.txt");
	std::ofstream output1("class.h");
	std::ofstream output2("class.cpp");

	if(!input.is_open()){
		std::cout << "ERRO! /n";
	}


	while(fin.good()){
		fin >> s;

		output1 << "#ifndef " << s  << "_H" << std::endl;
                        output1 << "#define " << s << "_H\n\n";                                             output1 << "class " << s <
< "{\n   private:\n\n    public:\n       " << s << "();\n   ~" << s << "();\n};\n#endif";

                output2 << "#include \"" << s << ".h\"\n\
n" << s  << "::" << s << "(){\n\n}\
n" << s << "::~" << s << "(){\n\n}
";

	}
	output1.close();
	output2.close();

return 0;
}
