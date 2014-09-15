#define STR(x) { .str = (uint8_t*)x, .length = sizeof(x) - 1 }

STRING strings[][64] = {
//Deutsch  GERMAN
{
    //0
    STR("Freundschaftsanfrage verschickt. Dein Freund wird online erscheinen, wenn er deine Anfrage akzeptiert."),
    STR("Versuche DNS Namen aufzulösen..."),
    STR("Fehler: Ungültige Tox ID"),
    STR("Fehler: Keine Tox ID angegeben"),
    STR("Fehler: Nachricht ist zu lang"),
    STR("Fehler: Leere Nachricht"),
    STR("Fehler: Tox ID ist eigene ID"),
    STR("Fehler: Tox ID ist bereits in der Freundesliste"),
    STR("Fehler: Unbekannt"),
    STR("Fehler: Ungültige Tox ID (bad checksum)"),
    STR("Fehler: Ungültige Tox ID (bad nospam value)"),
    STR("Fehler: Kein Speicher"),

    //12
    STR("Neue Datenübertragung"),
    STR("Datenübertragung gestartet"),
    STR("..."),
    STR("Datenübertragung pausiert"),
    STR("Datenübertragung fehlerhaft"),
    STR("Datenübertragung abgebrochen"),
    STR("Datenübertragung fertig"),

    //19
    STR("Anruf abgebrochen"),
    STR("Anruf eingeladen"),
    STR("Anruf klingelt"),
    STR("Anruf gestartet"),

    //23
    STR("Freunde hinzufügen"),
    STR("Tox ID"),
    STR("Nachricht"),
    STR("Suche Freund"),
    STR("Hinzufügen"),
    STR("Profil wechseln"),
    STR("Freundesanfrage"),
    STR("Benutzereinstellungen"),
    STR("Name"),
    STR("Statusnachricht"),
    STR("Vorschau"),
    STR("Geräteauswahl"),
    STR("Audioquelle"),
    STR("Audio-Ausgabegerät"),
    STR("Videoquelle"),
    STR("Andere Einstellungen"),
    STR("DPI"),
    STR("Standort speichern"),
    STR("Sprache"),
    STR("Netzwerk"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Das Verändern von Netzwerk/Proxy-Einstellungen unterbricht die Verbindung zum Tox-Netzwerk."),
    STR("Logging"),

    //41
    STR("Kopieren"),
    STR("Kopieren (ohne Namen)"),
    STR("Ausschneiden"),
    STR("Einfügen"),
    STR("Löschen"),
    STR("Alle auswählen"),
    STR("Entfernen"),
    STR("Verlassen"),
    STR("Akzeptieren"),
    STR("Ignorieren"),

    //50
    STR("Zum speichern klicken"),
    STR("Zum öffnen klicken"),
    STR("Abgebrochen"),
},

//English  ENGLISH
{
    //0
    STR("Friend request sent. Your friend will appear online after the request is accepted."),
    STR("Attempting to resolve DNS name..."),
    STR("Error: Invalid Tox ID"),
    STR("Error: No Tox ID specified"),
    STR("Error: Message is too long"),
    STR("Error: Empty message"),
    STR("Error: Tox ID is self ID"),
    STR("Error: Tox ID is already in friend list"),
    STR("Error: Unknown"),
    STR("Error: Invalid Tox ID (bad checksum)"),
    STR("Error: Invalid Tox ID (bad nospam value)"),
    STR("Error: No memory"),

    //12
    STR("New file transfer"),
    STR("File transfer started"),
    STR("..."),
    STR("File transfer paused"),
    STR("File transfer broken"),
    STR("File transfer cancelled"),
    STR("File transfer complete"),

    //19
    STR("Call cancelled"),
    STR("Call invited"),
    STR("Call ringing"),
    STR("Call started"),

    //23
    STR("Add Friends"),
    STR("Tox ID"),
    STR("Message"),
    STR("Search friends"),
    STR("Add"),
    STR("Switch Profile"),
    STR("Friend Request"),
    STR("User Settings"),
    STR("Name"),
    STR("Status Message"),
    STR("Preview"),
    STR("Device Selection"),
    STR("Audio Input Device"),
    STR("Audio Output Device"),
    STR("Video Input Device"),
    STR("Other Settings"),
    STR("DPI"),
    STR("Save Location"),
    STR("Language"),
    STR("Network"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Changing Network/Proxy settings will disconnect you from the Tox network"),
    STR("Logging"),

    //41
    STR("Copy"),
    STR("Copy (no names)"),
    STR("Cut"),
    STR("Paste"),
    STR("Delete"),
    STR("Select All"),
    STR("Remove"),
    STR("Leave"),
    STR("Accept"),
    STR("Ignore"),

    //50
    STR("Click to save"),
    STR("Click to open"),
    STR("Cancelled"),
},

//Spanish SPANISH
{
    STR("Solicitud de Amistad enviada. Esta persona aparecerá conectada cuando acepte la solicitud."),
    STR("Resolviendo DNS..."),
    STR("Error: Tox ID invalida"),
    STR("Error: Ninguna Tox ID especificada"),
    STR("Error: Mensaje demasiado largo"),
    STR("Error: Mensaje vació"),
    STR("Error: Tox ID es ID propia"),
    STR("Error: Tox ID ya se encuentra en la lista de amigos"),
    STR("Error: Desconocido"),
    STR("Error: Tox ID Invalida (Checksum Incorrecta)"),
    STR("Error: Tox ID Invalida (valor nospam Incorrecto)"),
    STR("Error: Sin Memoria"),

    //12
    STR("Nueva Transferencia de archivos"),
    STR("Transferencia de archivos Iniciada"),
    STR("..."),
    STR("Transferencia de archivos pausada"),
    STR("Transferencia de archivos interrumpida"),
    STR("Transferencia de archivos cancelada"),
    STR("Transferencia de archivos completada"),
    
    //19
    STR("Llamada cancelada"),
    STR("Llamada entrante"),
    STR("Llamando"),
    STR("Llamada iniciada"),
    
    //23
    STR("Agregar amigos"),
    STR("Tox ID"),
    STR("Mensaje"),
    STR("Buscar amigos"),
    STR("Agregar"),
    STR("Cambiar perfil"),
    STR("Solicitudes de amistad"),
    STR("Configuración"),
    STR("Nombre"),
    STR("Estado"),
    STR("Vista preliminar"),
    STR("Seleccionar dispositivo"),
    STR("Seleccionar Entrada de Audio"),
    STR("Seleccionar Salida de Audio"),
    STR("Seleccionar Entrada de Vídeo"),
    STR("Configuración extra"),
    STR("DPI"),
    STR("Guardar ubicación"),
    STR("Idioma"),
    STR("Red"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Al Cambiar configuración de la Red/Proxy, sera desconectado de la Red Tox"),
    STR("Registrando"),
    
    //41
    STR("Copiar"),
    STR("Copiar (sin nombres)"),
    STR("Cortar"),
    STR("Pegar"),
    STR("Borrar"),
    STR("Seleccionar Todo"),
    STR("Eliminar"),
    STR("Salir"),
    STR("Aceptar"),
    STR("Ignorar"),
    //50
    STR("Click para guardar"),
    STR("Click para abrir"),
    STR("Cancelado"),

},

//French FRENCH
{
    //0
    STR("Demande envoyée. Votre ami apparaîtra en ligne quand il acceptera votre demande."),
    STR("Tente de résoudre les noms DNS..."),
    STR("Erreur: Tox ID invalide"),
    STR("Erreur: Aucun Tox ID"),
    STR("Erreur: Message trop long"),
    STR("Erreur: Message vide"),
    STR("Erreur: Tox ID est une ID personnel"),
    STR("Erreur: Tox ID est déjà dans votre liste d'ami"),
    STR("Erreur: Inconnue"),
    STR("Erreur: Tox ID invalide (bad checksum)"),
    STR("Erreur: Tox ID invalide (bad nospam value)"),
    STR("Erreur: Pas de mémoire"),

    //12
    STR("Nouveau transfert de fichier"),
    STR("Transfert de fichier commencé"),
    STR("..."),
    STR("Transfert de fichier en pause"),
    STR("Transfert de fichier interrompu"),
    STR("Transfert de fichier annulé"),
    STR("Transfert de fichier complété"),

    //19
    STR("Appel annulé"),
    STR("Réception d'un appel"),
    STR("Appel en cours"),
    STR("Appel commencé"),

    //23
    STR("Ajouter un ami"),
    STR("Tox ID"),
    STR("Message"),
    STR("Recherche d'ami"),
    STR("Ajouter"),
    STR("Changement de profil"),
    STR("Demande d'ami"),
    STR("Paramètre d'utilisateur"),
    STR("Nom"),
    STR("Message d'humeur"),
    STR("Aperçu"),
    STR("Sélection des périphériques"),
    STR("Périphérique d'entrée audio"),
    STR("Périphérique de sortie audio"),
    STR("Périphérique d'entrée vidéo"),
    STR("Autres paramètres"),
    STR("Taille de la police"),
    STR("Emplacement de sauvegarde"),
    STR("Langue"),
    STR("Réseau"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Modifier les paramètres Réseau/Proxy vous déconnectera du réseau Tox"),
    STR("Historique"),

    //41
    STR("Copier"),
    STR("Copier (sans les noms)"),
    STR("Couper"),
    STR("Coller"),
    STR("Supprimer"),
    STR("Tout sélectionner"),
    STR("Effacer"),
    STR("Partir"),
    STR("Accepter"),
    STR("Ignorer"),

    //50
    STR("Cliquer pour sauvegarder"),
    STR("Cliquer pour ouvrir"),
    STR("Annulé"),
},

//Italiano  ITALIAN
{
    //0
    STR("Richiesta d'amicizia inviata. Il contatto apparirà online quando accetterà la richiesta."),
    STR("Tentativo di risoluzione del nome attraverso DNS..."),
    STR("Errore: Tox ID non valido"),
    STR("Errore: Nessun Tox ID specificato"),
    STR("Errore: Il messaggio è troppo lungo"),
    STR("Errore: Il messaggio è vuoto"),
    STR("Errore: Non puoi inserire il tuo Tox ID"),
    STR("Errore: Questo Tox ID è già nella tua lista dei contatti"),
    STR("Errore: Sconosciuto"),
    STR("Errore: Tox ID non valido (checksum errato)"),
    STR("Errore: Tox ID non valido (valore \"nospam\" errato)"),
    STR("Errore: Memoria insufficiente"),

    //12
    STR("Nuovo trasferimento file"),
    STR("Trasferimento file iniziato"),
    STR("..."),
    STR("Trasferimento file in pausa"),
    STR("Trasferimento file interrotto"),
    STR("Trasferimento file annullato"),
    STR("Trasferimento file completato"),

    //19
    STR("Chiamata terminata"),
    STR("Ti sta chiamando"),
    STR("Sta squillando"),
    STR("Chiamata iniziata"),

    //23
    STR("Aggiungi contatto"),
    STR("Tox ID"),
    STR("Messaggio"),
    STR("Cerca contatti"),
    STR("Aggiungi"),
    STR("Cambia Profilo"),
    STR("Richieste d'amicizia"),
    STR("Impostazioni"),
    STR("Nome"),
    STR("Messaggio di stato"),
    STR("Anteprima"),
    STR("Dispositivi"),
    STR("Audio (input)"),
    STR("Audio (output)"),
    STR("Video (input)"),
    STR("Altro"),
    STR("DPI"),
    STR("Salva Locazione"),
    STR("Lingua"),
    STR("Rete"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Cambiando le impostazioni del Network o del Proxy, verrai disconnesso dalla rete Tox"),
    STR("Salvare i log delle chat?"),

    //41
    STR("Copia"),
    STR("Copia (nessun nome)"),
    STR("Taglia"),
    STR("Incolla"),
    STR("Cancella"),
    STR("Seleziona Tutto"),
    STR("Rimuovi"),
    STR("Abbandona"),
    STR("Accetta"),
    STR("Ignora"),

    //50
    STR("Clicca per salvare"),
    STR("Clicca per aprire"),
    STR("Annullato"),
},

//日本語  JAPANESE
{
    //0
    STR("フレンド要求が送信されました。要求が承諾されるとオンライン表示になります。"),
    STR("DNS解決中"),
    STR("エラー: 無効なTox IDです"),
    STR("エラー: Tox IDが指定されていません"),
    STR("エラー: メッセージが長すぎます"),
    STR("エラー: 空のメッセージ"),
    STR("エラー: Tox IDは自身のIDです"),
    STR("エラー: Tox IDは既にフレンドリストの中です"),
    STR("エラー: 不明"),
    STR("エラー: Tox IDは不正です (不正なチェックサム)"),
    STR("エラー: Tox IDは不正です (不正なnospam値)"),
    STR("エラー: メモリ不足です"),

    //12
    STR("新しいファイルの転送"),
    STR("ファイルの転送が開始しました"),
    STR("..."),
    STR("ファイルの転送が停止しました"),
    STR("ファイルの転送が失敗しました"),
    STR("ファイルの転送をキャンセルしました"),
    STR("ファイルの転送が完了しました"),

    //19
    STR("通話をキャンセルしました"),
    STR("通話を招待しました"),
    STR("通話が鳴っています"),
    STR("通話を開始しました"),

    //23
    STR("フレンド追加"),
    STR("Tox ID"),
    STR("メッセージ"),
    STR("フレンドの検索"),
    STR("追加"),
    STR("プロファイルを変更"),
    STR("フレンド要求"),
    STR("ユーザ設定"),
    STR("名前"),
    STR("状態メッセージ"),
    STR("プレビュー"),
    STR("デバイス選択"),
    STR("音声入力デバイス"),
    STR("音声出力デバイス"),
    STR("ビデオ入力デバイス"),
    STR("他の設定"),
    STR("解像度"),
    STR("場所の保存"),
    STR("言語"),
    STR("ネットワーク"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("プロキシ (SOCKS 5)"),
    STR("ネットワークやプロキシの設定を変えるとToxネットワークの接続が切断されます"),
    STR("ロギング"),

    //41
    STR("コピー"),
    STR("コピー（名前以外）"),
    STR("カット"),
    STR("ペースト"),
    STR("削除"),
    STR("すべてを選択"),
    STR("削除"),
    STR("退出"),
    STR("承認"),
    STR("無視する"),

    //50
    STR("クリックで保存"),
    STR("クリックで開く"),
    STR("キャンセルしました"),
},

//Latviešu  LATVIAN
{
    //0
    STR("Friend request sent. Your friend will appear online when they accept the request."),
    STR("Attempting to resolve DNS name..."),
    STR("Kļūda: Nederīgs Tox ID"),
    STR("Kļūda: No Tox ID specified"),
    STR("Kļūda: Ziņa ir pārāk gara"),
    STR("Kļūda: Tukša ziņa"),
    STR("Kļūda: Tox ID is self ID"),
    STR("Kļūda: Tox ID jau ir draugu sarakstā"),
    STR("Kļūda: Unknown"),
    STR("Kļūda: Nederīgs Tox ID (bad checksum)"),
    STR("Kļūda: Nederīgs Tox ID (bad nospam value)"),
    STR("Kļūda: No memory"),

    //12
    STR("Jauna faila pārsūtīšana"),
    STR("Faila pārsūtīšana sākta"),
    STR("..."),
    STR("Faila pārsūtīšana apturēta"),
    STR("Kļūda faila pārsūtīšanā"),
    STR("Faila pārsūtīšana atcelta"),
    STR("Faila pārsūtīšana pabeigta"),

    //19
    STR("Zvans atcelts"),
    STR("Call invited"),
    STR("Call ringing"),
    STR("Zvans uzsākts"),

    //23
    STR("Pievienot draugus"),
    STR("Tox ID"),
    STR("Ziņa"),
    STR("Meklēt draugus"),
    STR("Pievienot"),
    STR("Switch Profile"),
    STR("Friend Request"),
    STR("Lietotāja iestatījumi"),
    STR("Vārds"),
    STR("Statusa ziņojums"),
    STR("Priekšskatījums"),
    STR("Ierīču izvēle"),
    STR("Audio ievades ierīce"),
    STR("Audio izvades ierīce"),
    STR("Video ievades ierīce"),
    STR("Citi iestatījumi"),
    STR("DPI"),
    STR("Save Location"),
    STR("Valoda"),
    STR("Tīkls"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Starpniekserveris (SOCKS 5)"),
    STR("Changing Network/Proxy settings will disconnect you from the Tox network"),
    STR("Logging"),

    //41
    STR("Kopēt"),
    STR("Kopēt (no names)"),
    STR("Izgriezt"),
    STR("Ielīmēt"),
    STR("Dzēst"),
    STR("Atlasīt visu"),
    STR("Noņemt"),
    STR("Pamest"),
    STR("Accept"),
    STR("Ignorēt"),

    //50
    STR("Spiest, lai saglabātu"),
    STR("Spiest, lai atvērtu"),
    STR("Atcelts"),
},

//Nederlands DUTCH
{
    //0
    STR("Vriendschapsverzoek verstuurd. Uw vriend zal online verschijnen zodra hij/zij deze heeft geaccepteerd."),
    STR("Proberen om de DNS naam op te zoeken..."),
    STR("Fout: Ongeldig Tox ID"),
    STR("Fout: Geen Tox ID gegeven"),
    STR("Fout: Het bericht is te lang"),
    STR("Fout: Het bericht is leeg"),
    STR("Fout: Het Tox ID is gelijk aan die van uzelf"),
    STR("Fout: Het desbetreffende Tox ID staat al in uw vriendenlijst"),
    STR("Fout: Onbekend"),
    STR("Fout: Ongeldig Tox ID (foutief controlecijfer)"),
    STR("Fout: Ongeldig Tox ID (foutieve nospam waarde)"),
    STR("Fout: Niet genoeg geheugen"),

    //12
    STR("Nieuwe bestandsoverdracht"),
    STR("Bestandsoverdracht gestart"),
    STR("..."),
    STR("Bestandsoverdracht gepauzeerd"),
    STR("Bestandsoverdracht onderbroken"),
    STR("Bestandsoverdracht geannuleerd"),
    STR("Bestandsoverdracht voltooid"),

    //19
    STR("Gesprek geannuleerd"),
    STR("Gespreksuitnodiging verstuurd"),
    STR("Call ringing"),
    STR("Gesprek gestart"),

    //23
    STR("Vrienden Toevoegen"),
    STR("Tox ID"),
    STR("Bericht"),
    STR("Zoek Vrienden"),
    STR("Toevoegen"),
    STR("Van Profiel Veranderen"),
    STR("Vriendschapsverzoek"),
    STR("Gebruikersinstellingen"),
    STR("Naam"),
    STR("Statusbericht"),
    STR("Voorbeeld"),
    STR("Apparaat Selectie"),
    STR("Geluid Invoerapparaat"),
    STR("Geluid Uitvoerapparaat"),
    STR("Video Invoerapparaat"),
    STR("Andere Instellingen"),
    STR("DPI"),
    STR("Opslaglocatie"),
    STR("Taal"),
    STR("Netwerk"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Veranderen van Netwerk/Proxy instelling zal de verbinding met het Tox netwerk verbreken"),
    STR("Logging"),

    //41
    STR("Kopiëren"),
    STR("Kopieër (zonder namen)"),
    STR("Knippen"),
    STR("Plakken"),
    STR("Wissen"),
    STR("Alles Selecteren"),
    STR("Verwijderen"),
    STR("Verlaten"),
    STR("Accepteren"),
    STR("Negeren"),

    //50
    STR("Klik om op te slaan"),
    STR("Klik om te openen"),
    STR("Geannuleerd"),
},

//Polski POLISH
{
    //0
    STR("Zapytanie zostało wysłane. Znajomy/a pojawi się online kiedy zaakceptuje zapytanie."),
    STR("Próba rozwiązania nazwy DNS..."),
    STR("Błąd: Niepoprawny Tox ID"),
    STR("Błąd: Nie określono Tox ID"),
    STR("Błąd: Wiadomość jest zbyt długa"),
    STR("Błąd: Pusta wiadomość"),
    STR("Błąd: Tox ID to twój ID"),
    STR("Błąd: Tox ID jest już na liście znajomych"),
    STR("Błąd: Nieznany"),
    STR("Błąd: Niepoprawny Tox ID (zła suma kontrolna)"),
    STR("Błąd: Niepoprawny Tox ID (zła wartość nospam)"),
    STR("Błąd: Brak pamięci"),

    //12
    STR("Nowy transfer pliku"),
    STR("Transfer pliku rozpoczęty"),
    STR("..."),
    STR("Transfer pliku wstrzymany"),
    STR("Transfer pliku nieudany"),
    STR("Transfer pliku anulowany"),
    STR("Transfer pliku zakończony"),

    //19
    STR("Rozmowa anulowana"),
    STR("Rozmowa przychodząca"),
    STR("Nawiązywanie połączenia"),
    STR("Rozmowa rozpoczęta"),

    //23
    STR("Dodaj znajomych"),
    STR("Tox ID"),
    STR("Wiadomość"),
    STR("Znajdź znajomych"),
    STR("Dodaj"),
    STR("Zmień profil"),
    STR("Zapytanie do znajomych"),
    STR("Ustawienia użytkownika"),
    STR("Nick"),
    STR("Status"),
    STR("Podgląd"),
    STR("Wybór urządzenia"),
    STR("Urządzenie wejściowe audio"),
    STR("Urządzenie wyjściowe audio"),
    STR("Urządzenie wejściowe wideo"),
    STR("Inne ustawienia"),
    STR("DPI"),
    STR("Lokalizacja dla zapisu danych"),
    STR("Język"),
    STR("Sieć"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Zmiana ustawień sieci/proxy rozłączy cię z siecią Tox"),
    STR("Historia"),

    //41
    STR("Kopiuj"),
    STR("Kopiuj (bez nicków)"),
    STR("Wytnij"),
    STR("Wklej"),
    STR("Usuń"),
    STR("Zaznacz wszystko"),
    STR("Usuń"),
    STR("Opuść"),
    STR("Zaakceptuj"),
    STR("Ignoruj"),

    //50
    STR("Przyciśnij by zapisać"),
    STR("Przyciśnij by otworzyć"),
    STR("Anulowano"),
},

//Русский RUSSIAN
{
    //0
    STR("Запрос добавления в друзья отправлен. Ваш друг появится в сети, как только подтвердит запрос."),
    STR("Попытка определения DNS-имени..."),
    STR("Ошибка: Некорректный Tox ID"),
    STR("Ошибка: Не указан Tox ID"),
    STR("Ошибка: Слишком длинное сообщение"),
    STR("Ошибка: Пустое сообщение"),
    STR("Ошибка: Tox ID совпадает с собственным"),
    STR("Ошибка: Tox ID уже в списке друзей"),
    STR("Ошибка: Неизвестная"),
    STR("Ошибка: Некорректный Tox ID (контрольная сумма не совпадает)"),
    STR("Ошибка: Некорректный Tox ID (плохое значение nospam)"),
    STR("Ошибка: Не хватает памяти"),

    //12
    STR("Передача нового файла"),
    STR("Передача файла начата"),
    STR("..."),
    STR("Передача файла приостановлена"),
    STR("Передача файла прервана"),
    STR("Передача файла отменена"),
    STR("Передача файла завершена"),

    //19
    STR("Звонок отменён"),
    STR("Входящий звонок"),
    STR("Исходящий Звонок"),
    STR("Разговор начат"),

    //23
    STR("Добавить друзей"),
    STR("Tox ID"),
    STR("Сообщение"),
    STR("Поиск друзей"),
    STR("Добавить"),
    STR("Переключить профиль"),
    STR("Запрос добавления в список друзей"),
    STR("Настройки пользователя"),
    STR("Имя"),
    STR("Статусное сообщение"),
    STR("Предпросмотр"),
    STR("Выбор устройств"),
    STR("Устройство ввода звука"),
    STR("Устройство вывода звука"),
    STR("Устройство захвата видео"),
    STR("Другие настройки"),
    STR("Разрешение, точек/дюйм"),
    STR("Сохранить расположение"),
    STR("Язык"),
    STR("Сеть"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Прокси (SOCKS 5)"),
    STR("Изменение настроек сети или прокси-сервера требует отключения от сети Tox"),
    STR("Сохранять историю чата"),

    //41
    STR("Копировать"),
    STR("Копировать (без имени)"),
    STR("Вырезать"),
    STR("Вставить"),
    STR("Удалить"),
    STR("Выделить всё"),
    STR("Удалить"),
    STR("Покинуть"),
    STR("Принять"),
    STR("Игнорировать"),

    //50
    STR("Сохранить"),
    STR("Открыть"),
    STR("Отменено"),
},

//Українська UKRAINIAN
{
    //0
    STR("Запит до друга надіслано. Контакт з'явиться в мережі щойно підтвердить ваш запит."),
    STR("Визначення DNS-імені..."),
    STR("Помилка: Невірний Tox ID"),
    STR("Помилка: Не вказано Tox ID"),
    STR("Помилка: Повідомлення занадто довге"),
    STR("Помилка: Порожнє повідомлення"),
    STR("Помилка: Tox ID є власним ID"),
    STR("Помилка: Tox ID вже у списку друзів"),
    STR("Помилка: Невідома"),
    STR("Помилка: Невірний Tox ID (контрольна сума)"),
    STR("Помилка: Невірний Tox ID (антиспам)"),
    STR("Помилка: Недостатньо пам'яті"),

    //12
    STR("Передача файлу"),
    STR("Розпочато передачу файлу"),
    STR("..."),
    STR("Призупинено передачу файлу"),
    STR("Перервано передачу файлу"),
    STR("Скасовано передачу файлу"),
    STR("Завершено передачу файлу"),

    //19
    STR("Дзвінок скасовано"),
    STR("Вхідний виклик"),
    STR("Вихідний виклик"),
    STR("Розпочато розмову"),

    //23
    STR("Додати друзів"),
    STR("Tox ID"),
    STR("Повідомлення"),
    STR("Пошук друзів"),
    STR("Додати"),
    STR("Перемикання профілю"),
    STR("Запит додання до друзів"),
    STR("Налаштування користувача"),
    STR("Ім'я"),
    STR("Статус"),
    STR("Перевірка"),
    STR("Вибір пристроїв"),
    STR("Пристрій захоплення звуку"),
    STR("Пристрій відтворення звуку"),
    STR("Пристрій захоплення відео"),
    STR("Інше"),
    STR("Масштаб"),
    STR("Місце збереження"),
    STR("Мова"),
    STR("Мережа"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Проксі (SOCKS 5)"),
    STR("Зміна налаштувань мережі або проксі-сервера потребує від'єднання від мережі Tox"),
    STR("Зберігати історію чату"),

    //41
    STR("Копіювати"),
    STR("Копіювати (без імені)"),
    STR("Вирізати"),
    STR("Вставити"),
    STR("Видалити"),
    STR("Вибрати все"),
    STR("Видалити"),
    STR("Вийти"),
    STR("Прийняти"),
    STR("Ігнорувати"),

    //50
    STR("Натисніть для збереження"),
    STR("Натисніть для відкриття"),
    STR("Скасовано"),
},

//简体中文  SIMPLIFIED CHINESE
{
    //0
    STR("添加好友请求已发送。当对方接受请求后将在好友列表中在线。"),
    STR("尝试解析DNS名......"),
    STR("错误： 无效的 Tox ID"),
    STR("错误： 没有指定Tox ID"),
    STR("错误： 消息太长"),
    STR("错误： 空消息"),
    STR("错误： Tox ID 是你自己的 ID"),
    STR("错误： Tox ID 已在好友列表中了"),
    STR("错误： 未知"),
    STR("错误： 无效的 Tox ID (错误的校验和)"),
    STR("错误： 无效的 Tox ID (错误的nospam值)"),
    STR("错误： 没内存了"),

    //12
    STR("新建文件传输任务"),
    STR("文件传输开始"),
    STR("..."),
    STR("文件传输暂停"),
    STR("文件传输中断"),
    STR("文件传输取消"),
    STR("文件传输完成"),

    //19
    STR("呼叫取消"),
    STR("呼叫邀请"),
    STR("呼叫振铃"),
    STR("呼叫开始"),

    //23
    STR("添加好友"),
    STR("Tox ID"),
    STR("消息"),
    STR("搜索好友"),
    STR("添加"),
    STR("切换设置"),
    STR("好友呼叫"),
    STR("用户设置"),
    STR("名字"),
    STR("状态消息（签名）"),
    STR("预览"),
    STR("设备选择"),
    STR("音频输入设备"),
    STR("音频输出设备"),
    STR("视频输入设备"),
    STR("其他设置"),
    STR("DPI"),
    STR("Save Location"),
    STR("语言"),
    STR("网络"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("代理 (SOCKS 5)"),
    STR("修改网络或代理设置将会断开tox网络连接"),

    //41
    STR("复制"),
    STR("复制 (不带名字)"),
    STR("剪切"),
    STR("粘贴"),
    STR("删除"),
    STR("全选"),
    STR("删除"),
    STR("离开"),
    STR("接受"),
    STR("忽略"),

    //50
    STR("点击保存"),
    STR("点击打开"),
    STR("取消"),
},

//繁體中文 TRADITIONAL CHINESE
{
//0
    STR("添加好友請求已發送。當對方接受請求後將在好友列表中在線。"),
    STR("嘗試解析DNS名......"),
    STR("錯誤： 無效的 Tox ID"),
    STR("錯誤： 沒有指定Tox ID"),
    STR("錯誤： 消息太長"),
    STR("錯誤： 空消息"),
    STR("錯誤： Tox ID 是你自己的 ID"),
    STR("錯誤： Tox ID 已在好友列表中了"),
    STR("錯誤： 未知"),
    STR("錯誤： 無效的 Tox ID (錯誤的校驗和)"),
    STR("錯誤： 無效的 Tox ID (錯誤的nospam值)"),
    STR("錯誤： 沒內存了"),
    //12
    STR("新建文件傳輸任務"),
    STR("文件傳輸開始"),
    STR("..."),
    STR("文件傳輸暫停"),
    STR("文件傳輸中斷"),
    STR("文件傳輸取消"),
    STR("文件傳輸完成"),
    //19
    STR("呼叫取消"),
    STR("呼叫邀請"),
    STR("呼叫振鈴"),
    STR("呼叫開始"),
    //23
    STR("添加好友"),
    STR("Tox ID"),
    STR("消息"),
    STR("搜索好友"),
    STR("添加"),
    STR("切換設置"),
    STR("好友呼叫"),
    STR("用戶設置"),
    STR("名字"),
    STR("狀態消息（簽名）"),
    STR("預覽"),
    STR("設備選擇"),
    STR("音頻輸入設備"),
    STR("音頻輸出設備"),
    STR("視頻輸入設備"),
    STR("其他設置"),
    STR("DPI"),
    STR("Save Location"),
    STR("語言"),
    STR("網絡"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("代理 (SOCKS 5)"),
    STR("修改網絡或代理設置將會斷開tox網絡連接"),
    //41
    STR("複制"),
    STR("複制 (不帶名字)"),
    STR("剪切"),
    STR("粘貼"),
    STR("刪除"),
    STR("全選"),
    STR("刪除"),
    STR("離開"),
    STR("接受"),
    STR("忽略"),
    //50
    STR("點擊保存"),
    STR("點擊打開"),
    STR("取消"),
},

//Română  ROMANIAN
{
    //0
    STR("Cerere de prietenie trimisă. Prietenul tău va apărea online după ce va fi acceptată cererea."),
    STR("Încerc să rezolv numele DNS"),
    STR("Error: Tox ID invalid"),
    STR("Error: Niciun Tox ID identificat"),
    STR("Error: Mesajul este prea lung"),
    STR("Error: Mesaj gol"),
    STR("Error: Tox ID este ID-ul în sine"),
    STR("Error: Tox ID este deja în lista ta de prieteni"),
    STR("Error: Necunoscut"),
    STR("Error: Tox ID invalid (control prost)"),
    STR("Error: Tox ID invalid (valoare nospam proastă)"),
    STR("Error: Insuficientă memorie"),
   
    //12
    STR("Transferul unui fişier nou"),
    STR("Transferul fişierului a început"),
    STR("..."),
    STR("Transferul fişierului a fost pus pe pauză"),
    STR("Transferul fişierului este stricat"),
    STR("Transferul fişierului a fost anulat"),
    STR("Transferul fişierului este complet"),
 
    //19
    STR("Apel anulat"),
    STR("Apel invitat"),
    STR("Apel sunat"),
    STR("Apel început"),

    //23
    STR("Adăugare prieteni"),
    STR("Tox ID"),
    STR("Mesaj"),
    STR("Căutare prieteni"),
    STR("Adăugare"),
    STR("Schimbare profil"),
    STR("Cerere de prietenie"),
    STR("Setările userul-ui"),
    STR("Nume"),
    STR("Mesaj de stare"),
    STR("Previzualizare"),
    STR("Selectarea dispozitivului"),
    STR("Dispozitiv de intrare audio"),
    STR("Dispozitiv de iesire audio"),
    STR("Dispozitiv de intrare video"),
    STR("Alte setări"),
    STR("DPI"),
    STR("Salvare locaţie"),
    STR("Limba"),
    STR("Internet"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Schimbarea setărilor Network/Proxy te vor deconecta de la internetul Tox"),
    STR("Logare"),

    //41
    STR("Copiere"),
    STR("Copiere (niciun nume)"),
    STR("Tăiere"),
    STR("Lipire"),
    STR("Stergere"),
    STR("Selectare tot"),
    STR("Eliminare"),
    STR("Plecare"),
    STR("Acceptare"),
    STR("Ignorare"),

    //50
    STR("Click pentru a salva"),
    STR("Click pentru a deschide"),
    STR("Anulat"),
},

//Български  BULGARIAN
{
    //0
    STR("Friend request sent. Your friend will appear online after the request is accepted."),
    STR("Attempting to resolve DNS name..."),
    STR("Error: Invalid Tox ID"),
    STR("Error: No Tox ID specified"),
    STR("Error: Message is too long"),
    STR("Error: Empty message"),
    STR("Error: Tox ID is self ID"),
    STR("Error: Tox ID is already in friend list"),
    STR("Error: Unknown"),
    STR("Error: Invalid Tox ID (bad checksum)"),
    STR("Error: Invalid Tox ID (bad nospam value)"),
    STR("Error: No memory"),

    //12
    STR("New file transfer"),
    STR("File transfer started"),
    STR("..."),
    STR("File transfer paused"),
    STR("File transfer broken"),
    STR("File transfer cancelled"),
    STR("File transfer complete"),

    //19
    STR("Call cancelled"),
    STR("Call invited"),
    STR("Call ringing"),
    STR("Call started"),

    //23
    STR("Add Friends"),
    STR("Tox ID"),
    STR("Message"),
    STR("Search friends"),
    STR("Add"),
    STR("Switch Profile"),
    STR("Friend Request"),
    STR("User Settings"),
    STR("Name"),
    STR("Status Message"),
    STR("Preview"),
    STR("Device Selection"),
    STR("Audio Input Device"),
    STR("Audio Output Device"),
    STR("Video Input Device"),
    STR("Other Settings"),
    STR("DPI"),
    STR("Save Location"),
    STR("Language"),
    STR("Network"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Changing Network/Proxy settings will disconnect you from the Tox network"),
    STR("Logging"),

    //41
    STR("Copy"),
    STR("Copy (no names)"),
    STR("Cut"),
    STR("Paste"),
    STR("Delete"),
    STR("Select All"),
    STR("Remove"),
    STR("Leave"),
    STR("Accept"),
    STR("Ignore"),

    //50
    STR("Click to save"),
    STR("Click to open"),
    STR("Cancelled"),
},

//Türk   TURKISH
{
    //0
    STR("Friend request sent. Your friend will appear online after the request is accepted."),
    STR("Attempting to resolve DNS name..."),
    STR("Error: Invalid Tox ID"),
    STR("Error: No Tox ID specified"),
    STR("Error: Message is too long"),
    STR("Error: Empty message"),
    STR("Error: Tox ID is self ID"),
    STR("Error: Tox ID is already in friend list"),
    STR("Error: Unknown"),
    STR("Error: Invalid Tox ID (bad checksum)"),
    STR("Error: Invalid Tox ID (bad nospam value)"),
    STR("Error: No memory"),

    //12
    STR("New file transfer"),
    STR("File transfer started"),
    STR("..."),
    STR("File transfer paused"),
    STR("File transfer broken"),
    STR("File transfer cancelled"),
    STR("File transfer complete"),

    //19
    STR("Call cancelled"),
    STR("Call invited"),
    STR("Call ringing"),
    STR("Call started"),

    //23
    STR("Add Friends"),
    STR("Tox ID"),
    STR("Message"),
    STR("Search friends"),
    STR("Add"),
    STR("Switch Profile"),
    STR("Friend Request"),
    STR("User Settings"),
    STR("Name"),
    STR("Status Message"),
    STR("Preview"),
    STR("Device Selection"),
    STR("Audio Input Device"),
    STR("Audio Output Device"),
    STR("Video Input Device"),
    STR("Other Settings"),
    STR("DPI"),
    STR("Save Location"),
    STR("Language"),
    STR("Network"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Changing Network/Proxy settings will disconnect you from the Tox network"),
    STR("Logging"),

    //41
    STR("Copy"),
    STR("Copy (no names)"),
    STR("Cut"),
    STR("Paste"),
    STR("Delete"),
    STR("Select All"),
    STR("Remove"),
    STR("Leave"),
    STR("Accept"),
    STR("Ignore"),

    //50
    STR("Click to save"),
    STR("Click to open"),
    STR("Cancelled"),
},

//Norsk NORWEGIAN
{
    STR("Venne forespørsel sent sent. Vennen din vil bli vist som pålogget når venneforespørselen blir godtatt."),
    STR("Forsøk på å løse DNS..."),
    STR("Error: Ugyldig Tox ID"),
    STR("Error: Ingen Tox ID spesifisert"),
    STR("Error: For lang melding"),
    STR("Error: Ingen melding"),
    STR("Error: Tox ID din ID"),
    STR("Error: Tox ID er allerede på vennelisten din"),
    STR("Error: Ukjent"),
    STR("Error: Ugyldig Tox ID (dårlig checksum)"),
    STR("Error: Ugyldig Tox ID (dårlig antispam verdi)"),
    STR("Error: Ingen minne"),

    //12
    STR("Ny filoverføring"),
    STR("Startet filoverføring"),
    STR("..."),
    STR("Filoverføring pauset"),
    STR("Filoverføring  mislyktes"),
    STR("Filoverføring avbrutt"),
    STR("Filoverføring ferdig"),

    //19
    STR("Samtale avbrutt"),
    STR("Samtale invitert"),
    STR("Samtale ringer"),
    STR("Samtale startet"),

    //23
    STR("Legg til venner"),
    STR("Tox ID"),
    STR("Melding"),
    STR("Søk etter venner"),
    STR("Legg til"),
    STR("bytt profil"),
    STR("Venneforespørsel"),
    STR("brukerinnstillinger"),
    STR("Navn"),
    STR("Status beskjed"),
    STR("forhåndsvisning"),
    STR("Enhetsvalg"),
    STR("lydinnspillingsenhet"),
    STR("lydavspillingsenhet"),
    STR("Videoavspillingsenhet"),
    STR("Andre innstillinger"),
    STR("DPI"),
    STR("Lagre lokasjon "),
    STR("Språk"),
    STR("Netverk"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("å bytte nettverks/Proxy innstillinger vill frakoble deg fra Tux nettverket"),
    STR("Lagre logger fra chatt"),

    //41
    STR("kopier"),
    STR("kopier (ingen navn)"),
    STR("klipp ut"),
    STR("lim inn"),
    STR("slett"),
    STR("Velg alle"),
    STR("Fjern"),
    STR("Forlat"),
    STR("Godta"),
    STR("Ignorer"),

    //50
    STR("Klikk for å lagre"),
    STR("Klikk for å åpne"),
    STR("avbrutt"),
},

};

#undef STR
