#define bp 0xffff0f
#define rp 0x888800
#define dp 0x0f0f00

#define by 0xff0fff
#define ry 0x880088
#define dy 0x0f000f

#define br 0xff0f0f
#define rr 0x880000
#define dr 0x0f0000

#define db 0x080f08
#define rb 0x008800
#define bb 0x0fff0f

#define dg 0x00000f
#define rg 0x000088
#define bg 0x0f0fff

#define ww 0xffffff
#define OO 0x000000

#define ro 0x8f004f

#define DATA_1 (PORTC |=  0X01)    // DATA 1    // for UNO
#define DATA_0 (PORTC &=  0XFE)    // DATA 0    // for UNO
#define STRIP_PINOUT (DDRC=0xFF)    // for UNO



PROGMEM const unsigned long pattern_test_red[10][10]={
  {0xff0000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0xff0000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0xff0000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0xff0000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0xff0000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0xff0000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xff0000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xff0000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xff0000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xff0000},
};

PROGMEM const unsigned long pattern_test_blue[10][10]={
  {0x00ff00,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x00ff00,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x00ff00,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x00ff00,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x00ff00,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x00ff00,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x00ff00,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x00ff00,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x00ff00,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x00ff00},
};

PROGMEM const unsigned long pattern_test_green[10][10]={
  {0x0000ff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x0000ff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x0000ff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x0000ff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x0000ff,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x0000ff,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x0000ff,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x0000ff,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x0000ff,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x0000ff},
};

PROGMEM const unsigned long pattern_test_white[10][10]={
  {0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0xffffff,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xffffff,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xffffff,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xffffff,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xffffff},
};

PROGMEM const unsigned long pattern_test_comet1[][10]={
  {0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000},
  {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x111111,0x444444,0xffffff},
};

PROGMEM const unsigned long pattern_test_comet2[][10]={
  {0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000},
  {0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000},
  {0x111111,0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000},
  {0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000},
  {0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff},
  {0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000},
  {0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000},
  {0x111111,0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000},
  {0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000},
  {0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0x111111,0x444444,0xffffff},
};

PROGMEM const unsigned long pattern_test_comet3[][10]={
  {0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xffffff},
  {0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0xffffff,0x444444},
  {0x111111,0x444444,0xffffff,0x000000,0x000000,0x000000,0x000000,0xffffff,0x444444,0x111111},
  {0x000000,0x111111,0x444444,0xffffff,0x000000,0x000000,0xffffff,0x444444,0x111111,0x000000},
  {0x000000,0x000000,0x111111,0x444444,0xffffff,0xffffff,0x444444,0x111111,0x000000,0x000000},
  {0x000000,0x000000,0x111111,0x444444,0xffffff,0xffffff,0x444444,0x111111,0x000000,0x000000},
  {0x000000,0x000000,0x000000,0xffffff,0x444444,0x444444,0xffffff,0x000000,0x000000,0x000000},
  {0x000000,0x000000,0xffffff,0x444444,0x111111,0x111111,0x444444,0xffffff,0x000000,0x000000},
  {0x000000,0xffffff,0x444444,0x111111,0x000000,0x000000,0x111111,0x444444,0xffffff,0x000000},
  {0xffffff,0x444444,0x111111,0x000000,0x000000,0x000000,0x000000,0x111111,0x444444,0xffffff},
};


PROGMEM const unsigned long pattern_test_rainbow[10][10]={
  {rr,rr,ry,ry,rg,rg,rb,rb,rp,rp},
  {rp,rr,rr,ry,ry,rg,rg,rb,rb,rp},
  {rp,rp,rr,rr,ry,ry,rg,rg,rb,rb},
  {rb,rp,rp,rr,rr,ry,ry,rg,rg,rb},
  {rb,rb,rp,rp,rr,rr,ry,ry,rg,rg},
  {rg,rb,rb,rp,rp,rr,rr,ry,ry,rg},
  {rg,rg,rb,rb,rp,rp,rr,rr,ry,ry},
  {ry,rg,rg,rb,rb,rp,rp,rr,rr,ry},
  {ry,ry,rg,rg,rb,rb,rp,rp,rr,rr},
  {rr,ry,ry,rg,rg,rb,rb,rp,rp,rr},

};

