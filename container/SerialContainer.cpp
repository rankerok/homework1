#include <algorithm>
#include <iostream>
template <typename T>
class SerialContainer{
    public:

        SerialContainer(){
            m_capacity = 0;
            m_size = 0;
            m_temp = nullptr;
        }

        T operator[] (size_t val){
            return  m_temp[val];
        }

        void reserve(size_t val){
            T* new_temp = new T[val];
            std::copy(m_temp, m_temp+m_size, new_temp);
            delete[] m_temp;
            m_temp = new_temp;
        }

        void push_back(const T& val){
            if(m_size>= m_capacity){
                m_capacity+=1;
                reserve(m_capacity);
            }
            m_temp[m_size++] = val;

        }

        size_t size(){
            return m_size;
        }

        void erase(size_t val){
            
            for (val; val<m_size; val++){
                
                m_temp[val-1] = m_temp[val];
            }
            
            m_size--;
        }

        void insert(size_t pos, const T& val){
            m_size++;
            if (m_size>=m_capacity){
                m_capacity++;
                reserve(m_capacity);
            }
            
            for (size_t i = m_size; i>pos; i--){
                m_temp[i] = m_temp[i-1];
            }
            m_temp[pos] = val;

        }

        void print(){
            std::cout<<"elements are:"<<std::endl;
            for(size_t i=0; i<m_size; i++){
                std::cout<<m_temp[i]<<" ";
            }
            std::cout<<std::endl;
        }
        ~SerialContainer(){
            delete[] m_temp;
        };

    private:
        T* m_temp;
        size_t m_capacity;
        size_t m_size;
};
