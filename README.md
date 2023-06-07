# Khoality News
Khoality News is a news aggregation website that displays the latest articles related to cybersecurity and machine learning. This website uses the GNews API to fetch articles and Azure Functions to handle the API requests. The front end of the website is built with HTML, CSS, and JavaScript.

# Setup and Running
Here are the steps to get the website running locally:

1. Clone the repository:
    git clone https://github.com/kpham7utk/Personal-Website
2. Install Node.js and npm if they are not installed.
3. Navigate to the folder where you cloned the repository and install the required packages:
    cd khoality-news
    npm install
4. Start the server:
    npm start
5.Open a web browser and visit http://localhost:3000 to see the website.

# Project Structure
    index.html: Main HTML file that displays the website.
    styles.css: Contains all the styles for the website.
    index.js: Node.js file that runs on Azure Functions, handles API requests to GNews API, and returns the response.
    package.json: Lists all the Node.js dependencies required by the project.
# Debugging
    Chrome DevTools is recommended for debugging issues. Check the Console tab for any error messages.