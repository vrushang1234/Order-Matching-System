#include "../include/order_tree.hpp"
#include <vector>
#include <iostream>

int main(){
  OrderTree buyOrders,sellOrders;
  
 std::vector<Order> orders = {
    {0, 1, 50, SELL},
    {1, 2, 100, BUY},
    {2, 3, 75, SELL},
    {3, 4, 60, BUY},
    {4, 5, 90, SELL},
    {5, 6, 40, BUY},
    {6, 7, 110, SELL},
    {7, 8, 30, BUY},
    {8, 9, 120, SELL},
    {9, 10, 20, BUY}
};

for (const auto& order : orders) {
    if(order.ordertype==SELL){
      sellOrders.addOrder(order);
    }
    else{
      buyOrders.addOrder(order);
    }
}

Order findOrder = {10,11,50, BUY};
Order findOrder2 = {11,12,50,SELL};

  std::cout << "Buy Orders:" << std::endl; 
  buyOrders.showOrders(buyOrders.head);
  std::cout << "Sell Orders:" << std::endl;
  sellOrders.showOrders(sellOrders.head);

  std::cout<< "Finding order: "<< std::endl;
  sellOrders.searchOrder(findOrder);
  buyOrders.searchOrder(findOrder2);

}
