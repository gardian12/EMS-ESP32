#include <unity.h>

void setUp() {
    // Empty setup
}

void tearDown() {
    // Empty teardown
}

void test_dummy() {
    TEST_ASSERT_TRUE(true);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_dummy);
    return UNITY_END();
}
