// Vaca - Visual Application Components Abstraction
// Copyright (c) 2005-2009 David Capello
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// * Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in
//   the documentation and/or other materials provided with the
//   distribution.
// * Neither the name of the author nor the names of its contributors
//   may be used to endorse or promote products derived from this
//   software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef VACA_MAIN_H
#define VACA_MAIN_H

#include "Vaca/MainArgs.h"

//////////////////////////////////////////////////////////////////////
// WinMain for Win32

#if defined(VACA_WINDOWS)

  #define WIN32_LEAN_AND_MEAN
  #include <windows.h>

  int PASCAL WinMain(HINSTANCE hInstance,
		     HINSTANCE hPrevInstance,
		     LPSTR lpCmdLine,
		     int nCmdShow)
  {
    Vaca::details::MainArgs::setArgs(NULL, NULL);
    return vaca_main();
  }

//////////////////////////////////////////////////////////////////////
// main()/END_OF_MAIN() for Allegro 4.2

#elif defined(VACA_ALLEGRO)

  #include <allegro.h>

  int main(int argc, char* argv[])
  {
    Vaca::details::MainArgs::setArgs(argc, argv);
    return vaca_main();
  }

  END_OF_MAIN();

//////////////////////////////////////////////////////////////////////
// main() for standard implementation

#else

  int main(int argc, char* argv[])
  {
    Vaca::details::MainArgs::setArgs(argc, argv);
    return vaca_main();
  }

#endif

#endif // VACA_MAIN_H
