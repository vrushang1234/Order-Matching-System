enum OrderType{
  SELL,
  BUY
};

struct Order{
  int orderID = 0;
  int address = 0;
  float orderPrice = 0;
  OrderType ordertype;
};
