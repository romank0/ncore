
/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

#ifndef __PARSER_H__
#define __PARSER_H__

#include <vector>
#include <string>

/**
 * Parses a command line into a string vector
 */

class Parser: public std::vector<std::string>
{
public:
  /**
   * Default Constructor
   */
  Parser(void) {}
  
  /**
   * Typical Constructor
   *
   * @param _str Space-separated set of words to parse into the string vector
   */
  Parser(const std::string& _str)
  {
    parse(_str);
  }

  /**
   * Parse the string into the string vector.  Breaks words on space
   * boundaries.  Adds the result at the end of the current vector.
   *
   * @param _str Space-separated set of words to parse into the string vector
   */
  void parse(const std::string& _str);
};

#endif // __PARSER_H__
// vim:cin:ai:sts=2 sw=2

