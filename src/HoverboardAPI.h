#ifndef HoverboardAPI_h
#define HoverboardAPI_h
#define LIBRARY_VERSION	0.0.1

class HoverboardAPI
{


  public:

  //Constants used in some of the functions below
  //#define xxy 1
 
  //commonly used functions **************************************************************************
    HoverboardAPI();                      // * constructor.  
    void setHoverboardTraction( int16_t base_pwm, int16_t steer );   

  //available but not commonly used functions ********************************************************
 	
  private:
  
	
};
#endif

