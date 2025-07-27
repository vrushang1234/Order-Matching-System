#include "order.hpp"

struct Node{
  Node();
  Order order;
  Node* left;
  Node* right; 
};

struct OrderTree{
  public: 
    OrderTree();
    int size = 0;
    Node head;
    void addOrder(Order);
  private:
    void removeOrder();
    void searchOrder();
};

