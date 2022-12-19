#include <iostream>
#include <sstream>
using namespace std;

class Vector {
private:
    int m_capacity {0}; 
    int m_size {0};
    int *m_data {nullptr}; 

public:
    Vector(){
        this->m_capacity = 10;
        this->m_size = 0;
        this->m_data = new int[m_capacity];
    }

    Vector(int capacity){
        if(capacity <= 0) {
            this->m_capacity = 10;
        } else {
            this->m_capacity = capacity;
        }

        this->m_size = 0;
        this->m_data = new int[m_capacity];
    }

    ~Vector(){
        delete[] m_data;
    }

	int size() {
        return this->m_size;
	}

	int capacity() {
        return this->m_capacity;
	}

    Vector(Vector& other){ 
        this->m_capacity = other.m_capacity;
        this->m_size = other.m_size;
        this->m_data = new int[m_capacity];

        for(int i = 0; i < m_size; i++) {
            m_data[i] = other.m_data[i];
        }
    }

    const Vector& operator = (const Vector& other){
		if(this != &other) {
            this->m_capacity = other.m_capacity;
            this->m_size = other.m_size;

            if(this->m_data != nullptr) {
                delete[] m_data;
            }

            this->m_data = new int[other.m_capacity];
            
            for(int i = 0; i < m_size; i++) {
                m_data[i] = other.m_data[i];    
            }

		}

		return *this;
    }

    void push_back(int value){
        if(m_size == m_capacity) {
            m_capacity = m_capacity * 2;

            int *aux = new int[m_capacity];

            for(int i = 0; i < m_size; i++) {
                aux[i] = m_data[i];
            }

            delete[] m_data;
            m_data = aux;   
        }
            
        m_data[m_size] = value;
        m_size++;
    }

    int pop_back(){
        if(m_data == nullptr) {
            throw std::runtime_error("lista vazia"); 
        } else {
            int auxiliar;
            auxiliar = m_data[m_size - 1];
            m_size--;

            if(m_size < m_capacity / 2) {
                m_capacity = m_capacity / 2;
            }

            int *aux = new int[m_capacity];

            for(int i = 0; i < m_size; i++) {
                aux[i] = m_data[i];
            }

            delete[] m_data;
            m_data = aux; 

            return auxiliar;
        }
    }

    std::string toString(){
        string retorno;
        for(int i = 0; i < m_size; i++) {
            string aux(to_string(m_data[i]));
            retorno += aux + " "; 
        }

        return "[ " + retorno + "]";
    }
};