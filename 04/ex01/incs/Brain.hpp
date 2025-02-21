/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:13:12 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 00:48:40 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
    private:
        static const size_t NUM_IDEAS = 100;
        std::string _ideas[NUM_IDEAS];

    public:
        Brain(void);
        Brain(const Brain& otherBrain);
        ~Brain(void);

        Brain& operator=(const Brain& otherBrain);

        size_t getNumIdeas(void) const;
        const std::string* getAllIdeas(void) const;
        void setAllIdeas(const std::string& idea);
        bool setIdea(const std::string& idea, size_t index);
};

#endif