PROGMEM const unsigned long rainbowkit[][10]={
  {rr,OO,OO,OO,OO,OO,OO,OO,OO,rr},
  {OO,rr,OO,OO,OO,OO,OO,OO,rr,OO},
  {OO,OO,rr,OO,OO,OO,OO,rr,OO,OO},
  {OO,OO,OO,rr,OO,OO,rr,OO,OO,OO},
  {OO,OO,OO,OO,rr,rr,OO,OO,OO,OO},
  {OO,OO,OO,rr,OO,OO,rr,OO,OO,OO},
  {OO,OO,rr,OO,OO,OO,OO,rr,OO,OO},
  {OO,rr,OO,OO,OO,OO,OO,OO,rr,OO},
  {rr,OO,OO,OO,OO,OO,OO,OO,OO,rr},

  {ro,OO,OO,OO,OO,OO,OO,OO,OO,ro},
  {OO,ro,OO,OO,OO,OO,OO,OO,ro,OO},
  {OO,OO,ro,OO,OO,OO,OO,ro,OO,OO},
  {OO,OO,OO,ro,OO,OO,ro,OO,OO,OO},
  {OO,OO,OO,OO,ro,ro,OO,OO,OO,OO},
  {OO,OO,OO,ro,OO,OO,ro,OO,OO,OO},
  {OO,OO,ro,OO,OO,OO,OO,ro,OO,OO},
  {OO,ro,OO,OO,OO,OO,OO,OO,ro,OO},
  {ro,OO,OO,OO,OO,OO,OO,OO,OO,ro},
  
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  {OO,ry,OO,OO,OO,OO,OO,OO,ry,OO},
  {OO,OO,ry,OO,OO,OO,OO,ry,OO,OO},
  {OO,OO,OO,ry,OO,OO,ry,OO,OO,OO},
  {OO,OO,OO,OO,ry,ry,OO,OO,OO,OO},
  {OO,OO,OO,ry,OO,OO,ry,OO,OO,OO},
  {OO,OO,ry,OO,OO,OO,OO,ry,OO,OO},
  {OO,ry,OO,OO,OO,OO,OO,OO,ry,OO},
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  
  {rg,OO,OO,OO,OO,OO,OO,OO,OO,rg},
  {OO,rg,OO,OO,OO,OO,OO,OO,rg,OO},
  {OO,OO,rg,OO,OO,OO,OO,rg,OO,OO},
  {OO,OO,OO,rg,OO,OO,rg,OO,OO,OO},
  {OO,OO,OO,OO,rg,rg,OO,OO,OO,OO},
  {OO,OO,OO,rg,OO,OO,rg,OO,OO,OO},
  {OO,OO,rg,OO,OO,OO,OO,rg,OO,OO},
  {OO,rg,OO,OO,OO,OO,OO,OO,rg,OO},
  {rg,OO,OO,OO,OO,OO,OO,OO,OO,rg},
  
  {rb,OO,OO,OO,OO,OO,OO,OO,OO,rb},
  {OO,rb,OO,OO,OO,OO,OO,OO,rb,OO},
  {OO,OO,rb,OO,OO,OO,OO,rb,OO,OO},
  {OO,OO,OO,rb,OO,OO,rb,OO,OO,OO},
  {OO,OO,OO,OO,rb,rb,OO,OO,OO,OO},
  {OO,OO,OO,rb,OO,OO,rb,OO,OO,OO},
  {OO,OO,rb,OO,OO,OO,OO,rb,OO,OO},
  {OO,rb,OO,OO,OO,OO,OO,OO,rb,OO},
  {rb,OO,OO,OO,OO,OO,OO,OO,OO,rb},

  {rp,OO,OO,OO,OO,OO,OO,OO,OO,rp},
  {OO,rp,OO,OO,OO,OO,OO,OO,rp,OO},
  {OO,OO,rp,OO,OO,OO,OO,rp,OO,OO},
  {OO,OO,OO,rp,OO,OO,rp,OO,OO,OO},
  {OO,OO,OO,OO,rp,rp,OO,OO,OO,OO},
  {OO,OO,OO,rp,OO,OO,rp,OO,OO,OO},
  {OO,OO,rp,OO,OO,OO,OO,rp,OO,OO},
  {OO,rp,OO,OO,OO,OO,OO,OO,rp,OO},
  {rp,OO,OO,OO,OO,OO,OO,OO,OO,rp},
};

