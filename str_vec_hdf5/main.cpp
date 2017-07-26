/*
 * Copyright (C) 1998-2017 ALPS Collaboration. See COPYRIGHT.TXT
 * All rights reserved. Use is subject to license terms. See LICENSE.TXT
 * For use in publications, see ACKNOWLEDGE.TXT
 */

#include <iostream>
#include <alps/hdf5.hpp>
#include <alps/utilities/short_print.hpp>

int main(int argc, char** argv)
{
    // The filename for the hdf5 file
    std::string filename("tmp.h5");

    std::vector<std::string> w;
    std::string str;

    alps::hdf5::archive ar(filename, "r");
    ar["/str"] >> str;
    std::cout << "str: " << str << std::endl;

    ar["/str_vec"] >> w;
    std::cout << "w: " << alps::short_print(w) << std::endl;
    
    return 0;
}
