#include <unity.h>
#include <lamp.h>
#include <bsp.h>

static int16_t state;
static interface_t *interface = NULL; // A pointer to the interface. If NULL, the normal digitalWrite and pinMode will be used

static void reset_variables(void)
{
    state = 0;
}

#ifdef TEENSY

void digitalWrite_spy(uint8_t pin, uint8_t val)
{
    if (val == HIGH)
    {
        state = ON;
        bsp_digital_write(pin, val);
    }
    else
    {
        state = OFF;
        bsp_digital_write(pin, val);
    }
}

void pinMode_spy(uint8_t pin, uint8_t mode)
{
    if (mode == OUTPUT)
    {
        bsp_pin_mode(pin, mode); // call real pinMode
    }
}

#else

void bsp_digital_write(uint8_t pin, uint8_t val)
{
    if (val == HIGH)
    {
        state = ON;
    }
    else
    {
        state = OFF;
    }
}

void bsp_pin_mode(uint8_t pin, uint8_t mode)
{
}

#endif

void setUp()
{
}

void tearDown()
{
}

void test_lamp_begin_ok(void)
{
    TEST_ASSERT_EQUAL_UINT8(1U, lamp_begin(interface, 10));
}

#ifdef TEENSY
void loop()
{
}

void setup()
{
    /**
     * @brief If Teensy used, provide our implementation for digitalWrite and pinMode functions
     *        and assign these functions to the function pointers of the interface
     */
    interface_t temp = {};
    temp.digital_write = digitalWrite_spy;
    temp.pin_mode = pinMode_spy;
    interface = &temp;

    delay(3000U);
#else

int main(void)
{
#endif
    UNITY_BEGIN();
    RUN_TEST(test_lamp_begin_ok);

#ifdef TEENSY
    UNITY_END();
#else
    return UNITY_END();
#endif
}
