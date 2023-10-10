#include <drivers/lou_drv_api.h>


Port::Port(uint16_t port_number){
    this->port_number = port_number;
}

Port::~Port(){
}



Port8Bit::Port8Bit(uint16_t port_number)
    : Port(port_number){

}

Port8Bit::~Port8Bit(){

}

uint8_t Port8Bit::Read(){
    return KeCallBuiltInInb(port_number);
}

void Port8Bit::Write(uint8_t data){
    KeCallBuiltInOutb(port_number,data);
}

uint8_t Port8Bit::KeCallBuiltInInb(uint16_t port){
    return inb(port);
}
void Port8Bit::KeCallBuiltInOutb(uint16_t port,uint8_t data){
    outb(port,data);
}

Port8BitSlow::Port8BitSlow(uint16_t port_number)
    : Port(port_number){

}

Port8BitSlow::~Port8BitSlow(){

}

void Port8BitSlow::Write(uint8_t data){
    KeCallBuiltInOutbSlow(port_number, data);
}

void Port8BitSlow::KeCallBuiltInOutbSlow(uint16_t port, uint8_t data){
    outbSlow(port,data);
}

Port16Bit::Port16Bit(uint16_t port_number)
    : Port(port_number){

}

Port16Bit::~Port16Bit(){

}

uint16_t Port16Bit::Read(){
    return KeCallBuiltInInw(port_number);

}

void Port16Bit::Write(uint16_t data){
    KeCallBuiltInOutw(port_number,data);
}

uint16_t Port16Bit::KeCallBuiltInInw(uint16_t port){
    return inw(port);
}

void Port16Bit::KeCallBuiltInOutw(uint16_t port,uint16_t data){
    outw(port,data);
}

Port32Bit::Port32Bit(uint16_t port_number)
    : Port(port_number){

}

Port32Bit::~Port32Bit(){

}

uint32_t Port32Bit::Read(){
    return KeCallBuiltInInl(port_number);
}
void Port32Bit::Write(uint32_t data){
    KeCallBuiltInOutl(port_number,data);
}

uint32_t Port32Bit::KeCallBuiltInInl(uint16_t port){
    return inl(port);
}

void Port32Bit::KeCallBuiltInOutl(uint16_t port,uint32_t data){
    outl(port,data);
}
