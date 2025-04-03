// Predefined correct username and password
const correctUsername = "amandiktiya";
const correctPassword = "@2580";

// Function to validate login
function validateLogin() {
    // Get the input values
    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;
    const errorMessage = document.getElementById('errorMessage');

    // Clear previous error messages
    errorMessage.textContent = '';

    // Check if username and password match
    if (username === correctUsername && password === correctPassword) {
        // Redirect to the next site or page on success
        window.location.href = "https://www.instagram.com/"; // Replace with your desired URL
    } else {
        // Show error message if credentials are incorrect
        errorMessage.textContent = "Invalid username or password. Please try again.";
    }
}