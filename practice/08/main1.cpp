/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:33:08 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/18 16:50:35 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation {};
class OperationA: public IOperation {};
class OperationB: public IOperation {};

int main(void) {
    std::list<int> lst1;
    std::map<std::string, IOperation*> map1;
    std::vector<int> v1;
    std::vector<int> v2(42, 100);

    lst1.push_back(1);
    lst1.push_back(17);
    lst1.push_back(42);

    map1["opA"] = new OperationA;
    map1["opB"] = new OperationB;

    std::list<int>::const_iterator it;
    std::list<int>::const_iterator ite = lst1.end();

    for (it = lst1.begin(); it != ite; it++) {
        std::cout << *it << std::endl;
    }
    
    return 0;
}