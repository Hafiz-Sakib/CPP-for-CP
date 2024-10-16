#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class BanglaNumberToWord {
private:
    map<int, string> eng_to_bn = {
        {1, "১"}, {2, "২"}, {3, "৩"}, {4, "৪"}, {5, "৫"},
        {6, "৬"}, {7, "৭"}, {8, "৮"}, {9, "৯"}, {0, "০"}
    };

    map<int, string> num_to_bd = {
        {1, "এক"}, {2, "দুই"}, {3, "তিন"}, {4, "চার"}, {5, "পাঁচ"},
        {6, "ছয়"}, {7, "সাত"}, {8, "আট"}, {9, "নয়"}, {10, "দশ"},
        {11, "এগার"}, {12, "বার"}, {13, "তের"}, {14, "চৌদ্দ"},
        {15, "পনের"}, {16, "ষোল"}, {17, "সতের"}, {18, "আঠার"},
        {19, "ঊনিশ"}, {20, "বিশ"}, {21, "একুশ"}, {22, "বাইশ"},
        {23, "তেইশ"}, {24, "চব্বিশ"}, {25, "পঁচিশ"}, {26, "ছাব্বিশ"},
        {27, "সাতাশ"}, {28, "আটাশ"}, {29, "ঊনত্রিশ"}, {30, "ত্রিশ"},
        {31, "একত্রিশ"}, {32, "বত্রিশ"}, {33, "তেত্রিশ"}, {34, "চৌত্রিশ"},
        {35, "পঁয়ত্রিশ"}, {36, "ছত্রিশ"}, {37, "সাঁইত্রিশ"},
        {38, "আটত্রিশ"}, {39, "ঊনচল্লিশ"}, {40, "চল্লিশ"},
        {41, "একচল্লিশ"}, {42, "বিয়াল্লিশ"}, {43, "তেতাল্লিশ"},
        {44, "চুয়াল্লিশ"}, {45, "পঁয়তাল্লিশ"}, {46, "ছেচল্লিশ"},
        {47, "সাতচল্লিশ"}, {48, "আটচল্লিশ"}, {49, "ঊনপঞ্চাশ"},
        {50, "পঞ্চাশ"}, {51, "একান্ন"}, {52, "বায়ান্ন"},
        {53, "তিপ্পান্ন"}, {54, "চুয়ান্ন"}, {55, "পঞ্চান্ন"},
        {56, "ছাপ্পান্ন"}, {57, "সাতান্ন"}, {58, "আটান্ন"},
        {59, "ঊনষাট"}, {60, "ষাট"}, {61, "একষট্টি"}, {62, "বাষট্টি"},
        {63, "তেষট্টি"}, {64, "চৌষট্টি"}, {65, "পঁয়ষট্টি"},
        {66, "ছেষট্টি"}, {67, "সাতষট্টি"}, {68, "আটষট্টি"},
        {69, "ঊনসত্তর"}, {70, "সত্তর"}, {71, "একাত্তর"},
        {72, "বাহাত্তর"}, {73, "তিয়াত্তর"}, {74, "চুয়াত্তর"},
        {75, "পঁচাত্তর"}, {76, "ছিয়াত্তর"}, {77, "সাতাত্তর"},
        {78, "আটাত্তর"}, {79, "ঊনআশি"}, {80, "আশি"},
        {81, "একাশি"}, {82, "বিরাশি"}, {83, "তিরাশি"},
        {84, "চুরাশি"}, {85, "পঁচাশি"}, {86, "ছিয়াশি"},
        {87, "সাতাশি"}, {88, "আটাশি"}, {89, "ঊননব্বই"},
        {90, "নব্বই"}, {91, "একানব্বই"}, {92, "বিরানব্বই"},
        {93, "তিরানব্বই"}, {94, "চুরানব্বই"}, {95, "পঁচানব্বই"},
        {96, "ছিয়ানব্বই"}, {97, "সাতানব্বই"}, {98, "আটানব্বই"},
        {99, "নিরানব্বই"}
    };

    map<int, string> num_to_bn_decimal = {
        {0, "শূন্য "}, {1, "এক "}, {2, "দুই "}, {3, "তিন "},
        {4, "চার "}, {5, "পাঁচ "}, {6, "ছয় "}, {7, "সাত "},
        {8, "আট "}, {9, "নয় "}
    };

    string hundred = "শত";
    string thousand = "হাজার";
    string lakh = "লক্ষ";
    string crore = "কোটি";

    // Convert number to Bengali word representation
    string convert(int number) {
        if (number > 9999999) {
            return croreWord(number);
        } else if (number > 99999) {
            return lakhWord(number);
        } else if (number > 999) {
            return thousandWord(number);
        } else if (number > 99) {
            return hundredWord(number);
        } else {
            return underHundred(number);
        }
    }

    string underHundred(int number) {
        return numToBn(number);
    }

    string hundredWord(int number) {
        int a = number / 100;
        int b = number % 100;
        string word = (a == 0) ? "" : numToBn(a) + " " + hundred;
        return word + " " + underHundred(b);
    }

    string thousandWord(int number) {
        int a = number / 1000;
        int b = number % 1000;
        string word = (a == 0) ? "" : numToBn(a) + " " + thousand;
        return word + " " + hundredWord(b);
    }

    string lakhWord(int number) {
        int a = number / 100000;
        int b = number % 100000;
        string word = (a == 0) ? "" : numToBn(a) + " " + lakh;
        return word + " " + thousandWord(b);
    }

    string croreWord(int number) {
        int a = number / 10000000;
        int b = number % 10000000;
        string word = (a > 99) ? lakhWord(a) : numToBn(a);
        return word + " " + crore + " " + lakhWord(b);
    }

    string numToBn(int number) {
        return num_to_bd[number];
    }
public:
    string numToWord(long number) {
        if (number < 0) {
            return "Negative numbers are not supported.";
        }
        if (number == 0) {
            return "শূন্য";
        }
        return convert(number);
    }

    string numToBnDecimal(int number) {
        return num_to_bn_decimal[number];
    }

    string numToWordsWithDecimal(double number) {
        int integerPart = (int)number;
        int decimalPart = (int)((number - integerPart) * 10); // Get first decimal
        string decimalWords = (decimalPart > 0) ? " দশমিক " + numToBnDecimal(decimalPart) : "";
        return numToWord(integerPart) + decimalWords;
    }
};

int main() {
    BanglaNumberToWord converter;

    long depositAmount = 1000;
    long previousAmount = 1803593;
    long currentAmount = 1853765;

    cout << "আমানত পরিমাণ: " << converter.numToWord(depositAmount) << endl;
    cout << "পূর্ববর্তী পরিমাণ: " << converter.numToWord(previousAmount) << endl;
    cout << "বর্তমান পরিমাণ: " << converter.numToWord(currentAmount) << endl;

    long profit = currentAmount - previousAmount - depositAmount;

    if (profit > 0) {
        cout << "লাভ: " << converter.numToWord(profit) << endl;
    } else if (profit < 0) {
        cout << "লোকসান: " << converter.numToWord(-profit) << endl;
    } else {
        cout << "লাভ: শূন্য" << endl;
    }

    return 0;
}