PROGMEM const unsigned long test[][10]={
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
  {rr,ww,OO,OO,OO,OO,OO,OO,ww,rr},
  {rb,rr,ww,OO,OO,OO,OO,ww,rr,rb},
  {rr,ww,OO,OO,OO,OO,OO,OO,ww,rr},
  {rb,rr,ww,OO,OO,OO,OO,ww,rr,rb},
  {rg,rb,rr,ww,OO,OO,ww,rr,rb,rg},
  {rb,rr,ww,rr,ww,ww,rr,rb,rg,OO},
  {rg,rb,rr,ww,OO,OO,ww,rr,rb,rg},
  {OO,rg,rb,rr,ww,ww,rr,rb,rg,OO},
  {OO,OO,rg,rb,rr,rr,rb,rg,OO,OO},
  {OO,OO,OO,rg,rb,rb,rg,OO,OO,OO},
  {OO,OO,OO,OO,rg,rg,OO,OO,OO,OO},
  {OO,OO,OO,OO,ww,ww,OO,OO,OO,OO},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},



};
PROGMEM const unsigned long dimbow[][10]={
  {rp,rp,rb,rb,rg,rg,ry,ry,rr,rr},
  {dp,dp,db,db,dg,dg,dy,dy,dr,dr},
  {rp,rp,rb,rb,rg,rg,ry,ry,rr,rr},
  {bp,bp,bb,bb,bg,bg,by,by,br,br},
 
};

PROGMEM const unsigned long fade[][10]={
  {OO,db,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,rb,OO,OO,dp,OO,OO,OO,OO,OO},
  {OO,bb,OO,OO,rp,OO,OO,OO,OO,dr},
  {OO,rb,OO,OO,bp,OO,db,OO,OO,rr},
  {dr,db,OO,OO,OO,OO,rb,OO,OO,br},
  {rr,dp,OO,OO,OO,OO,bb,OO,OO,OO},
  {br,rp,OO,OO,OO,OO,OO,OO,dr,OO},
  {OO,bp,OO,db,OO,OO,OO,OO,rr,OO},
  {OO,rp,OO,rb,dp,OO,OO,OO,br,dp},
  {dp,dp,OO,bb,rp,OO,OO,OO,OO,rp},
  {OO,dr,OO,OO,bp,OO,OO,OO,OO,bp},
  {OO,rr,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,br,dr,OO,OO,OO,db,OO,OO,OO},
  {OO,dp,rr,OO,OO,OO,rb,OO,OO,OO},
  {OO,rp,br,OO,OO,OO,bb,OO,OO,OO},
  {OO,dp,OO,OO,OO,OO,OO,OO,OO,OO},

};

