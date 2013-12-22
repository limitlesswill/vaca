// Vaca - Visual Application Components Abstraction
// Copyright (c) 2005-2010 David Capello
//
// This file is distributed under the terms of the MIT license,
// please read LICENSE.txt for more information.

#ifndef VACA_ANCHOR_H
#define VACA_ANCHOR_H

#include "Vaca/base.h"
#include "Vaca/Constraint.h"
#include "Vaca/Rect.h"

namespace Vaca {

/**
   Anchor constraint. You should setup an Anchor contraint for every
   widget controled by an AnchorLayout.

   @see AnchorLayout.
*/
class VACA_DLL Anchor : public Constraint
{
  Rect m_refRect;
  Sides m_sides;

public:

  Anchor(const Rect& refRect, Sides borders);
  virtual ~Anchor();

  Rect getRefRect() const;
  void setRefRect(const Rect& refRect);

  Sides getSides() const;
  void setSides(Sides borders);

}; // Anchor

} // namespace Vaca

#endif // VACA_ANCHOR_H
