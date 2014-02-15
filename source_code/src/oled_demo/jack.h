/*
 * bitmap jack
 */

#define JACK_WIDTH 50
#define JACK_HEIGHT 50

const struct {
    uint16_t width;
    uint8_t height;
    uint8_t depth;
    uint16_t dataSize;
    uint16_t data[625];
} image_jack __attribute__((__progmem__)) = {
    JACK_WIDTH, JACK_HEIGHT, 4, 625,
    {
   /* 0 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000, 
   /* 1 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0357,  0x8887,  0x7530,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000, 
   /* 2 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x4acd,  0xedee,  0xdede,  0xdca5,  
    0x1000,  0x0000,  0x0000,  0x0000, 
   /* 3 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x18dd,  0xeeee,  0xdeed,  0xedee,  
    0xddb7,  0x1000,  0x0000,  0x0000,  0x0000, 
   /* 4 */ 0x0000,  0x0000,  0x0000,  0x03ad,  0xeeee,  0xeeee,  0xfeee,  0xeeee,  
    0xedb6,  0x0000,  0x0000,  0x0000, 
   /* 5 */ 0x0000,  0x0000,  0x0000,  0x006c,  0xeeee,  0xffff,  0xffff,  0xffff,  
    0xfeee,  0xdd81,  0x0000,  0x0000,  0x0000, 
   /* 6 */ 0x0000,  0x0000,  0x0005,  0xceef,  0xffff,  0xffff,  0xffff,  0xffff,  
    0xfeee,  0xd910,  0x0000,  0x0000, 
   /* 7 */ 0x0000,  0x0000,  0x0000,  0x5cee,  0xefff,  0xffff,  0xffff,  0xffff,  
    0xffff,  0xfeed,  0x8100,  0x0000,  0x0000, 
   /* 8 */ 0x0000,  0x0000,  0x02ae,  0xefff,  0xffff,  0xffff,  0xffff,  0xffff,  
    0xfffe,  0xfed8,  0x0000,  0x0000, 
   /* 9 */ 0x0000,  0x0000,  0x0008,  0xeeff,  0xffff,  0xffff,  0xffff,  0xffff,  
    0xffff,  0xffff,  0xec60,  0x0000,  0x0000, 
   /* 10 */ 0x0000,  0x0000,  0x5cef,  0xd955,  0x7cff,  0xffff,  0xffff,  0xffff,  
    0xffff,  0xeffe,  0xc300,  0x0000, 
   /* 11 */ 0x0000,  0x0000,  0x01ae,  0xea41,  0x0013,  0xafff,  0xffff,  0xffff,  
    0xfea5,  0x459d,  0xeeea,  0x1000,  0x0000, 
   /* 12 */ 0x0000,  0x0006,  0xde72,  0x1000,  0x004b,  0xffff,  0xffff,  0xffe8,  
    0x2000,  0x25be,  0xed70,  0x0000, 
   /* 13 */ 0x0000,  0x0000,  0x1be8,  0x2000,  0x0000,  0x06cf,  0xffff,  0xfffe,  
    0x9200,  0x0000,  0x38ed,  0xb200,  0x0000, 
   /* 14 */ 0x0000,  0x005d,  0xc300,  0x0000,  0x0001,  0x8eff,  0xffff,  0xea30,  
    0x0000,  0x0003,  0xaed7,  0x0000, 
   /* 15 */ 0x0000,  0x0001,  0xbd71,  0x0000,  0x0000,  0x003b,  0xffff,  0xffc5,  
    0x0000,  0x0000,  0x005d,  0xdb10,  0x0000, 
   /* 16 */ 0x0000,  0x04dd,  0x3000,  0x0000,  0x0000,  0x17ef,  0xfffe,  0x9100,  
    0x0000,  0x0000,  0x2add,  0x4000, 
   /* 17 */ 0x0000,  0x0009,  0xea10,  0x0000,  0x0000,  0x0005,  0xdfff,  0xfc50,  
    0x0000,  0x0000,  0x0006,  0xdd80,  0x0000, 
   /* 18 */ 0x0000,  0x1ce8,  0x1000,  0x0000,  0x0000,  0x04bf,  0xfffa,  0x3000,  
    0x0000,  0x0000,  0x03dd,  0xa000, 
   /* 19 */ 0x0000,  0x004d,  0xe610,  0x0000,  0x0000,  0x0003,  0xbfff,  0xf920,  
    0x0000,  0x0000,  0x0002,  0xbec0,  0x0000, 
   /* 20 */ 0x0000,  0x6ee6,  0x2000,  0x0000,  0x0000,  0x13bf,  0xffe9,  0x1000,  
    0x0000,  0x0000,  0x029e,  0xd100, 
   /* 21 */ 0x0000,  0x009e,  0xe621,  0x0000,  0x0000,  0x0014,  0xbfff,  0xe921,  
    0x0000,  0x0000,  0x0003,  0x9ed2,  0x0000, 
   /* 22 */ 0x0000,  0xbee6,  0x2100,  0x0000,  0x0000,  0x16cf,  0xffe9,  0x2100,  
    0x0000,  0x0000,  0x139e,  0xd300, 
   /* 23 */ 0x0000,  0x00df,  0xe931,  0x0000,  0x0000,  0x0117,  0xdfff,  0xfa41,  
    0x0000,  0x0000,  0x0013,  0xafd4,  0x0000, 
   /* 24 */ 0x0000,  0xdefc,  0x4210,  0x0000,  0x0001,  0x39ef,  0xffeb,  0x5210,  
    0x0000,  0x0001,  0x24cf,  0xd400, 
   /* 25 */ 0x0000,  0x01df,  0xed83,  0x2110,  0x0000,  0x127c,  0xffff,  0xed82,  
    0x1100,  0x0000,  0x0136,  0xefd4,  0x0000, 
   /* 26 */ 0x0001,  0xdefe,  0xb632,  0x1111,  0x1125,  0xaefe,  0xeeee,  0xa521,  
    0x0100,  0x1112,  0x4bef,  0xd300, 
   /* 27 */ 0x0000,  0x01df,  0xfeea,  0x7432,  0x2223,  0x5aee,  0xebab,  0xcec9,  
    0x4211,  0x1112,  0x348e,  0xffe3,  0x0000, 
   /* 28 */ 0x0001,  0xdeff,  0xfec9,  0x8766,  0x79be,  0xefc6,  0x668d,  0xec95,  
    0x3323,  0x3368,  0xdfff,  0xd200, 
   /* 29 */ 0x0000,  0x00de,  0xfffe,  0xeedc,  0xccde,  0xeefe,  0x8364,  0x5cee,  
    0xeb87,  0x6779,  0xaeef,  0xffd1,  0x0000, 
   /* 30 */ 0x0000,  0xdefe,  0xfffe,  0xeeee,  0xeeff,  0xfe84,  0x864b,  0xefee,  
    0xedcd,  0xdeef,  0xfffe,  0xc000, 
   /* 31 */ 0x0000,  0x00bc,  0xecff,  0xffff,  0xffff,  0xfffe,  0xbacb,  0xacff,  
    0xfffe,  0xfeef,  0xffff,  0xddb0,  0x0000, 
   /* 32 */ 0x0000,  0x89b9,  0xdfff,  0xffff,  0xffff,  0xffee,  0xfeef,  0xffff,  
    0xffff,  0xfffe,  0xedaa,  0x8000, 
   /* 33 */ 0x0000,  0x0049,  0x87cd,  0xceff,  0xffff,  0xffff,  0xffff,  0xffff,  
    0xffff,  0xffff,  0xedcb,  0x7970,  0x0000, 
   /* 34 */ 0x0000,  0x1a97,  0x9cad,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  
    0xffff,  0xffda,  0x988c,  0x4000, 
   /* 35 */ 0x0000,  0x0008,  0xb878,  0x8cdd,  0xffff,  0xffff,  0xffff,  0xffff,  
    0xffff,  0xfeee,  0xc988,  0xbc20,  0x0000, 
   /* 36 */ 0x0000,  0x04ca,  0x8779,  0xbcef,  0xffff,  0xffff,  0xffff,  0xffff,  
    0xffdb,  0xdc98,  0x8ad9,  0x0000, 
   /* 37 */ 0x0000,  0x0000,  0x9c98,  0x7679,  0xcded,  0xefff,  0xffff,  0xffff,  
    0xeeee,  0xcab9,  0x778d,  0xd500,  0x0000, 
   /* 38 */ 0x0000,  0x003c,  0xca77,  0x558b,  0xcace,  0xfeee,  0xffee,  0xfedc,  
    0xcca8,  0x7788,  0xadb1,  0x0000, 
   /* 39 */ 0x0000,  0x0000,  0x07cc,  0x8666,  0x5698,  0xbddd,  0xbced,  0xbcdd,  
    0xb9a8,  0x6576,  0x8ccc,  0x5000,  0x0000, 
   /* 40 */ 0x0000,  0x0001,  0xada9,  0x7665,  0x4579,  0xab9a,  0xbba9,  0xaa86,  
    0x6566,  0x67bd,  0xe900,  0x0000, 
   /* 41 */ 0x0000,  0x0000,  0x002b,  0xcca6,  0x6665,  0x5456,  0x6676,  0x6555,  
    0x5565,  0x568b,  0xcea1,  0x0000,  0x0000, 
   /* 42 */ 0x0000,  0x0000,  0x03bd,  0xda65,  0x5555,  0x5566,  0x6565,  0x5555,  
    0x5668,  0xcdda,  0x3000,  0x0000, 
   /* 43 */ 0x0000,  0x0000,  0x0000,  0x29dd,  0x9655,  0x5554,  0x5455,  0x4555,  
    0x5667,  0x9dee,  0xa200,  0x0000,  0x0000, 
   /* 44 */ 0x0000,  0x0000,  0x0001,  0x7cbb,  0xa645,  0x5655,  0x5555,  0x5667,  
    0xacce,  0xd820,  0x0000,  0x0000, 
   /* 45 */ 0x0000,  0x0000,  0x0000,  0x0003,  0x8cdc,  0xa644,  0x5555,  0x4458,  
    0xbdde,  0xdc50,  0x0000,  0x0000,  0x0000, 
   /* 46 */ 0x0000,  0x0000,  0x0000,  0x0005,  0xbddd,  0xcb99,  0xaabb,  0xbbee,  
    0xec82,  0x0000,  0x0000,  0x0000, 
   /* 47 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0002,  0x69bc,  0xcccc,  0xdddd,  
    0xca71,  0x0000,  0x0000,  0x0000,  0x0000, 
   /* 48 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0112,  0x2222,  0x2110,  
    0x0000,  0x0000,  0x0000,  0x0000, 
   /* 49 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000, 
    }
};
