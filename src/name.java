/**
 * Created by Matt on 4/12/2017.
 */
import java.util.*;

public class name {

    private String name;
    private int score;
    private Map<String, Integer> scorer = new HashMap<>();

    name(){
        name = "";
        score = 0;
    }

    name(String n) {
        name = n;
        score = computeScore(n);
    }

    int computeScore(String n) {
        int s = 0;
        scorer.put("M", 13);
        scorer.put("A", 1);
        scorer.put("T", 20);

        String[] split = n.split("");
        for(String i : split) {
            s += scorer.get(i);
        }
        return s;
    }

    public String toString() {
        return "Name: " + name + "\nScore: " + score;
    }
}