PROGMEM const unsigned long chill[][10]={
  {db,OO,OO,OO,OO,OO,OO,OO,OO,dr},
  {db,db,OO,OO,OO,OO,OO,OO,dr,dr},
  {db,db,db,OO,OO,OO,OO,dr,dr,dr},
  {db,db,db,db,OO,OO,dr,dr,dr,dr},
  {db,db,db,db,db,dr,dr,dr,dr,dr},
  {db,db,db,db,dp,dp,dr,dr,dr,dr},
  {db,db,db,dp,dp,dp,dp,dr,dr,dr},
  {db,db,dp,dp,dp,dp,dp,dp,dr,dr},
  {db,dp,dp,dp,dp,dp,dp,dp,dp,dr},
  {dp,dp,dp,dp,dp,dp,dp,dp,dp,dp},
  {OO,dp,dp,dp,dp,dp,dp,dp,dp,OO},
  {OO,OO,dp,dp,dp,dp,dp,dp,OO,OO},
  {OO,OO,OO,dp,dp,dp,dp,OO,OO,OO},
  {OO,OO,OO,OO,dp,dp,OO,OO,OO,OO},
  {OO,OO,OO,OO,db,dr,OO,OO,OO,OO},
  {OO,OO,OO,db,db,dr,dr,OO,OO,OO},
  {OO,OO,db,db,OO,OO,dr,dr,OO,OO},
  {OO,db,db,OO,OO,OO,OO,dr,dr,OO},
  {db,db,OO,OO,OO,OO,OO,OO,dr,dr},
  {db,OO,OO,OO,OO,OO,OO,OO,OO,dr},
 
};

PROGMEM const unsigned long groove[][10]={

  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,ww,br,br,ww,ww,ww,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,br,ww,ww,br,ww,ww,ww},
  
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,ww,br,br,ww,ww,ww,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,br,ww,ww,ww,ww,br,ww,ww},

  {db,db,db,db,db,db,db,db,db,db},
  {br,ww,ww,ww,ww,ww,ww,ww,ww,br},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,br,ww,ww,ww,ww,br,ww,ww},

  {db,db,db,db,db,db,db,db,db,db},
  {ww,br,ww,ww,ww,ww,ww,ww,br,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {br,ww,ww,ww,ww,ww,ww,ww,ww,br},  

//1

  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,ww,br,br,ww,ww,ww,ww},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ww,ww,ww,br,ww,ww,br,ww,ww,ww},
  
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,ww,br,br,ww,ww,ww,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,br,ww,ww,ww,ww,br,ww,ww},

  {db,db,db,db,db,db,db,db,db,db},
  {ww,br,ww,ww,ww,ww,ww,ww,br,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,br,ww,ww,br,ww,ww,ww},

  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,br,ww,ww,ww,ww,br,ww,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {br,ww,ww,ww,ww,ww,ww,ww,ww,br},    

//2 

  {db,db,db,db,db,db,db,db,db,db},
  {br,ww,ww,ww,ww,ww,ww,ww,ww,br},    
  {db,db,db,db,db,db,db,db,db,db},
  {br,br,ww,ww,ww,ww,ww,ww,br,br},    

  {db,db,db,db,db,db,db,db,db,db},
  {br,br,br,ww,ww,ww,ww,br,br,br},    
  {db,db,db,db,db,db,db,db,db,db},
  {br,br,br,br,ww,ww,br,br,br,br}, 
  
  {db,db,db,db,db,db,db,db,db,db},
  {br,br,br,br,br,br,br,br,br,br},    
  {db,db,db,db,db,db,db,db,db,db},
  {br,br,br,br,bg,bg,br,br,br,br},    

  {db,db,db,db,db,db,db,db,db,db},
  {br,br,br,bg,bg,bg,bg,br,br,br},    
  {db,db,db,db,db,db,db,db,db,db},
  {br,br,bg,bg,bg,bg,bg,bg,br,br}, 

//3

  {db,db,db,db,db,db,db,db,db,db},
  {br,bg,bg,bg,bg,bg,bg,bg,bg,br},    
  {db,db,db,db,db,db,db,db,db,db},
  {bg,bg,bg,bg,bg,bg,bg,bg,bg,bg},   

  {db,db,db,db,db,db,db,db,db,db},
  {ww,bg,bg,bg,bg,bg,bg,bg,bg,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,bg,bg,bg,bg,bg,bg,ww,ww},
  
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,bg,bg,bg,bg,ww,ww,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,ww,bg,bg,ww,ww,ww,ww},
  
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,ww,ww,ww,ww,ww,ww,ww},
  {db,db,db,db,db,db,db,db,db,db},
  {ww,ww,ww,ww,ww,ww,ww,ww,ww,ww},

//4
};

