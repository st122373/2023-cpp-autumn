#include <iostream>

struct Node
{
    int data;
    Node* next;
    Node(int data, Node* next = nullptr) : data(data), next(next) {}
    Node(const Node& node) : data(node.data), next(nullptr) {}
    ~Node(){data = 0; next = nullptr;}
    friend std::ostream& operator<<(std::ostream& stream, Node*& node)
    {
        stream << node->data << " ";
        return stream;
    }
};

class LinkedList
{
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() { dispose(); }
    int Length();
    bool IsEmpty();
    void PushHead(int data);
    int PopHead();
    void PushTail(int data);
    int PopTail();
    void Insert(int index, int data);
    int Extract(int index);
    int Data(int index);
    void swap(int ia, int ib);
    void sort();
    friend std::ostream& operator<<(std::ostream& stream, const LinkedList& list);

private:
    Node* head;
    Node* ExtractNode(int index);
    void dispose();
    void InsertNode(int index, Node* node);
    int PopData(Node* node); // извлекает данные из ноды и удаляет саму ноду
    bool IndexValid(int index);
};

int main(int argc, char* argv[])
{
    LinkedList list;
    std::cout << list << std::endl;
    list.PushHead(1);
    std::cout << list << std::endl;
    list.PushTail(3);
    std::cout << list << std::endl;
    list.Insert(1, 2);
    std::cout << list << std::endl;
    list.Insert(3, 4);
    std::cout << list << std::endl
        << std::endl;
    std::cout << list << std::endl;
    std::cout << list.PopHead() << " ";
    std::cout << list.Extract(1) << " ";
    std::cout << list.PopTail() << " ";
    std::cout << list.Extract(0) << std::endl;
    std::cout << list << std::endl
        << std::endl;
    list.PushHead(3);
    list.PushHead(4);
    list.PushHead(1);
    list.PushHead(2);
    list.PushHead(7);
    list.PushHead(5);
    list.PushHead(8);
    list.PushHead(6);
    std::cout << list << std::endl;
    list.sort();
    std::cout << list << std::endl;
    return EXIT_SUCCESS;
}

int LinkedList::Length()
{
    int len = 0;
    Node* tmp = head;
    while (tmp != nullptr)
    {
        tmp = tmp->next;
        ++len;
    }
    return len;
}

bool LinkedList::IsEmpty()
{
    return head == nullptr; 
}

void LinkedList::PushHead(int data)
{
    Node* node = new Node(data);
    InsertNode(0, node);
}

int LinkedList::PopHead()
{
    return PopData(ExtractNode(0));
}

void LinkedList::PushTail(int data)
{
    Node* node = new Node(data);
    InsertNode(Length(), node);
}

int LinkedList::PopTail()
{
    return PopData(ExtractNode(Length() - 1));
}

void LinkedList::Insert(int index, int data)
{
    Node* node = new Node(data);
    InsertNode(index, node);
}

int LinkedList::Extract(int index)
{
    return PopData(ExtractNode(index));
}

int LinkedList::Data(int index)
{
    if (!IndexValid(index) || (Length() - 1 < index))
    {
        return -1;
    }
    Node* tmp = head;
    for (int i = 0; i < index; ++i)
    {
        tmp = tmp->next;
    }
    int res = tmp->data;
    return res;
}

void LinkedList::swap(int ia, int ib)
{
    if (!IndexValid(ia) || !IndexValid(ib) || ia == ib)
    {
        return;
    }
    if (ia > ib)
    {
        int tmp = ib;
        ib = ia;
        ia = tmp;
    }
    Node* nodeB = ExtractNode(ib);
    Node* nodeA = ExtractNode(ia);
    if (nodeA == nullptr || nodeB == nullptr)
    {
        return;
    }
    InsertNode(ia, nodeB);
    InsertNode(ib, nodeA);
}

void LinkedList::sort()
{
    for (int i = 0; i < Length(); i++)
    {
        for (int j = 0; j < Length() - 1; j++)
        {
            if (Data(j) > Data(j + 1))
            {
                swap(j, j + 1);
            }
        }
    }
}

bool LinkedList::IndexValid(int index)
{
    if (index < 0 || index > Length())
    {
        return false;
    }
    return true;
}

void LinkedList::dispose()
{
    while (!IsEmpty())
    {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

void LinkedList::InsertNode(int index, Node* node)
{
    if (!IndexValid(index))
    {
        return;
    }
    if (index == 0)
    {
        node->next = head;
        head = node;
        return;
    }
    if (index == Length())
    {
        Node* tmp = head;
        while (tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = node;
        return;
    }
    if (index < Length())
    {
        Node* tmp = head;
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        node->next = tmp->next;
        tmp->next = node;
        return;
    }
}

int LinkedList::PopData(Node* node)
{
    if (node == nullptr)
    {
        return 0;
    }
    int res = node->data;
    delete node;
    return res;
}

Node* LinkedList::ExtractNode(int index)
{
    if (!IndexValid(index))
    {
        return nullptr;
    }
    if (index == 0)
    {
        Node* tmp = head;
        head = head->next;
        return tmp;
    }
    if (index == Length() - 1)
    {
        Node* tmp = head;
        while (tmp->next->next != nullptr)
        {
            tmp = tmp->next;
        }
        Node* res = tmp->next;
        tmp->next = nullptr;
        return res;
    }
    if (index < Length())
    {
        Node* tmp = head;
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        Node* res = tmp->next;
        tmp->next = tmp->next->next;
        return res;
    }
    return nullptr;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
    Node* tmp = list.head;
    while (tmp != nullptr)
    {
        stream << tmp << " ";
        tmp = tmp->next;
    }
    return stream;
}