import java.util.*;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner scan= new Scanner(System.in);
        ArrayList<String> words = new ArrayList<>();
         
        while (scan.hasNextLine()) {
            String word = scan.nextLine();
            if (word.startsWith(" ") || word.endsWith(" ") || word.length()>100 || word.isEmpty()) {
                break;
            }
            words.add(word);
        }
        scan.close();
 
        for (int i = 0; i < words.size(); i++) {
            System.out.println(words.get(i));
        }
    }
}
