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
		"BodyBinary=\\x0E\\x06$!\\x01\\x08#HZ\\x84\\x00\\x00\\x05\\x00\\xB85\\xC6'\\xF3\\x1D�A@gw\\xE1\\xFFs\\xCE>\\x80��o\\x1D��\\x00\\x1E\\x01\\x08��\\xA46�v\\xB3>#\\x07\\x016T\\x0B&\\x15\\xA3\\x0C�RY$\tti\\xFE\\x14��@DP\\x8D4\\x03\\x1Bn#��\\x17�\"VT%\\x08O�d\\xA8\\x13��і��\\x14h��:\\x00ؗW\t}KßƷM��[|\\x1BN\\xBF7x�J\\\\~s�����q\\xB27<t`43��|���k\\xA4.\\x03��.��N\\x8A\\x17@\\x06\\x03j\\x80L��\\x1B�yD`\\x1DR��r@\\xC9&�GO_o^\\x03c\\x86\\x02\\xD89\\x94\\x10�X\\xFB\\x00~7\\xA0;x\\x12��\\x15l\\x1A9��"
		")��\r�W\\x03�r��\\x1A\\xEF\ti�Jb�j\\x16x�q\\xA34l��\\xE6\\x07D.R��qM�Zuv,\\x89.!\\x07/\\x00��w\\xEC\\x1F��K-��\\xF4:\\xFF\\x0C����������\\x1A1\\xEB\\x16)\\x03'aS��=E\\x91\\x01��\\x0Eq\\x9E\\x16܈ m��\\x9A\\x1A\\xAD-�tt����3H���Y>����\\\\Nh`F\\xE2.(�t<���S��\\x19B\\x03\\x0C�[��Sox��:�y\\x02\\xC4=��\\xDA\\x14uaqh{�SԼ��2�C\\x1F�pFd\\xD0/\tН��y�^\t�I��3;´���\\x06\\x83\\x7F/�F\\xCE>���I�ͦ����tn\\xAB\\x1D�F`W�L��<\\xDF\\x10\\x13r`mN�\\x02lH\\x03�W�aĠu��\\xDA\\x13h�BqoX��4H�m2}W\\x0B\\xD6)"
		"Z����\\x894��۲$:��/\\x14�Ҽmb�L\\x7F\\x911����a8ؙ\\xD2/K\\x17\\xAC\"O$��\\x93", 
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