#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(void){

	std::string classe[50];

	std::ifstream input("../../name_class.txt");
	std::ofstream output1("class.h");
	std::ofstream output2("class.cpp");

	if(input.is_open()){
		getline(input,classe[0]);
		input.close();
		output1 << "#ifndef " << classe[0] << "_H" << std::endl;                                                    output1 << "#define " << classe[0] << "_H\n\n";
        	output1 << "class " << classe[0] << "{\n   private:\n\n    public:\n       " << classe[0] << "();\n   ~" << classe[0] << "();\n};\n#endif";

		output2 << "#include \"" << classe[0] << ".h\"\n\
n" << classe[0] << "::" << classe[0] << "(){\n\n}\n" << classe[0] << "::~" << classe[0] << "(){\n\n}";
	}else{
		std::cout << "nao foi possivel abrir o arquivo" << std::endl;
	}	 

	output1.close();
	output2.close();

return 0;
}
