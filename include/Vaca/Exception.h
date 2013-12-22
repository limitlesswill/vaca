// Vaca - Visual Application Components Abstraction
// Copyright (c) 2005-2010 David Capello
//
// This file is distributed under the terms of the MIT license,
// please read LICENSE.txt for more information.

#ifndef VACA_EXCEPTION_H
#define VACA_EXCEPTION_H

#include "Vaca/base.h"

#include <exception>

namespace Vaca {

/**
   Exception generated from Vaca.

   Base class for every exception generated by Vaca objects.
*/
class VACA_DLL Exception : public std::exception
{
  String m_message;
  std::string m_what;
  int m_errorCode;

public:

  Exception();
  Exception(const String& message);
  virtual ~Exception() throw();

  virtual const char* what() const throw();
  virtual const String& getMessage() const throw();

  int getErrorCode() const;

private:

  void initialize();

};

} // namespace Vaca

#endif // VACA_EXCEPTION_H
