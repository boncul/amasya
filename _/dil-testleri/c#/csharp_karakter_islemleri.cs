using System;

class Program {
	static void Main() {
		string[] kelimeler = new string[] {
			"ALİ",
			"veli",
			"özkan",
			"İsmet",
			"ÖZTÜRK",
			"Ümit",
			"ilteriş",
			"Mahmut",
			"Dağcan",
			"şevket",
			"Şevket"
		};

		foreach (string s in kelimeler) {
			Console.WriteLine (s.ToLower ());
		}

		Console.WriteLine ("---");

		foreach (string s in kelimeler) {
			Console.WriteLine (s.ToUpper ());
		}
	}
}
