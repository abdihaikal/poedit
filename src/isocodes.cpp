/*
 *  This file is part of Poedit (http://www.poedit.net)
 *
 *  Copyright (C) 1999-2005 Vaclav Slavik
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 *
 *  $Id$
 *
 *  This file contains languages & countries names and 2-letter codes as
 *  defined by ISO 639 and ISO 3166 standards.
 *
 */

#include <wx/wxprec.h>
#include <wx/wxchar.h>

#include "isocodes.h"

LanguageStruct isoLanguages[] =
{
    {_T("aa"), _T("Afar")},
    {_T("ab"), _T("Abkhazian")},
    {_T("ae"), _T("Avestan")},
    {_T("af"), _T("Afrikaans")},
    {_T("am"), _T("Amharic")},
    {_T("ar"), _T("Arabic")},
    {_T("as"), _T("Assamese")},
    {_T("ay"), _T("Aymara")},
    {_T("az"), _T("Azerbaijani")},

    {_T("ba"), _T("Bashkir")},
    {_T("be"), _T("Belarusian")},
    {_T("bg"), _T("Bulgarian")},
    {_T("bh"), _T("Bihari")},
    {_T("bi"), _T("Bislama")},
    {_T("bn"), _T("Bengali")},
    {_T("bo"), _T("Tibetan")},
    {_T("br"), _T("Breton")},
    {_T("bs"), _T("Bosnian")},

    {_T("ca"), _T("Catalan")},
    {_T("ce"), _T("Chechen")},
    {_T("ch"), _T("Chamorro")},
    {_T("co"), _T("Corsican")},
    {_T("cs"), _T("Czech")},
    {_T("cu"), _T("Church Slavic")},
    {_T("cv"), _T("Chuvash")},
    {_T("cy"), _T("Welsh")},

    {_T("da"), _T("Danish")},
    {_T("de"), _T("German")},
    {_T("dz"), _T("Dzongkha")},

    {_T("el"), _T("Greek")},
    {_T("en"), _T("English")},
    {_T("eo"), _T("Esperanto")},
    {_T("es"), _T("Spanish")},
    {_T("et"), _T("Estonian")},
    {_T("eu"), _T("Basque")},

    {_T("fa"), _T("Persian")},
    {_T("fi"), _T("Finnish")},
    {_T("fj"), _T("Fijian")},
    {_T("fo"), _T("Faroese")},
    {_T("fr"), _T("French")},
    {_T("fur"), _T("Friulian")},
    {_T("fy"), _T("Frisian")},

    {_T("ga"), _T("Irish")},
    {_T("gd"), _T("Gaelic")},
    {_T("gl"), _T("Galician")},
    {_T("gn"), _T("Guarani")},
    {_T("gu"), _T("Gujarati")},

    {_T("ha"), _T("Hausa")},
    {_T("he"), _T("Hebrew")},
    {_T("hi"), _T("Hindi")},
    {_T("ho"), _T("Hiri Motu")},
    {_T("hr"), _T("Croatian")},
    {_T("hu"), _T("Hungarian")},
    {_T("hy"), _T("Armenian")},
    {_T("hz"), _T("Herero")},

    {_T("ia"), _T("Interlingua")},
    {_T("id"), _T("Indonesian")},
    {_T("ie"), _T("Interlingue")},
    {_T("ik"), _T("Inupiaq")},
    {_T("is"), _T("Icelandic")},
    {_T("it"), _T("Italian")},
    {_T("iu"), _T("Inuktitut")},

    {_T("ja"), _T("Japanese")},
    {_T("jw"), _T("Javanese")},

    {_T("ka"), _T("Georgian")},
    {_T("ki"), _T("Kikuyu")},
    {_T("kj"), _T("Kuanyama")},
    {_T("kk"), _T("Kazakh")},
    {_T("kl"), _T("Kalaallisut")},
    {_T("km"), _T("Khmer")},
    {_T("kn"), _T("Kannada")},
    {_T("ko"), _T("Korean")},
    {_T("ks"), _T("Kashmiri")},
    {_T("ku"), _T("Kurdish")},
    {_T("kv"), _T("Komi")},
    {_T("kw"), _T("Cornish")},
    {_T("ky"), _T("Kyrgyz")},

    {_T("la"), _T("Latin")},
    {_T("lb"), _T("Letzeburgesch")},
    {_T("ln"), _T("Lingala")},
    {_T("lo"), _T("Lao")},
    {_T("lt"), _T("Lithuanian")},
    {_T("lv"), _T("Latvian")},

    {_T("mg"), _T("Malagasy")},
    {_T("mh"), _T("Marshall")},
    {_T("mi"), _T("Maori")},
    {_T("mk"), _T("Macedonian")},
    {_T("ml"), _T("Malayalam")},
    {_T("mn"), _T("Mongolian")},
    {_T("mo"), _T("Moldavian")},
    {_T("mr"), _T("Marathi")},
    {_T("ms"), _T("Malay")},
    {_T("mt"), _T("Maltese")},
    {_T("my"), _T("Burmese")},

    {_T("na"), _T("Nauru")},
    {_T("ne"), _T("Nepali")},
    {_T("ng"), _T("Ndonga")},
    {_T("nl"), _T("Dutch")},
    {_T("nn"), _T("Norwegian Nynorsk")},
    {_T("nb"), _T("Norwegian Bokmal")},
    {_T("nr"), _T("Ndebele, South")},
    {_T("nv"), _T("Navajo")},
    {_T("ny"), _T("Chichewa; Nyanja")},

    {_T("oc"), _T("Occitan")},
    {_T("om"), _T("(Afan) Oromo")},
    {_T("or"), _T("Oriya")},
    {_T("os"), _T("Ossetian; Ossetic")},

    {_T("pa"), _T("Panjabi")},
    {_T("pi"), _T("Pali")},
    {_T("pl"), _T("Polish")},
    {_T("ps"), _T("Pashto, Pushto")},
    {_T("pt"), _T("Portuguese")},

    {_T("qu"), _T("Quechua")},

    {_T("rm"), _T("Rhaeto-Romance")},
    {_T("rn"), _T("Rundi")},
    {_T("ro"), _T("Romanian")},
    {_T("ru"), _T("Russian")},
    {_T("rw"), _T("Kinyarwanda")},

    {_T("sa"), _T("Sanskrit")},
    {_T("sc"), _T("Sardinian")},
    {_T("sd"), _T("Sindhi")},
    {_T("se"), _T("Northern Sami")},
    {_T("sg"), _T("Sangro")},
    {_T("sh"), _T("Serbo-Croatian")},
    {_T("si"), _T("Sinhalese")},
    {_T("sk"), _T("Slovak")},
    {_T("sl"), _T("Slovenian")},
    {_T("sm"), _T("Samoan")},
    {_T("sn"), _T("Shona")},
    {_T("so"), _T("Somali")},
    {_T("sq"), _T("Albanian")},
    {_T("sr"), _T("Serbian")},
    {_T("ss"), _T("Siswati")},
    {_T("st"), _T("Sesotho")},
    {_T("su"), _T("Sundanese")},
    {_T("sv"), _T("Swedish")},
    {_T("sw"), _T("Swahili")},

    {_T("ta"), _T("Tamil")},
    {_T("te"), _T("Telugu")},
    {_T("tg"), _T("Tajik")},
    {_T("th"), _T("Thai")},
    {_T("ti"), _T("Tigrinya")},
    {_T("tk"), _T("Turkmen")},
    {_T("tl"), _T("Tagalog")},
    {_T("tn"), _T("Setswana")},
    {_T("to"), _T("Tonga")},
    {_T("tr"), _T("Turkish")},
    {_T("ts"), _T("Tsonga")},
    {_T("tt"), _T("Tatar")},
    {_T("tw"), _T("Twi")},
    {_T("ty"), _T("Tahitian")},

    {_T("ug"), _T("Uighur")},
    {_T("uk"), _T("Ukrainian")},
    {_T("ur"), _T("Urdu")},
    {_T("uz"), _T("Uzbek")},

    {_T("vi"), _T("Vietnamese")},
    {_T("vo"), _T("Volapuk")},

    {_T("wa"), _T("Walloon")},
    {_T("wo"), _T("Wolof")},

    {_T("xh"), _T("Xhosa")},

    {_T("yi"), _T("Yiddish")},
    {_T("yo"), _T("Yoruba")},

    {_T("za"), _T("Zhuang")},
    {_T("zh"), _T("Chinese")},
    {_T("zu"), _T("Zulu")},

    {NULL, NULL}
};





