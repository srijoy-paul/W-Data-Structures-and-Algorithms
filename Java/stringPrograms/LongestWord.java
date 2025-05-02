
//A string is given you need to find longest word, starting with vowel and has even length.
import java.util.Scanner;

public class LongestWord {
    private static boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I'
                || ch == 'O' || ch == 'U';
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the sentence: ");
        String sentence = sc.nextLine();

        boolean isVowelW = false;
        int count = 0, longestLen = -1;
        int strt = 0, end = 0;
        int fsIndx = 0, feIndx = 0;
        for (int i = 0; i < sentence.length(); i++) {
            if (i == 0 || sentence.charAt(i - 1) == ' ') {
                if (isVowel(sentence.charAt(i))) {
                    isVowelW = true;
                    count++;
                    strt = i;
                }
            } else if (sentence.charAt(i) != ' ' && isVowelW) {
                count++;
                if (i == sentence.length() - 1) {
                    if (count > longestLen && count % 2 == 0) {
                        fsIndx = strt;
                        feIndx = end;
                        longestLen = count;
                    }
                    // longestLen = Math.max(longestLen, count);
                }
            } else {
                isVowelW = false;
                end = i - 1;
                if (count > longestLen && count % 2 == 0) {
                    fsIndx = strt;
                    feIndx = end;
                    longestLen = count;
                }
                // longestLen = Math.max(longestLen, count);
                count = 0;
            }

        }
        String word = "";
        for (int i = fsIndx; i <= feIndx; i++) {
            word += sentence.charAt(i);
        }
        System.out.println(word);
    }
}