//TWEAKED WITH!!!!!!!!!!!!!!!!
PROGMEM const unsigned long beat[][10]={
  {ry,OO,rb,rb,OO,OO,rb,rb,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,rr,rr,OO,OO,rr,rr,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,rb,rb,OO,OO,rb,rb,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,rr,rr,OO,OO,rr,rr,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {ry,OO,OO,OO,OO,OO,OO,OO,OO,ry},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  

};
PROGMEM const unsigned long strobe[][10]={
  {ww,ww,ww,ww,ww,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,00,ww,ww,ww,ww,ww},
};

PROGMEM const unsigned long allcolors[][10]={
  {0x00000f,0x0000f0,0x0000ff,0x000f00,0x000f0f,0x000ff0,0x000fff,0x00f000,0x00f00f,0x00f0f0},
  {0x00f0ff,0x00ff00,0x00ff0f,0x00fff0,0x00ffff,0x0f0000,0x0f000f,0x0f00f0,0x0f00ff,0x0f0f00},
  {0x0f0f0f,0x0f0ff0,0x0f0fff,0x0ff000,0x0ff00f,0x0ff0f0,0x0ff0ff,0x0fff00,0x0fff0f,0x0ffff0},
  {0x0fffff,0xf00000,0xf0000f,0xf000f0,0xf000ff,0xf00f00,0xf00f0f,0xf00ff0,0xf00fff,0xf0f000},
  {0xf0f00f,0xf0f0f0,0xf0f0ff,0xf0ff00,0xf0ff0f,0xf0fff0,0xf0ffff,0xff0000,0xff000f,0xff00f0},
  {0xff00ff,0xff0f00,0xff0f0f,0xff0ff0,0xff0fff,0xfff000,0xfff00f,0xfff0f0,0xfff0ff,0xffff00},


};

PROGMEM const unsigned long melody[][10]={
  {rr,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,ro,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,ry,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,rg,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,rb,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,rp,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,ww,OO,OO,OO},
  {OO,OO,OO,OO,OO,rp,OO,OO,OO,OO},
  {OO,OO,OO,OO,rb,OO,OO,OO,OO,OO},
  {OO,OO,OO,rg,OO,OO,OO,OO,OO,OO},
  {OO,OO,ry,OO,OO,OO,OO,OO,OO,OO},
  {OO,ro,OO,OO,OO,OO,OO,OO,OO,OO},
  {rr,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  
};

PROGMEM const unsigned long binary[][10]={
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},  
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {ww,ww,OO,OO,OO,OO,OO,OO,ww,ww},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {ww,OO,ww,OO,OO,OO,OO,ww,OO,ww},
  {OO,ww,ww,OO,OO,OO,OO,ww,ww,OO},
  {ww,ww,ww,OO,OO,OO,OO,ww,ww,ww},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {ww,OO,OO,ww,OO,OO,ww,OO,OO,ww},
  {OO,ww,OO,ww,OO,OO,ww,OO,ww,OO},
  {ww,ww,OO,ww,OO,OO,ww,OO,ww,ww},
  {OO,OO,ww,ww,OO,OO,ww,ww,OO,OO},
  {ww,OO,ww,ww,OO,OO,ww,ww,OO,ww},
  {OO,ww,ww,ww,OO,OO,ww,ww,ww,OO},
  {ww,ww,ww,ww,OO,OO,ww,ww,ww,ww},
  {OO,OO,OO,OO,ww,ww,OO,OO,OO,OO},
  {ww,OO,OO,OO,ww,ww,OO,OO,OO,ww},
  {OO,ww,OO,OO,ww,ww,OO,OO,ww,OO},
  {ww,ww,OO,OO,ww,ww,OO,OO,ww,ww},
  {OO,OO,ww,OO,ww,ww,OO,ww,OO,OO},
  {ww,OO,ww,OO,ww,ww,OO,ww,OO,ww},
  {OO,ww,ww,OO,ww,ww,OO,ww,ww,OO},
  {ww,ww,ww,OO,ww,ww,OO,ww,ww,ww},
  {OO,OO,OO,ww,ww,ww,ww,OO,OO,OO},
  {ww,OO,OO,ww,ww,ww,ww,OO,OO,ww},
  {OO,ww,OO,ww,ww,ww,ww,OO,ww,OO},
  {ww,ww,OO,ww,ww,ww,ww,OO,ww,ww},
  {OO,OO,ww,ww,ww,ww,ww,ww,OO,OO},
  {ww,OO,ww,ww,ww,ww,ww,ww,OO,ww},
  {OO,ww,ww,ww,ww,ww,ww,ww,ww,OO},
  {ww,ww,ww,ww,ww,ww,ww,ww,ww,ww},

};

PROGMEM const unsigned long bigrainbow[][10]={
  {dr,dr,dr,dr,dr,dr,dr,dr,dr,dr},
  {dr,dr,dr,dr,dr,dr,dr,dr,dr,ro},
  {dr,dr,dr,dr,dr,dr,dr,dr,ro,ro},
  {dr,dr,dr,dr,dr,dr,dr,ro,ro,ro},
  {dr,dr,dr,dr,dr,dr,ro,ro,ro,ro},
  {dr,dr,dr,dr,dr,ro,ro,ro,ro,ro},
  {dr,dr,dr,dr,ro,ro,ro,ro,ro,ro},
  {dr,dr,dr,ro,ro,ro,ro,ro,ro,ro},
  {dr,dr,ro,ro,ro,ro,ro,ro,ro,ro},
  {dr,ro,ro,ro,ro,ro,ro,ro,ro,ro},
  
  {ro,ro,ro,ro,ro,ro,ro,ro,ro,ro},
  {ro,ro,ro,ro,ro,ro,ro,ro,ro,dy},
  {ro,ro,ro,ro,ro,ro,ro,ro,dy,dy},
  {ro,ro,ro,ro,ro,ro,ro,dy,dy,dy},
  {ro,ro,ro,ro,ro,ro,dy,dy,dy,dy},
  {ro,ro,ro,ro,ro,dy,dy,dy,dy,dy},
  {ro,ro,ro,ro,dy,dy,dy,dy,dy,dy},
  {ro,ro,ro,dy,dy,dy,dy,dy,dy,dy},
  {ro,ro,dy,dy,dy,dy,dy,dy,dy,dy},
  {ro,dy,dy,dy,dy,dy,dy,dy,dy,dy},
  
  {dy,dy,dy,dy,dy,dy,dy,dy,dy,dy},
  {dy,dy,dy,dy,dy,dy,dy,dy,dy,dg},
  {dy,dy,dy,dy,dy,dy,dy,dy,dg,dg},
  {dy,dy,dy,dy,dy,dy,dy,dg,dg,dg},
  {dy,dy,dy,dy,dy,dy,dg,dg,dg,dg},
  {dy,dy,dy,dy,dy,dg,dg,dg,dg,dg},
  {dy,dy,dy,dy,dg,dg,dg,dg,dg,dg},
  {dy,dy,dy,dg,dg,dg,dg,dg,dg,dg},
  {dy,dy,dg,dg,dg,dg,dg,dg,dg,dg},
  {dy,dg,dg,dg,dg,dg,dg,dg,dg,dg},
  
  {dg,dg,dg,dg,dg,dg,dg,dg,dg,dg},
  {dg,dg,dg,dg,dg,dg,dg,dg,dg,db},
  {dg,dg,dg,dg,dg,dg,dg,dg,db,db},
  {dg,dg,dg,dg,dg,dg,dg,db,db,db},
  {dg,dg,dg,dg,dg,dg,db,db,db,db},
  {dg,dg,dg,dg,dg,db,db,db,db,db},
  {dg,dg,dg,dg,db,db,db,db,db,db},
  {dg,dg,dg,db,db,db,db,db,db,db},
  {dg,dg,db,db,db,db,db,db,db,db},
  {dg,db,db,db,db,db,db,db,db,db},
  
  {db,db,db,db,db,db,db,db,db,db},
  {db,db,db,db,db,db,db,db,db,dp},
  {db,db,db,db,db,db,db,db,dp,dp},
  {db,db,db,db,db,db,db,dp,dp,dp},
  {db,db,db,db,db,db,dp,dp,dp,dp},
  {db,db,db,db,db,dp,dp,dp,dp,dp},
  {db,db,db,db,dp,dp,dp,dp,dp,dp},
  {db,db,db,dp,dp,dp,dp,dp,dp,dp},
  {db,db,dp,dp,dp,dp,dp,dp,dp,dp},
  {db,dp,dp,dp,dp,dp,dp,dp,dp,dp},
 
 
  
  {dp,dp,dp,dp,dp,dp,dp,dp,dp,dp},
  {dp,dp,dp,dp,dp,dp,dp,dp,dp,dr},
  {dp,dp,dp,dp,dp,dp,dp,dp,dr,dr},
  {dp,dp,dp,dp,dp,dp,dp,dr,dr,dr},
  {dp,dp,dp,dp,dp,dp,dr,dr,dr,dr},
  {dp,dp,dp,dp,dp,dr,dr,dr,dr,dr},
  {dp,dp,dp,dp,dr,dr,dr,dr,dr,dr},
  {dp,dp,dp,dr,dr,dr,dr,dr,dr,dr},
  {dp,dp,dr,dr,dr,dr,dr,dr,dr,dr},
  {dp,dr,dr,dr,dr,dr,dr,dr,dr,dr},
 
  
};





PROGMEM const unsigned long test2[][10]={
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
  {rr,ww,OO,OO,OO,OO,OO,OO,ww,rr},
  {rb,rr,ww,OO,OO,OO,OO,ww,rr,rb},
  {rr,ww,OO,OO,OO,OO,OO,OO,ww,rr},
  {rb,rr,ww,OO,OO,OO,OO,ww,rr,rb},
  {rg,rb,rr,ww,OO,OO,ww,rr,rb,rg},
  {rb,rr,ww,rr,ww,ww,rr,rb,rg,OO},
  {rg,rb,rr,ww,OO,OO,ww,rr,rb,rg},
  {OO,rg,rb,rr,ww,ww,rr,rb,rg,OO},
  {OO,OO,rg,rb,rr,rr,rb,rg,OO,OO},
  {OO,OO,OO,rg,rb,rb,rg,OO,OO,OO},
  {OO,OO,OO,OO,rg,rg,OO,OO,OO,OO},
  {OO,OO,OO,OO,ww,ww,OO,OO,OO,OO},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},



};




