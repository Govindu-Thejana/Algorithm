public class Main {

    static void search(String txt, String pat) {
        int l1 = txt.length();
        int l2 = pat.length();
        int i, j;

        for (i = 0; i <= l1 - l2; i++) {
            j = 0;
            while (j < l2 && txt.charAt(i + j) == pat.charAt(j)) {
                j++;
            }
            if (j == l2) {
                System.out.println("Pattern found at index: " + i);
            }
        }
    }

    public static void main(String[] args) {
        String txt = "ABAACAADAABAAABAA";
        String pat = "AABA";
        search(txt, pat);
    }
}
