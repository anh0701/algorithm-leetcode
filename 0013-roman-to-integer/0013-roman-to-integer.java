class Solution {
    public int romanToInt(String s) {
        char romans[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int romanvalues[] = {1, 5, 10, 50, 100, 500, 1000};

        int totalnorules[] = new int[s.length()+1];
        int total = 0;

        int output = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < romans.length; j++) {
                if (romans[j] == s.charAt(i)) {
                    totalnorules[i] = romanvalues[j];
                }
            }
        }
       for (int i = 0; i < totalnorules.length - 1; i++) {

            if (totalnorules[i] < totalnorules[i + 1]) {

                total = total + (totalnorules[i + 1] - totalnorules[i]);
                i++;
            } else {
                total = totalnorules[i] + total;
            }
        }
        return total;
    }
}