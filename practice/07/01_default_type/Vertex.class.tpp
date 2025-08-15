/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.class.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:42:25 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/15 12:20:44 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename T = float>
class Vertex {
    public:
        Vertex(const T& x, const T& y, const T& z) : _x(x), _y(y), _z(z) {}
        ~Vertex(void) {}

        const T& getX(void) const { return this->_x; }
        const T& getY(void) const { return this->_y; }
        const T& getZ(void) const { return this->_z; }
    
    private:
        const T _x;
        const T _y;
        const T _z;

        Vertex(void);
};

template<typename T>
std::ostream& operator<<(std::ostream& o, const Vertex<T>& v) {
    o.precision(1);
    o << setiosflags(std::ios::fixed);
    o
        << "Vertex("
        << v.getX() << ", "
        << v.getY() << ", "
        << v.getZ() << ")";
    return o;
}