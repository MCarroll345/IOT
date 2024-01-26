String homePagePart1 = F(R"=====(<!DOCTYPE html>
<html lang="en" > <!-- Needed for Screenreaders !-->
<head>
<!-- UTF-8 character set covers most characters in the world -->
  <meta charset="utf-8">
  <!-- Make the page refresh-->
  //<meta http-equiv="refresh" content="5">
  <!-- Make page respond to screen size !-->
  <meta name="viewport" content="width=device-width, initial-scale=1, viewport-fit=cover">
 
<!--Include a Title. Used by Search Engines -->
<title> Creed Card Reading </title>
<style>
   
   body {       
	background-color: #808080;
	}
	.flex-Container{
        display: flex;
        flex-direction: column;
        background-color: #808080;
        align-items: center;
      }
    h1{
    font: bold;
    font-size: 40px;
    font-family: Arial;
    color: #ffffff;
	text-align: center;
  }
  p{
    font-size: 25px;
    font-family: Arial;
    color: #ffffff;
	text-align: center;
   }  
  th, td {
    font-size: 25px;
    padding: 8px;
    text-align: left;
    color: #ffffff;
    border-bottom: 1px solid #ddd;    
}
.top-bar {
            background-color: #333;
            color: #fff;
            padding: 10px;
            text-align: center;
            border: 2px;
        }

        .navbar {
            display: flex;
            justify-content: center;
            background-color: #444;
            padding: 10px;
        }

        .nb a {
            color: #fff;
            text-decoration: none;
            padding: 10px;
            margin: 0 10px;
        }

        .navbar a:hover {
            background-color: #555;
        }
</style>
</head>
	<body>
    <div class="top-bar">
          <h1>Creed</h1>
    </div>

    <div class="nb">
        <a href="flex-Container">Home</a>
        <a href="#">Card</a>
        <a href="#">Text</a>
    </div>
  
		<div id="flex-Container">
		<p>Welcome to my website to display card text</p>
    <p>This website will display and read text for playing cards</p>
    
    <iframe width="560" height="315" src="http://192.168.1.23/" frameborder="0" alt="camera stream" allowfullscreen></iframe>
    
    <textarea id="textToRead" rows="4" cols="50">Enter text here...</textarea><br>
<button onclick="speakText()">Speak</button>

     </div>
     <script>
  function speakText() {
    var textToRead = document.getElementById("textToRead").value;

    // Check if the browser supports the SpeechSynthesis API
    if ('speechSynthesis' in window) {
      var synthesis = window.speechSynthesis;
      var utterance = new SpeechSynthesisUtterance(textToRead);

      // Optionally, you can set additional parameters
      // utterance.volume = 1; // 0 to 1
      // utterance.rate = 1;   // 0.1 to 10
      // utterance.pitch = 1;  // 0 to 2

      synthesis.speak(utterance);
    } else {
      alert('Your browser does not support the Web Speech API.');
    }
  }
</script>
	</body>
</html>)=====");
