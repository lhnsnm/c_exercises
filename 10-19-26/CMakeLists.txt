cmake_minimum_required(VERSION 3.16...4.2)
project(C_Exercises VERSION 1.0 LANGUAGES C)

enable_testing()
add_compile_options(-Wall -Wextra -Wpedantic)

# Student exercise targets
add_executable(mini_calculator src/mini_calculator/main.c)
add_executable(multiplier src/multiplier_for_loop/main.c)
add_executable(vending_machine src/vending_machine/main.c)

# Integration tests for the mini calculator exercise
add_test(NAME CalculatorAddTest
         COMMAND sh -c "$<TARGET_FILE:mini_calculator> < ${CMAKE_SOURCE_DIR}/tests/mini_calculator/input_add.txt > output_calc_add.txt && diff output_calc_add.txt ${CMAKE_SOURCE_DIR}/tests/mini_calculator/expected_add.txt"
)
add_test(NAME CalculatorSubtractTest
         COMMAND sh -c "$<TARGET_FILE:mini_calculator> < ${CMAKE_SOURCE_DIR}/tests/mini_calculator/input_subtract.txt > output_calc_subtract.txt && diff output_calc_subtract.txt ${CMAKE_SOURCE_DIR}/tests/mini_calculator/expected_subtract.txt"
)
add_test(NAME CalculatorMultiplyTest
         COMMAND sh -c "$<TARGET_FILE:mini_calculator> < ${CMAKE_SOURCE_DIR}/tests/mini_calculator/input_multiply.txt > output_calc_multiply.txt && diff output_calc_multiply.txt ${CMAKE_SOURCE_DIR}/tests/mini_calculator/expected_multiply.txt"
)
add_test(NAME CalculatorInvalidTest
         COMMAND sh -c "$<TARGET_FILE:mini_calculator> < ${CMAKE_SOURCE_DIR}/tests/mini_calculator/input_invalid.txt > output_calc_invalid.txt && diff output_calc_invalid.txt ${CMAKE_SOURCE_DIR}/tests/mini_calculator/expected_invalid.txt"
)

# Integration tests for the multiplication table exercise
add_test(NAME MultiplierTableTest
         COMMAND sh -c "$<TARGET_FILE:multiplier> < ${CMAKE_SOURCE_DIR}/tests/multiplier_for_loop/input.txt > output_multiplier.txt && diff output_multiplier.txt ${CMAKE_SOURCE_DIR}/tests/multiplier_for_loop/expected.txt"
)

# Integration tests for the vending machine exercise
add_test(NAME VendingMachineTest
         COMMAND sh -c "$<TARGET_FILE:vending_machine> < ${CMAKE_SOURCE_DIR}/tests/vending_machine/input.txt > output_vending.txt && diff output_vending.txt ${CMAKE_SOURCE_DIR}/tests/vending_machine/expected.txt"
)