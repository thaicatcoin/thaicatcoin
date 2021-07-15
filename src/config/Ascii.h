// Copyright (c) 2021, The ThaiCatCoin DevOps
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n _____ _           _  ____      _    ____      _       \n"
                                     "|_   _| |__   __ _(_)/ ___|__ _| |_ / ___|___ (_)_ __  \n"
                                     "  | | | '_ \\ / _` | | |   / _` | __| |   / _ \\| | '_ \\ \n"
                                     "  | | | | | | (_| | | |__| (_| | |_| |__| (_) | | | | |\n"
                                     "  |_| |_| |_|\\__,_|_|\\____\\__,_|\\__|\\____\\___/|_|_| |_|\n";

const std::string nonWindowsAsciiArt =
    "\n                                                                                 \n"
    "████████╗██╗  ██╗ █████╗ ██╗ ██████╗ █████╗ ████████╗ ██████╗ ██████╗ ██╗███╗   ██╗\n"
    "╚══██╔══╝██║  ██║██╔══██╗██║██╔════╝██╔══██╗╚══██╔══╝██╔════╝██╔═══██╗██║████╗  ██║\n"
    "   ██║   ███████║███████║██║██║     ███████║   ██║   ██║     ██║   ██║██║██╔██╗ ██║\n"
    "   ██║   ██╔══██║██╔══██║██║██║     ██╔══██║   ██║   ██║     ██║   ██║██║██║╚██╗██║\n"
    "   ██║   ██║  ██║██║  ██║██║╚██████╗██║  ██║   ██║   ╚██████╗╚██████╔╝██║██║ ╚████║\n"
    "   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝ ╚═════╝╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";



/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
