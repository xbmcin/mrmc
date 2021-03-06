#pragma once

/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "guilib/GUIDialog.h"

class COSDButtons : public std::vector< std::pair<unsigned int, std::string> >
{
public:
  void Add(unsigned int, const std::string &label);
};

class CGUIDialogOSDSettings : public CGUIDialog
{
public:

  CGUIDialogOSDSettings(void);
  virtual ~CGUIDialogOSDSettings(void);

  virtual void FrameMove();
  virtual bool OnMessage(CGUIMessage& message);
  virtual bool OnAction(const CAction &action);
  
  void SetupButtons();
protected:
  virtual void OnInitWindow();
  virtual void OnDeinitWindow(int nextWindowID);
  virtual EVENT_RESULT OnMouseEvent(const CPoint &point, const CMouseEvent &event);
  void UpdateSelectedSubs(int selected);
  void UpdateSelectedAudio(int selected);
  void ClearButtons();
  bool m_subsEnabled;
  int  m_subsButtonOffset;
  COSDButtons m_subButtons;
  COSDButtons m_audioButtons;
};
