// script.js

// This file contains JavaScript interactivity for the Mathematics game frontend

// Function to display the current date and time
function displayCurrentDateTime() {
    const dateTimeContainer = document.getElementById('dateTime');
    const now = new Date();
    dateTimeContainer.innerText = `Current Date and Time (UTC): ${now.toISOString().slice(0,19).replace('T', ' ')} `;
}

// Call the function to display date and time on page load
window.onload = displayCurrentDateTime;
