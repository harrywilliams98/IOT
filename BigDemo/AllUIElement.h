//  AllUIElement.h

#ifndef ALLUIELEMENT_H_
#define ALLUIELEMENT_H_

#include "UIController.h"


//////////////////////////////////////////////////////////////////////////////
/**
 * Defintion of UIElement class. 
 */
class ConfigUIElement: public UIElement {
  private:
    long m_timer;
  public:
    ConfigUIElement (Adafruit_HX8357* tft, Adafruit_STMPE610* ts)
     : UIElement(tft, ts) { m_timer = millis(); };
    bool handleTouch(long x, long y);
    void draw();
    void runEachTurn();
};
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
/**
 * Defintion of TextPageUIElement class. 
 */
class TextPageUIElement: public UIElement {
  private:
    void drawTextBoxes(bool);
    uint8_t mapTextTouch(long, long);
    void printHistory(uint16_t x, uint16_t y);    
    void printCursor(uint16_t x, uint16_t y);
  public:
    TextPageUIElement(Adafruit_HX8357* tft, Adafruit_STMPE610* ts) 
      : UIElement(tft, ts) { };
    bool handleTouch(long, long);
    void draw();
    void runEachTurn();
};
//////////////////////////////////////////////////////////////////////////////

#endif
