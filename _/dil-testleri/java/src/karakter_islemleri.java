
public class karakter_islemleri {

	public static void main(String[] args) {
		String kelimeler[] = {"AL�", "veli", "�zkan", "�smet", "�ZT�RK", "�mit", "ilteri�", "Mahmut", "Da�can", "�evket", "�evket"};
		
		// K���ltme
		for(int i = 0; i < kelimeler.length; i++) {
			System.out.println(kelimeler[i].toLowerCase());
		}
		
		System.out.println("---");
		
		// B�y�tme
		for(int i = 0; i < kelimeler.length; i++) {
			System.out.println(kelimeler[i].toUpperCase());
		}
		
		System.out.println("---");
		
		// String b�lme. Acaba T�rk�e karakterlerde b�lme do�ru mu?
		System.out.println(kelimeler[2].substring(0, 2));
	}

}
