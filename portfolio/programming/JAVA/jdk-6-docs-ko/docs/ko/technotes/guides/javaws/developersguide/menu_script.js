function Eminem_jumpMenu(targ,selObj,restore){ //v3.0
  eval(targ+".location='"+selObj.options[selObj.selectedIndex].value+"'");
  if (restore) selObj.selectedIndex=0;
}
document.writeln('<option selected>章/トピックを検索</option><option value="contents.html">目次</option><option value="DevaSearch/search.html">検索ページ</option><option value="overview.html">概要</option><option value="setup.html">Web サイトの設定</option><option value="launch.html">アプリケーション起動用 Web ページの作成</option><option value="development.html">アプリケーション開発時の考慮点</option><option value="downloadservletguide.html">JnlpDownloadServlet ガイド</option><option value="syntax.html">JNLP ファイルの構文</option><option value="examples.html">JNLP API の使用例</option> <option value="javaws.html">javaws コマンド行</option><option value="../../../../../../products/javawebstart/faq.html">FAQ</option><option value="../jnlp/index.html">JNLP API (JavaDoc)</option></select>');
