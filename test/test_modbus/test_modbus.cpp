#include <unity.h>

void setUp() {
    // Empty setup
}

void tearDown() {
    // Empty teardown
}

void test_dummy_modbus() {
    TEST_ASSERT_EQUAL(0, 0);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_dummy_modbus);
    return UNITY_END();
}
