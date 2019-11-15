#pragma once

#include <SFML/Network/IpAddress.hpp>
#include "../types.h"

struct Endpoint
{
    sf::IpAddress address;
    port_t port;
};

inline bool operator==(const Endpoint& left, const Endpoint& right) 
{
    return left.port == right.port && left.address.toInteger() == right.address.toInteger();
}