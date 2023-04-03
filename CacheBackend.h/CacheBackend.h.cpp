#pragma once

#include <vector>
#include <string>
#include "OrderCache.h"

class CacheBackend
{
public:

	virtual void add(Order order) = 0;
	virtual void remove(const std::string& orderId) = 0;

	virtual Order get(const std::string& orderId) = 0; // refresh order
	virtual void update(Order order) = 0; // update order

	//getters
	virtual std::vector<Order> getOrders() const = 0;
	virtual std::vector<Order> getOrdersBySecurity(const std::string& securityId) = 0;
	virtual std::vector<Order> getOrdersByCompany(const std::string& company) = 0;
	virtual std::vector<Order> getOrdersByUser(const std::string& user) = 0;

};
