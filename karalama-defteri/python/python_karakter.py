#!/usr/bin/env python
#-*- coding: utf-8 -*-

# Büyütme

kelime1 = "burak"          # Türkçe karaktersiz kelime
print kelime1.capitalize() # ilk harfi büyütme
print kelime1.upper()      # tamamını büyütme
print kelime1.swapcase()   # durum değiştirme

kelime2 = "ötüken"         # Türkçe karakterli kelime
print kelime2.capitalize() # ilk harfi büyütme
print kelime2.upper()      # tamamını büyütme
print kelime2.swapcase()   # durum değiştirme

# Küçültme

kelime3 = "BERNA"          # Türkçe karaktersiz kelime
print kelime3.lower()      # tamamını küçültme
print kelime3.swapcase()   # durum değiştirme

kelime4 = "VELİCÜ"         # Türkçe karakterli kelime
print kelime4.lower()      # tamamını küçültme
print kelime4.swapcase()   # durum değiştirme
