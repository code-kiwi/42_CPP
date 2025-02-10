/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:22:06 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/10 21:24:15 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Quadruped {
    private:
        std::string _name;
    
    protected:
        int legs;
    
    public:
        void run(void);
};

class Dog: public Quadruped {
    // Can access legs and run()
};

int main(void) {
    // Can only access run()
    return 0;
}