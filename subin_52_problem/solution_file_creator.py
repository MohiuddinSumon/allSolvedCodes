

def create_python_files(problem_list):
    for idx, file_name in enumerate(problem_list, start=1):
        # file_name = f"{idx}_{problem_name.lower().replace(' ', '_')}.py"
        with open(file_name, 'w') as file:
            file.write("")
        print(f"File '{file_name}' created successfully.")

PROBLEM_LIST = [
    "1_even_odd_1.py",
    "2_even_odd_2.py",
    "3_descending_number.py",
    "4_divisor.py",
    "5_box_1.py",
    "6_summation.py",
    "7_count_numbers.py",
    "8_small_to_large.py",
    "9_square_number.py",
    "10_run_rate_1.py",
    "11_factorial.py",
    "12_factorial_100.py",
    "13_tomi_mias_probability.py",
    "14_character_frequency.py",
    "15_character_count.py",
    "16_word_disaster.py",
    "17_vowel_count.py",
    "18_vowel_consonant.py",
    "19_word_count_1.py",
    "20_word_count_2.py",
    "21_reverse_word.py",
    "22_prime_number.py",
    "23_letter_to_number.py",
    "24_alternate_elements.py",
    "25_lcm.py",
    "26_alien_gupi.py",
    "27_armstrong_number.py",
    "28_random_array.py",
    "29_character_recognition.py",
    "30_perfect_number_1.py",
    "31_perfect_number_2.py",
    "32_multiple_of_x.py",
    "33_divisible_1.py",
    "34_divisible_2.py",
    "35_out_of_circle.py",
    "36_sorting_words.py",
    "37_number_disaster.py",
    "38_diamond_kingdom.py",
    "39_palindrome.py",
    "40_sum_of_series_1.py",
    "41_sum_of_series_2.py",
    "42_sum_of_series_3.py",
    "43_calculation.py",
    "44_pascals_triangle_1.py",
    "45_pascals_triangle_2.py",
    "46_area_of_triangle.py",
    "47_coalition_of_array.py",
    "48_missing_number.py",
    "49_is_prime.py",
    "50_left_right.py",
    "51_khoj_the_search_1.py",
    "52_khoj_the_search_2.py"
]


create_python_files(PROBLEM_LIST)
