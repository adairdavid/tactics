/*=========================================================================
  Program: Cerebra
  Module:  cbElectrodeOpenStage.h

  Copyright (c) 2011-2013 David Adair
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:

  * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

  * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

  * Neither the name of the Calgary Image Processing and Analysis Centre
    (CIPAC), the University of Calgary, nor the names of any authors nor
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
=========================================================================*/

#ifndef CBELECTRODEOPENSTAGE_H
#define CBELECTRODEOPENSTAGE_H

#include "cbStage.h"

//! Open stage for the application. Provides an interface to open MR data.
class cbElectrodeOpenStage : public cbStage
{
  Q_OBJECT
public:
  cbElectrodeOpenStage();
  ~cbElectrodeOpenStage();

  //! Returns the stages name (ie. "Introduction")
  virtual const char *getStageName() const;

signals:
  //! Outgoing signal to open the image path.
  void requestOpenImage(const char *);
  //! Outgoing signal to set whether or not to use the ant/post fiducials.
  void registerAntPost(int s);

public slots:
  //! Incoming signal to open the image at the path.
  void OpenImage(std::string path);

  //! Actions to perform for the stage.
  virtual void Execute();
};

#endif /* end of include guard: CBELECTRODEOPENSTAGE_H */
