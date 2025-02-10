/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:27:47 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/10 21:28:10 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Base {
    public:
      int x;
    protected:
      int y;
    private:
      int z;
  };
  
  class PublicDerived: public Base {
    // x is public
    // y is protected
    // z is not accessible from PublicDerived
  };
  
  class ProtectedDerived: protected Base {
    // x is protected
    // y is protected
    // z is not accessible from ProtectedDerived
  };
  
  class PrivateDerived: private Base {
    // x is private
    // y is private
    // z is not accessible from PrivateDerived
  };