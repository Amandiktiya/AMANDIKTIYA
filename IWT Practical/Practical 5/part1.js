function convertToUppercase() {
    let inputText = document.getElementById("textInput").value;
    let upperText = inputText.toUpperCase();
    document.getElementById("outputText").innerText = upperText;
}