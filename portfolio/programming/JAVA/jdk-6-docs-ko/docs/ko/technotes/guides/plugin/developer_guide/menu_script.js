function Eminem_jumpMenu(targ,selObj,restore){ //v3.0
  eval(targ+".location='"+selObj.options[selObj.selectedIndex].value+"'");
  if (restore) selObj.selectedIndex=0;
}
document.writeln('<option selected>章またはトピックを選択</option><option value="contents.html">目次</option><option value="DevaSearch/search.html">検索ページ</option><option value="overview.html">第 1 章: 概要 &#151; Java Plug-in とはサポート内容について</option><option value="applet_tag.html">第 2 章: 従来の APPLET タグの使用</option><option value="using_tags.html">第 3 章: Java Plug-in での OBJECT、EMBED、および APPLET タグの使用</option><option value="html_converter.html">第 4 章: HTML コンバータを使用した Java Plug-in 用 Applet タグの変換 </option><option value="proxie_config.html">第 5 章: プロキシ構成 </option><option value="protocol_support.html">第 6 章: プロトコルサポート:HTTP、HTTPS、FTP、GOPHER、SOCKS、および NTLM </option><option value="cookie_support.html">第 7 章: cookie のサポート </option><option value="applet_caching.html">第 8 章: アプレットキャッシュ</option><option value="control_panel.html">第 9 章: Java Plug-in コントロールパネルを使用した Plug-in の動作/オプションの設定</option><option value="installation.html">第 10 章: 従来のアプレットのインストール (Microsoft Windows のみ)</option><option value="intranet.html">第 11 章: OBJECT/EMBED タグによるイントラネット</option><option value="internet.html">第 12 章: インターネットでの配備</option><option value="silent.html">第 13 章: サイレントインストール </option><option value="jar_indexing.html">第 14 章: Jar インデックス </option><option value="jsp.html">第 15 章: Java Server Pages </option><option value="security.html">第 16 章: 概要 &#151; アプレットのセキュリティの基本</option> <option value="rsa_how.html">第 17 章: Java Plug-in での RSA 署名付きアプレットの検証動作 </option><option value="rsa_signing.html">第 18 章: RSA 署名付き証明書を使用したアプレットの署名方法 </option><option value="rsa_deploying.html">第 19 章: Java Plug-in での RSA 署名付きアプレットの配備方法</option><option value="debugger.html">第 20 章: デバッグのサポート </option><option value="console.html">第 21 章: Java Plug-in コンソール </option><option value="tracing_logging.html">第 22 章: トレースおよびログ</option><option value="version.html">第 23 章: 複数バージョンの JRE および Java Plug-in のサポート</option><option value="java_js.html">第 24 章: Java から JavaScript への通信</option><option value="js_java.html">第 25 章: JavaScript から Java への通信 (スクリプト作成)</option><option value="extensions.html">第 26 章: Java 拡張機能の配備 </option><option value="persistence.html">第 27 章: アプレット持続性 API</option><option value="special_attributes.html">第 28 章: 特別なアプレット属性</option><option value="oji.html">付録 1: Netscape 6</option><option value="faq/index.html">付録 2: FAQ</option><option value="html_converter_more.html">付録 3: HTML コンバータの詳細</option><option value="compatibility.html">付録 4: Microsoft VM と Java 2 アプレットの互換性問題</option><option value="extensions_example.html">付録 5: 完全な例 - Java 拡張機能としての Java Media Framework の配備</option><option value="version_format.html">付録 6: Sun のサポートする Specification-Version および Implemenation-Version の形式</option>');