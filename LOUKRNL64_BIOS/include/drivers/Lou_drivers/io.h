#include <cstdlib.h>
#include <cstdint.h>

#ifndef _IO_H
#define _IO_H

#ifdef __cplusplus
class Port{
    protected:
        Port(uint16_t port_number);
        ~Port();
        uint16_t port_number;
};

class Port8Bit : public Port{
    public:
    Port8Bit(uint16_t port_number);
    ~Port8Bit();

    virtual uint8_t Read();
    virtual void Write(uint8_t data);

    protected:
        uint8_t KeCallBuiltInInb(uint16_t port);
        void KeCallBuiltInOutb(uint16_t port,uint8_t data);
};

class Port8BitSlow : public Port{
    public:

    Port8BitSlow(uint16_t port_number);
    ~Port8BitSlow();

    virtual void Write(uint8_t data);

    protected:
    void KeCallBuiltInOutbSlow(uint16_t port,uint8_t data);
};

class Port16Bit : public Port{
    public:

    Port16Bit(uint16_t port_number);
    ~Port16Bit();

    virtual uint16_t Read();
    virtual void Write(uint16_t data);

    protected:
        uint16_t KeCallBuiltInInw(uint16_t port);
        void KeCallBuiltInOutw(uint16_t port,uint16_t data);
};

class Port32Bit : public Port{
    public:


    Port32Bit(uint16_t port_number);
    ~Port32Bit();

    virtual uint32_t Read();
    virtual void Write(uint32_t data);

    protected:
        uint32_t KeCallBuiltInInl(uint16_t port);
        void KeCallBuiltInOutl(uint16_t port,uint32_t data);
};
#else




#endif
#endif
