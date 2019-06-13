#include "cpptest.h"
#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "FreeRTOS.h"

A::A()
    : a(0)
{
}

void A::setA(int value)
{
    a = value;
}

int A::getA(void)
{
    return a;
}

void A::toString()
{
    PRINTF("A::a = %d\r\n", a);
}

extern "C" {

int Atest(void)
{
    A a;

    a.setA(100);
    a.toString();

    return 0;
}

}
