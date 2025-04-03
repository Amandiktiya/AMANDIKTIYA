// List of Ad Images (You can replace these with actual ad image URLs)
const adImages = [
    'https://m.media-amazon.com/images/I/614BojM6TaL._SX679_.jpg ',  // Image 1
    'https://m.media-amazon.com/images/I/51TEsE9KKcL._SL1000_.jpg',  // Image 2
    'https://m.media-amazon.com/images/I/714LWEu-HcL._SL1000_.jpg',  // Image 3
    'https://m.media-amazon.com/images/I/51X8uidmv0L._SL1000_.jpg',  // Image 4
    'https://m.media-amazon.com/images/I/61JldrC5YPL._SL1280_.jpg',  // Image 5
];

// Function to Change the Banner Ad
function changeBannerAd() {
    const adElement = document.getElementById('ad-img');
    const randomIndex = Math.floor(Math.random() * adImages.length);
    adElement.src = adImages[randomIndex];
}

// Set Interval for Banner Change (Every 10 seconds)
setInterval(changeBannerAd, 10000); // Change every 10 seconds

// Optionally, add randomness to the interval (e.g., 10 to 15 seconds)
setInterval(() => {
    const randomInterval = Math.floor(Math.random() * 5000) + 10000; // Random time between 10 to 15 seconds
    setTimeout(changeBannerAd, randomInterval);
}, 15000);
