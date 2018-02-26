/*!
 * @file Printer.cpp
 * @author Christian Ponte
 * @date 16/02/2018
 * @brief Implementation of Printer class.
 *
 * A more detailed description of the class implementation can be found here.
 */


#include <iostream>
#include "Printer.h"


/*!
 * @brief Initializes the function and prints a message.
 *
 * More detailed constructor description.
 *
 * @param id The printer id.
 * @returns The class instance.
 */
Printer::Printer(int id) :
        id(id) {
    std::cout << "Created printer " << id << "." << std::endl;
}
