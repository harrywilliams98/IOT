// ConfigUIElement.cpp

#include "AllUIElement.h"

//////////////////////////////////////////////////////////////////////////
/**
 * Function that handles the touch on this page
 * 
 * @param x - the x coordinate of the touch 
 * @param y - the y coordinate of the touch 
 * @returns bool - true if the touch is on the switcher
 */
bool ConfigUIElement::handleTouch(long x, long y) {
  return y < BOXSIZE && x > (BOXSIZE * SWITCHER);
}
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/**
 * Function that controls the drawing on the config page
 * Writes various things including the temperature, mac address and
 * the wifi ssid. If connected to wifi it will show the number of people 
 * in the diamond taken from the RESTful API at
 * http://www.canistudy.com/diamond
 */
void ConfigUIElement::draw(){

  m_tft->setTextColor(GREEN);
  m_tft->setTextSize(2);

  m_tft->setCursor(0, 0);
  m_tft->print("[config mode]");
  drawSwitcher();

  m_tft->setCursor(0, 80);

  // i2s_config();

  // printf("hello\n");

}
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/**
 * Function thats runs each turn. Currently does nothing
 */
void ConfigUIElement::runEachTurn(){
  
}
//////////////////////////////////////////////////////////////////////////
