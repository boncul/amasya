using System;

class Program {
	static void Main() {
		char[] kelimeler = {'i', 'ö', 'İ', 'Ü', 'ş', 'M', 'ğ', 'Ş'};
		Array.Sort<char>(kelimeler);
		foreach (var c in kelimeler)
			Console.WriteLine(c);
	}
}