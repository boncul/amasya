import java.util.Arrays;


public class string_testleri {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String kelimeler[] = {"ali", "veli", "özkan", "‹smet", "Ümit", "ilteriﬂ", "Mahmut", "Da€can", "ﬂevket", "ﬁevket"};

		Arrays.sort(kelimeler);
		
		for(int i = 0; i < kelimeler.length; i++) {
			System.out.println(kelimeler[i]);
		}
	}

}
