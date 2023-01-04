#include "ListContainer.cpp"
#include "SerialContainer.cpp"


void SerialContainerExample(){
    
    SerialContainer<std::string> cont;
    std::cout<<"Serial type container:"<<std::endl;
    for (int i=0; i<10; i++){
        cont.push_back("c");
    }
    size_t len;

    len = cont.size();
    cont.print();
    std::cout<<"Removal of 3rd, 5th and 7th element" <<std::endl;
    cont.erase(2);
    cont.erase(3);
    cont.erase(4);
    cont.print();
    std::string a = "10";
    std::cout<<"adding element 10 to the beginning of the container" <<std::endl;
    cont.insert(0,a);
    cont.print();
    std::cout<<"adding element 20 to the middle of the container" <<std::endl;
    cont.insert(len/2-1,a);
    cont.print();
    std::cout<<"adding element 30 to the end of the container" <<std::endl;

    cont.push_back("30");
    cont.print();
    std::cout<<cont[1];
    std::cout<<std::endl;
}
void ListContainerExample(){
    ListContainer<std::string> cont;
    std::cout<<"List type container:"<<std::endl;
    for (int i=0; i<10; i++){
        cont.push_back("c");
    }
    cont.print();
    size_t len = cont.size();
    std::cout<<"size = "<<cont.size()<<std::endl;
    std::cout<<"Removal of 3rd, 5th and 7th element" <<std::endl;
    cont.erase(2);
    cont.erase(3);
    cont.erase(4);
    cont.print();
    std::cout<<"adding element 10 to the beginning of the container" <<std::endl;
    cont.insert(0,"10");
    cont.print();
    std::cout<<"adding element 20 to the middle of the container" <<std::endl;
    cont.insert(len/2-1,"20");
    cont.print();
    std::cout<<"adding element 30 to the end of the container" <<std::endl;

    cont.push_back("30");
    cont.print();
    std::cout<<cont[1];
    std::cout<<std::endl;
}
int main(){

    //ListContainerExample();
    SerialContainerExample();

    return 0;
}

