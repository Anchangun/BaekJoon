#include<iostream>

bool gather_check(const char& c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
    c=='A'||c=='E'||c=='I'||c=='O'||c=='U')?true :false;
}

int main(){
    std::string user_data;
    
    while(1){
        int cnt= 0;
        getline(std::cin, user_data);
        if((user_data.compare("#")==0)||user_data.length()>255){
            return 0;
        }         
        char* temp = const_cast<char*>(user_data.c_str());
        for(int i= 0;i<user_data.length();i++){
            if(gather_check(temp[i])==true){
                cnt ++;
            } 
        }
        std::cout<< cnt<< std::endl;
    }
    return 0;
}
