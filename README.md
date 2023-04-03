# CacheBackend.h
This code defines an abstract class CacheBackend which is a generic interface for a cache implementation. The class has pure virtual functions (marked with "= 0"), which means that any concrete implementation of this class must provide an implementation for these functions.

It has pure virtual functions for adding, removing, getting, and updating orders in the cache, as well as getter functions for retrieving orders based on different criteria such as security ID, company, and user.

The add function takes an Order object and adds it to the cache. The remove function takes an order ID and removes the order with that ID from the cache. The get function takes an order ID and returns the Order object with that ID after refreshing it from the backend storage if necessary. The update function takes an Order object and updates it in the cache.

The getter functions return vectors of Order objects based on different criteria. getOrders returns all orders in the cache, while getOrdersBySecurity, getOrdersByCompany, and getOrdersByUser return orders filtered by the corresponding field.
