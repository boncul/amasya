
public class karakter_islemleri {

	public static void main(String[] args) {
		String kelimeler[] = {"AL‹", "veli", "özkan", "‹smet", "ÖZTÜRK", "Ümit", "ilteriﬂ", "Mahmut", "Da€can", "ﬂevket", "ﬁevket"};
		
		// Küçültme
		for(int i = 0; i < kelimeler.length; i++) {
			System.out.println(kelimeler[i].toLowerCase());
		}
		
		System.out.println("---");
		
		// Büyütme
		for(int i = 0; i < kelimeler.length; i++) {
			System.out.println(kelimeler[i].toUpperCase());
		}
		
		System.out.println("---");
		
		// String bölme. Acaba Türkçe karakterlerde bölme do€ru mu?
		System.out.println(kelimeler[2].substring(0, 2));
	}

}
