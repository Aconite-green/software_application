#ifndef Ram_H
#define Ram_H

class Ram{
       char mem[100*1024];
       int size;
   public:
       Ram();
       ~Ram();
       char read(int address);
       void write(int address, char value);
};




#endif