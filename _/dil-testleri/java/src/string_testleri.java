import java.util.Arrays;


public class string_testleri {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String kelimeler[] = {"ali", "veli", "�zkan", "�smet", "�mit", "ilteri�", "Mahmut", "Da�can", "�evket", "�evket"};

		Arrays.sort(kelimeler);
		
		for(int i = 0; i < kelimeler.length; i++) {
			System.out.println(kelimeler[i]);
		}
	}

}
