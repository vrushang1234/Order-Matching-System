#include "../include/order_tree.hpp"

Node::Node(){
  left = nullptr;
  right = nullptr;
}

OrderTree::OrderTree(){
  size = 0;
}

void OrderTree::addOrder(Order order){
  if(size == 0){
    head.order = order;
    size++;
  }
  else{
    Node* curr = &head;
    while(curr){
      if(order.orderPrice < curr->order.orderPrice){
        if(curr->left == nullptr){
          curr->left = new Node();
          curr->left->order = order;
          break;
        }
        else{
          curr = curr->left;
        }
      }
      else {
        if(curr->right == nullptr){
          curr->right = new Node();
          curr->right->order = order;
          break;
        }
        else{
          curr = curr->right;
        }
      }
    } 
  }
}
