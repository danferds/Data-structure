/************************************************************************
 * Arquivo de implementacao da classe ForwardList
 * No final deste arquivo existem algumas funcoes que estao incompletas 
 * e voce precisa implementa-las para concluir a atividade
 ************************************************************************/
#include <vector>
#include <stdexcept>
#include <string>
#include "Node.h"
#include "ForwardList.h"

/***************************************************
 * Implementacao das funcoes-membro da classe
 ***************************************************/

ForwardList::ForwardList() {
    m_head = new Node(0, nullptr);
    m_size = 0;
}

ForwardList::ForwardList(const ForwardList& lst) {
    m_head = new Node(0, nullptr);
    m_size = lst.m_size;
    Node *lstCurrent = lst.m_head->next;
    Node *thisLast = m_head;
    while(lstCurrent != nullptr) {
        thisLast->next = new Node(lstCurrent->value, nullptr);
        lstCurrent = lstCurrent->next;
        thisLast = thisLast->next;
    }
}

bool ForwardList::empty() const {
    return m_head->next == nullptr;
}

int ForwardList::size() const {
    return m_size;
}

void ForwardList::clear() {
    while(m_head->next != nullptr) {
        Node *aux = m_head->next;
        m_head->next = aux->next;
        delete aux;
    }
    m_size = 0;
}

ForwardList::~ForwardList() {
    clear();
    delete m_head;
}

Item& ForwardList::operator[](int index) {
    int count = 0;
    Node *current = m_head->next;
    while(count < index) {
        current = current->next;
        count++;
    }
    return current->value;
}

const Item& ForwardList::operator[](int index) const {
    int count = 0;
    Node *current = m_head->next;
    while(count < index) {
        current = current->next;
        count++;
    }
    return current->value;
}

void ForwardList::insert_at(int index, const Item& val) {
    int count = 0;
    Node *current = m_head;
    while(count < index) {
        current = current->next;
        count++;
    }
    Node *newNode = new Node(val, current->next);
    current->next = newNode;
    m_size++;
}

void ForwardList::remove_at(int index) {
    int count = 0;
    Node *current = m_head;
    while(count < index) {
        current = current->next;
        count++;
    }
    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
    m_size--;
}

std::string ForwardList::toString() {
    std::string str = "[ ";
    Node *ptr = m_head->next;
    while(ptr != nullptr) {
        str += std::to_string(ptr->value) + " ";
        ptr = ptr->next;
    }
    str += "]";
    return str;
}

/***********************************************************
 * Funcoes adicionais - Parte 1
 ***********************************************************/

Item& ForwardList::front() {
    return m_head->value;        
}

const Item& ForwardList::front() const {
    return m_head->value;        
}
    
void ForwardList::push_front(const Item& val) {
    Node* valor = new Node(0, nullptr);
    m_head-> = valor;
    m_size++;
}

void ForwardList::pop_front() {
    Node *aux;

    if(m_head != nullptr) {
        aux = m_head;
        m_head = aux->next;
        delete aux;
    }
}

Item& ForwardList::back() {
    // fazer
}

const Item& ForwardList::back() const {
    // fazer
}
    
void ForwardList::push_back(const Item& val) {
    Node *no, *auxiliar = new Node(0, nullptr);

    if(no == nullptr) {
        return;
    } else {
        no->value = val;

        if(m_head = nullptr) {
            no->next = nullptr;
            m_head = no;
        } else {
            auxiliar = m_head;

            while (auxiliar->next != nullptr) {
                auxiliar = auxiliar->next;
            }

            auxiliar->next = no;
            no->next = nullptr;
            
        }
    }

}

void ForwardList::pop_back() {
    Node *aux, *auxiliar;

    if(m_head == nullptr) {
        return;
    } else if(m_head->next == nullptr) {
        m_head = nullptr;
        delete m_head;
    } else {
        aux = m_head;

        while (aux->next != nullptr) {
            auxiliar = aux;
            aux = aux->next;
        }

        auxiliar->next = nullptr;
        delete aux;
    }
}
