#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(void){

	std::string s[50];
	std::string id;
	std::string h;
	std::string cpp;

	h = ".h";
	cpp = ".cpp";

	std::ifstream input("../../name_class.txt");
	std::ofstream output[50];

	if(!input.is_open()){
		std::cout << "ERRO! /n";
	}

	int ids = 0;
	int i =0;
	int p =1;


	while(input.good()){
		input >> id;

		if(id.compare(std::to_string(ids)) == 0){
			input >> s[ids];
			output[i].open(s[ids]+h);
			output[p].open(s[ids]+cpp);
			output[i] << "#ifndef " << s[ids]  << "_H" << std::endl;                                              output[i] << "#define " << s[ids] << "_H\n\n";      
			output[i] << "class " << s[ids] << "{\n   private:\n\n  public:\n" << s[ids] << "();\n   ~" << s[ids] << "();\n};\n#endif";
                output[p] << "#include \"" << s[ids] << ".h\"" << std::endl;
		output[p] << "#include \"" << s[ids] << ".h\"" << std::endl;
		output[p] << s[ids] << "::" << s[ids] << "(){\n\n}" << std::endl;                                         output[p] << s[ids] << "::~" << s[ids] << "(){\n\n}";

			output[i].close();                                output[p].close();
		}
		ids++;
		i = i + 2;
		p = p + 2;

	}

return 0;
}
