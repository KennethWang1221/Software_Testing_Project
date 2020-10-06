Action()
{

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/WebTours/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("wdinfo.php", 
		"URL=http://qurl.f.360.cn/wdinfo.php", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x0E\\x06$!\\x01\\x08#HZ\\x84\\x00\\x00\\x05\\x00\\xB85\\xC6'\\xF3\\x1DŒA@gw\\xE1\\xFFs\\xCE>\\x80Œï„o\\x1DžÆ\\x00\\x1E\\x01\\x08µ¹\\xA46¥v\\xB3>#\\x07\\x016T\\x0B&\\x15\\xA3\\x0C×RY$\tti\\xFE\\x14ÆÓ@DP\\x8D4\\x03\\x1Bn#ƒ”\\x17ñ˜\"VT%\\x08Oµd\\xA8\\x13üƒÑ–¥Ã\\x14hªü:\\x00Ø—W\t}KÃŸÆ·M´Œ[|\\x1BN\\xBF7xä½J\\\\~s½ž½êéq\\xB27<t`43ºø|•œøk\\xA4.\\x03ãã.¬ýN\\x8A\\x17@\\x06\\x03j\\x80Lð“ó…\\x1B‘yD`\\x1DRÂÄr@\\xC9&òGO_o^\\x03c\\x86\\x02\\xD89\\x94\\x10äX\\xFB\\x00~7\\xA0;x\\x12‘“\\x15l\\x1A9žð®­"
		")²Ì\rãW\\x03r”ˆ\\x1A\\xEF\tiûJbïj\\x16xãq\\xA34løÆ\\xE6\\x07D.RãøqM‰Zuv,\\x89.!\\x07/\\x00¯™w\\xEC\\x1F†ÑK-ô¿\\xF4:\\xFF\\x0Cª¦ôö³ÐÕÍ\\x1A1\\xEB\\x16)\\x03'aSõÞ=E\\x91\\x01Êå\\x0Eq\\x9E\\x16Üˆ m¿ô\\x9A\\x1A\\xAD-‡ttš™‘Ÿ3HéõY>ª¨Àù\\\\Nh`F\\xE2.(¿t<û¹S¯•\\x19B\\x03\\x0C¡[¢ñSoxŠ›:‹y\\x02\\xC4=üï\\xDA\\x14uaqh{î»š«SÔ¼‹Ã2©C\\x1FÅpFd\\xD0/\tÐ«Šy‰^\tšIª¹3;Â´÷í‰Ü\\x06\\x83\\x7F/¶F\\xCE>Š®ŽIÓÍ¦â–ú¾òtn\\xAB\\x1DÖF`W¦L£À<\\xDF\\x10\\x13r`mNé“\\x02lH\\x03ÜWaÄ užá\\xDA\\x13hÊBqoX¯³4H˜m2}W\\x0B\\xD6)"
		"Z‰¸ðÊ\\x894™ÁÛ²$:®Ã/\\x14ªÒ¼mbÎL\\x7F\\x911Ôú¨„a8Ø™\\xD2/K\\x17\\xAC\"O$Ñæ\\x93", 
		LAST);

	lr_think_time(10);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/WebTours/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=123605.923531794zDfHQHQpzQVzzzzHDiVtHpiHiVf", ENDITEM, 
		"Name=username", "Value=jojojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=82", ENDITEM, 
		"Name=login.y", "Value=17", ENDITEM, 
		"Name=login", "Value=Login", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_submit_data("login.pl_2", 
		"Action=http://127.0.0.1:1080/WebTours/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?username=jojojo&password=bean", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=123605.923531794zDfHQHQpzQVzzzzHDiVtHpiHiVf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=46", ENDITEM, 
		"Name=login.y", "Value=16", ENDITEM, 
		"Name=login", "Value=Login", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_submit_data("index.php", 
		"Action=http://site.browser.360.cn/index.php", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=rn", "Value=350700", ENDITEM, 
		LAST);

	web_submit_data("index.php_2", 
		"Action=http://site.browser.360.cn/index.php", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=rn", "Value=711160", ENDITEM, 
		LAST);

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/WebTours/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?page=menu&in=home", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}