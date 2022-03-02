/*
Adept MobileRobots Robotics Interface for Applications (ARIA)
Copyright (C) 2004-2005 ActivMedia Robotics LLC
Copyright (C) 2006-2010 MobileRobots Inc.
Copyright (C) 2011-2015 Adept Technology, Inc.
Copyright (C) 2016-2018 Omron Adept Technologies, Inc.

     This program is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation; either version 2 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with this program; if not, write to the Free Software
     Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA


*/
#ifndef ARACTIONCONSTANTVELOCITY_H
#define ARACTIONCONSTANTVELOCITY_H

#include "Aria/ariaTypedefs.h"
#include "Aria/ArAction.h"

/// Action for going straight at a constant velocity
/**
   This action simply goes straight at a constant velocity.
  @ingroup ActionClasses
*/
class ArActionConstantVelocity : public ArAction
{
public:
  /// Constructor
  AREXPORT ArActionConstantVelocity(const char *name = "Constant Velocity", 
			   double velocity = 400);
  //AREXPORT virtual ~ArActionConstantVelocity();
  AREXPORT virtual ArActionDesired *fire(ArActionDesired currentDesired) override;
  AREXPORT virtual ArActionDesired *getDesired() { return &myDesired; }
#ifndef SWIG
  AREXPORT virtual const ArActionDesired *getDesired() const 
                                                        { return &myDesired; }
#endif
protected:
  double myVelocity;
  ArActionDesired myDesired;
};

#endif // ARACTIONCONSTANTVELOCITY_H