PROGMEM const unsigned long inNout[][10]={
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {OO,OO,OO,OO,ww,ww,OO,OO,OO,OO},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {OO,OO,OO,OO,ww,ww,OO,OO,OO,OO},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,OO,OO,ww,OO,OO,ww,OO,OO,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {OO,OO,ww,OO,OO,OO,OO,ww,OO,OO},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
  {OO,ww,OO,OO,OO,OO,OO,OO,ww,OO},
  {ww,OO,OO,OO,OO,OO,OO,OO,OO,ww},
};

PROGMEM const unsigned long otherbeat[][10]={
  {ry,ww,rb,rb,OO,OO,rb,rb,ww,ry},
  {ww,ry,OO,OO,OO,OO,OO,OO,ry,ww},
  {ry,ww,rr,rr,OO,OO,rr,rr,ww,ry},
  {ww,ry,rb,rb,OO,OO,rb,rb,ry,ww},
  {ry,ww,rb,rb,OO,OO,rb,rb,ww,ry},
  {ww,ry,OO,OO,OO,OO,OO,OO,ry,ww},
  {ry,ww,rr,rr,OO,OO,rr,rr,ww,ry},
  {ww,ry,OO,OO,OO,OO,OO,OO,ry,ww},
  

};


PROGMEM const unsigned long off[10][10]={
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},
  {OO,OO,OO,OO,OO,OO,OO,OO,OO,OO},

};
