/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:40:01 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 14:07:13 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;
int	f(void) { return 2; }

namespace  	Foo {
	int	gl_var = 3;
	int	f(void) { return 4; }
}

namespace  	Bar {
	int	gl_var =5;
	int	f(void) { return 6; }
}

namespace	Muf = Bar;

int	main(void) {
	printf("gl_var:\t\t[%d]\n", gl_var);
	printf("f():\t\t[%d]\n", f());
	printf("\n");

	printf("Foo::gl_var:\t[%d]\n", Foo::gl_var);
	printf("Foo::f():\t[%d]\n", Foo::f());
	printf("\n");

	printf("Bar::gl_var:\t[%d]\n", Bar::gl_var);
	printf("Bar::f():\t[%d]\n", Bar::f());
	printf("\n");

	printf("Muf::gl_var:\t[%d]\n", Muf::gl_var);
	printf("Muf::f():\t[%d]\n", Muf::f());
	printf("\n");

	printf("::gl_var:\t[%d]\n", ::gl_var);
	printf("::f():\t\t[%d]\n", ::f());
	printf("\n");

	return (0);
}

/**
 * NOTES:
 * - Les namespaces permettent de faire du rapprochement sémantique
 * - On peut faire de l'aliasing de namespaces `Namespace Ns1 = Ns2`;
 * - "::" -> opérateur de résolution de portée
 * - `gl_var` est équivalent à `::gl_var`
 */
