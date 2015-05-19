#!/usr/bin/env python
#-*- coding: utf-8 -*-

#sozluk = [u'ali', u'zeki', u'mehmet', u'burak', u'özlem', u'ismet', u'İlteriş', u'Şakir', u'Ümit']
#dogru_sira = [u'ali', u'burak', u'İlteriş', u'ismet', u'mehmet', u'özlem', u'Şakir', u'Ümit', u'zeki']

sozluk = ["ali", "zeki", "mehmet", "burak", "özlem", "ismet", "İlteriş", "Şakir", "Ümit"]
dogru_sira = ["ali", "burak", "İlteriş", "ismet", "mehmet", "özlem", "Şakir", "Ümit", "zeki"]

sozluk.sort()

print sozluk

if sozluk == dogru_sira:
	print "sort işlemi doğru"
else:
	print "sort işlemi hatalı"