LanguageStruct isoCountries[] =
{
    {_T("AF"), _T("AFGHANISTAN")},
    {_T("AL"), _T("ALBANIA")},
    {_T("DZ"), _T("ALGERIA")},
    {_T("AS"), _T("AMERICAN SAMOA")},
    {_T("AD"), _T("ANDORRA")},
    {_T("AO"), _T("ANGOLA")},
    {_T("AI"), _T("ANGUILLA")},
    {_T("AQ"), _T("ANTARCTICA")},
    {_T("AG"), _T("ANTIGUA AND BARBUDA")},
    {_T("AR"), _T("ARGENTINA")},
    {_T("AM"), _T("ARMENIA")},
    {_T("AW"), _T("ARUBA")},
    {_T("AU"), _T("AUSTRALIA")},
    {_T("AT"), _T("AUSTRIA")},
    {_T("AZ"), _T("AZERBAIJAN")},
    {_T("BS"), _T("BAHAMAS")},
    {_T("BH"), _T("BAHRAIN")},
    {_T("BD"), _T("BANGLADESH")},
    {_T("BB"), _T("BARBADOS")},
    {_T("BY"), _T("BELARUS")},
    {_T("BE"), _T("BELGIUM")},
    {_T("BZ"), _T("BELIZE")},
    {_T("BJ"), _T("BENIN")},
    {_T("BM"), _T("BERMUDA")},
    {_T("BT"), _T("BHUTAN")},
    {_T("BO"), _T("BOLIVIA")},
    {_T("BA"), _T("BOSNIA AND HERZEGOVINA")},
    {_T("BW"), _T("BOTSWANA")},
    {_T("BV"), _T("BOUVET ISLAND")},
    {_T("BR"), _T("BRAZIL")},
    {_T("IO"), _T("BRITISH INDIAN OCEAN TERRITORY")},
    {_T("BN"), _T("BRUNEI DARUSSALAM")},
    {_T("BG"), _T("BULGARIA")},
    {_T("BF"), _T("BURKINA FASO")},
    {_T("BI"), _T("BURUNDI")},
    {_T("KH"), _T("CAMBODIA")},
    {_T("CM"), _T("CAMEROON")},
    {_T("CA"), _T("CANADA")},
    {_T("CV"), _T("CAPE VERDE")},
    {_T("KY"), _T("CAYMAN ISLANDS")},
    {_T("CF"), _T("CENTRAL AFRICAN REPUBLIC")},
    {_T("TD"), _T("CHAD")},
    {_T("CL"), _T("CHILE")},
    {_T("CN"), _T("CHINA")},
    {_T("CX"), _T("CHRISTMAS ISLAND")},
    {_T("CC"), _T("COCOS (KEELING) ISLANDS")},
    {_T("CO"), _T("COLOMBIA")},
    {_T("KM"), _T("COMOROS")},
    {_T("CG"), _T("CONGO")},
    {_T("CD"), _T("CONGO, THE DEMOCRATIC REPUBLIC OF THE")},
    {_T("CK"), _T("COOK ISLANDS")},
    {_T("CR"), _T("COSTA RICA")},
    {_T("CI"), _T("COTE D'IVOIRE")},
    {_T("HR"), _T("CROATIA")},
    {_T("CU"), _T("CUBA")},
    {_T("CY"), _T("CYPRUS")},
    {_T("CZ"), _T("CZECH REPUBLIC")},
    {_T("DK"), _T("DENMARK")},
    {_T("DJ"), _T("DJIBOUTI")},
    {_T("DM"), _T("DOMINICA")},
    {_T("DO"), _T("DOMINICAN REPUBLIC")},
    {_T("EC"), _T("ECUADOR")},
    {_T("EG"), _T("EGYPT")},
    {_T("SV"), _T("EL SALVADOR")},
    {_T("GQ"), _T("EQUATORIAL GUINEA")},
    {_T("ER"), _T("ERITREA")},
    {_T("EE"), _T("ESTONIA")},
    {_T("ET"), _T("ETHIOPIA")},
    {_T("FK"), _T("FALKLAND ISLANDS (MALVINAS)")},
    {_T("FO"), _T("FAROE ISLANDS")},
    {_T("FJ"), _T("FIJI")},
    {_T("FI"), _T("FINLAND")},
    {_T("FR"), _T("FRANCE")},
    {_T("GF"), _T("FRENCH GUIANA")},
    {_T("PF"), _T("FRENCH POLYNESIA")},
    {_T("TF"), _T("FRENCH SOUTHERN TERRITORIES")},
    {_T("GA"), _T("GABON")},
    {_T("GM"), _T("GAMBIA")},
    {_T("GE"), _T("GEORGIA")},
    {_T("DE"), _T("GERMANY")},
    {_T("GH"), _T("GHANA")},
    {_T("GI"), _T("GIBRALTAR")},
    {_T("GR"), _T("GREECE")},
    {_T("GL"), _T("GREENLAND")},
    {_T("GD"), _T("GRENADA")},
    {_T("GP"), _T("GUADELOUPE")},
    {_T("GU"), _T("GUAM")},
    {_T("GT"), _T("GUATEMALA")},
    {_T("GN"), _T("GUINEA")},
    {_T("GW"), _T("GUINEA-BISSAU")},
    {_T("GY"), _T("GUYANA")},
    {_T("HT"), _T("HAITI")},
    {_T("HM"), _T("HEARD ISLAND AND MCDONALD ISLANDS")},
    {_T("VA"), _T("HOLY SEE (VATICAN CITY STATE)")},
    {_T("HN"), _T("HONDURAS")},
    {_T("HK"), _T("HONG KONG")},
    {_T("HU"), _T("HUNGARY")},
    {_T("IS"), _T("ICELAND")},
    {_T("IN"), _T("INDIA")},
    {_T("ID"), _T("INDONESIA")},
    {_T("IR"), _T("IRAN, ISLAMIC REPUBLIC OF")},
    {_T("IQ"), _T("IRAQ")},
    {_T("IE"), _T("IRELAND")},
    {_T("IL"), _T("ISRAEL")},
    {_T("IT"), _T("ITALY")},
    {_T("JM"), _T("JAMAICA")},
    {_T("JP"), _T("JAPAN")},
    {_T("JO"), _T("JORDAN")},
    {_T("KZ"), _T("KAZAKHSTAN")},
    {_T("KE"), _T("KENYA")},
    {_T("KI"), _T("KIRIBATI")},
    {_T("KP"), _T("KOREA, DEMOCRATIC PEOPLE'S REPUBLIC OF")},
    {_T("KR"), _T("KOREA, REPUBLIC OF")},
    {_T("KW"), _T("KUWAIT")},
    {_T("KG"), _T("KYRGYZSTAN")},
    {_T("LA"), _T("LAO PEOPLE'S DEMOCRATIC REPUBLIC")},
    {_T("LV"), _T("LATVIA")},
    {_T("LB"), _T("LEBANON")},
    {_T("LS"), _T("LESOTHO")},
    {_T("LR"), _T("LIBERIA")},
    {_T("LY"), _T("LIBYAN ARAB JAMAHIRIYA")},
    {_T("LI"), _T("LIECHTENSTEIN")},
    {_T("LT"), _T("LITHUANIA")},
    {_T("LU"), _T("LUXEMBOURG")},
    {_T("MO"), _T("MACAO")},
    {_T("MK"), _T("MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF")},
    {_T("MG"), _T("MADAGASCAR")},
    {_T("MW"), _T("MALAWI")},
    {_T("MY"), _T("MALAYSIA")},
    {_T("MV"), _T("MALDIVES")},
    {_T("ML"), _T("MALI")},
    {_T("MT"), _T("MALTA")},
    {_T("MH"), _T("MARSHALL ISLANDS")},
    {_T("MQ"), _T("MARTINIQUE")},
    {_T("MR"), _T("MAURITANIA")},
    {_T("MU"), _T("MAURITIUS")},
    {_T("YT"), _T("MAYOTTE")},
    {_T("MX"), _T("MEXICO")},
    {_T("FM"), _T("MICRONESIA, FEDERATED STATES OF")},
    {_T("MD"), _T("MOLDOVA, REPUBLIC OF")},
    {_T("MC"), _T("MONACO")},
    {_T("MN"), _T("MONGOLIA")},
    {_T("MS"), _T("MONTSERRAT")},
    {_T("MA"), _T("MOROCCO")},
    {_T("MZ"), _T("MOZAMBIQUE")},
    {_T("MM"), _T("MYANMAR")},
    {_T("NA"), _T("NAMIBIA")},
    {_T("NR"), _T("NAURU")},
    {_T("NP"), _T("NEPAL")},
    {_T("NL"), _T("NETHERLANDS")},
    {_T("AN"), _T("NETHERLANDS ANTILLES")},
    {_T("NC"), _T("NEW CALEDONIA")},
    {_T("NZ"), _T("NEW ZEALAND")},
    {_T("NI"), _T("NICARAGUA")},
    {_T("NE"), _T("NIGER")},
    {_T("NG"), _T("NIGERIA")},
    {_T("NU"), _T("NIUE")},
    {_T("NF"), _T("NORFOLK ISLAND")},
    {_T("MP"), _T("NORTHERN MARIANA ISLANDS")},
    {_T("NO"), _T("NORWAY")},
    {_T("OM"), _T("OMAN")},
    {_T("PK"), _T("PAKISTAN")},
    {_T("PW"), _T("PALAU")},
    {_T("PS"), _T("PALESTINIAN TERRITORY, OCCUPIED")},
    {_T("PA"), _T("PANAMA")},
    {_T("PG"), _T("PAPUA NEW GUINEA")},
    {_T("PY"), _T("PARAGUAY")},
    {_T("PE"), _T("PERU")},
    {_T("PH"), _T("PHILIPPINES")},
    {_T("PN"), _T("PITCAIRN")},
    {_T("PL"), _T("POLAND")},
    {_T("PT"), _T("PORTUGAL")},
    {_T("PR"), _T("PUERTO RICO")},
    {_T("QA"), _T("QATAR")},
    {_T("RE"), _T("REUNION")},
    {_T("RO"), _T("ROMANIA")},
    {_T("RU"), _T("RUSSIAN FEDERATION")},
    {_T("RW"), _T("RWANDA")},
    {_T("SH"), _T("SAINT HELENA")},
    {_T("KN"), _T("SAINT KITTS AND NEVIS")},
    {_T("LC"), _T("SAINT LUCIA")},
    {_T("PM"), _T("SAINT PIERRE AND MIQUELON")},
    {_T("VC"), _T("SAINT VINCENT AND THE GRENADINES")},
    {_T("WS"), _T("SAMOA")},
    {_T("SM"), _T("SAN MARINO")},
    {_T("ST"), _T("SAO TOME AND PRINCIPE")},
    {_T("SA"), _T("SAUDI ARABIA")},
    {_T("SN"), _T("SENEGAL")},
    {_T("SC"), _T("SEYCHELLES")},
    {_T("SL"), _T("SIERRA LEONE")},
    {_T("SG"), _T("SINGAPORE")},
    {_T("SK"), _T("SLOVAKIA")},
    {_T("SI"), _T("SLOVENIA")},
    {_T("SB"), _T("SOLOMON ISLANDS")},
    {_T("SO"), _T("SOMALIA")},
    {_T("ZA"), _T("SOUTH AFRICA")},
    {_T("GS"), _T("SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS")},
    {_T("ES"), _T("SPAIN")},
    {_T("LK"), _T("SRI LANKA")},
    {_T("SD"), _T("SUDAN")},
    {_T("SR"), _T("SURINAME")},
    {_T("SJ"), _T("SVALBARD AND JAN MAYEN")},
    {_T("SZ"), _T("SWAZILAND")},
    {_T("SE"), _T("SWEDEN")},
    {_T("CH"), _T("SWITZERLAND")},
    {_T("SY"), _T("SYRIAN ARAB REPUBLIC")},
    {_T("TW"), _T("TAIWAN")},
    {_T("TJ"), _T("TAJIKISTAN")},
    {_T("TZ"), _T("TANZANIA, UNITED REPUBLIC OF")},
    {_T("TH"), _T("THAILAND")},
    {_T("TL"), _T("TIMOR-LESTE")},
    {_T("TG"), _T("TOGO")},
    {_T("TK"), _T("TOKELAU")},
    {_T("TO"), _T("TONGA")},
    {_T("TT"), _T("TRINIDAD AND TOBAGO")},
    {_T("TN"), _T("TUNISIA")},
    {_T("TR"), _T("TURKEY")},
    {_T("TM"), _T("TURKMENISTAN")},
    {_T("TC"), _T("TURKS AND CAICOS ISLANDS")},
    {_T("TV"), _T("TUVALU")},
    {_T("UG"), _T("UGANDA")},
    {_T("UA"), _T("UKRAINE")},
    {_T("AE"), _T("UNITED ARAB EMIRATES")},
    {_T("GB"), _T("UNITED KINGDOM")},
    {_T("US"), _T("UNITED STATES")},
    {_T("UM"), _T("UNITED STATES MINOR OUTLYING ISLANDS")},
    {_T("UY"), _T("URUGUAY")},
    {_T("UZ"), _T("UZBEKISTAN")},
    {_T("VU"), _T("VANUATU")},
    {_T("VE"), _T("VENEZUELA")},
    {_T("VN"), _T("VIET NAM")},
    {_T("VG"), _T("VIRGIN ISLANDS, BRITISH")},
    {_T("VI"), _T("VIRGIN ISLANDS, U.S.")},
    {_T("WF"), _T("WALLIS AND FUTUNA")},
    {_T("EH"), _T("WESTERN SAHARA")},
    {_T("YE"), _T("YEMEN")},
    {_T("YU"), _T("YUGOSLAVIA")},
    {_T("ZM"), _T("ZAMBIA")},
    {_T("ZW"), _T("ZIMBABWE")},

    {NULL, NULL}
};


static const wxChar *DoLookupByLang(const wxChar *lng, LanguageStruct *a)
{
    if (lng == NULL)
        return NULL;
    for (size_t i = 0; a[i].iso != NULL; i++)
    {
        if (wxStricmp(a[i].lang, lng) == 0)
            return a[i].iso;
    }
    return NULL;
}

static const wxChar *DoLookupByIso(const wxChar *iso, LanguageStruct *a)
{
    if (iso == NULL)
        return NULL;
    for (size_t i = 0; a[i].iso != NULL; i++)
    {
        if (wxStricmp(a[i].iso, iso) == 0)
            return a[i].lang;
    }
    return NULL;
}

const wxChar *LookupLanguageCode(const wxString& language)
{
    return DoLookupByLang(language.c_str(), isoLanguages);
}

const wxChar *LookupCountryCode(const wxString& country)
{
    return DoLookupByLang(country.c_str(), isoCountries);
}

bool IsKnownLanguageCode(const wxString& code)
{
    return DoLookupByIso(code.c_str(), isoLanguages) != NULL;
}

bool IsKnownCountryCode(const wxString& code)
{
    return DoLookupByIso(code.c_str(), isoCountries) != NULL;
}
