#include "../include/order_tree.hpp"
#include <iostream>

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

void OrderTree::searchOrder(Order order){
  Node *curr = &head;
  while(curr != nullptr){
    if(curr->order.orderPrice == order.orderPrice){
      std::cout << "Order Found" << std::endl;
      return;
    }
    else if(curr->order.orderPrice <= order.orderPrice){
      curr = curr->right;
    }
    else{
      curr = curr->left;
    }
  }
  std::cout << "Order Not Found" << std::endl;
  return;
}

void OrderTree::showOrders(Node curr){
  if(curr.left || curr.right){
    if(curr.left){
      showOrders(*curr.left);
    }
    if(curr.right){
      showOrders(*curr.right);
    }
  }
  std::cout << "Order ID: " << curr.order.orderID << " Order Price: " << curr.order.orderPrice << std::endl; 
}
