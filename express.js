const express = require('express');
const axios = require('axios');
const app = express();
const port = 3000;

app.get('/news', async (req, res) => {
  try {
    const response = await axios.get('https://gnews.io/api/v4/search?', {
      params: {
        q: 'cybersecurity OR machine learning',
        token: 'e93ea67aa9cddb546d6657b16ae0773d',
        lang: 'en',
      }
    });
    if (response.status === 200) {
      const articles = response.data.articles;  // Extract the articles from the response
      res.json(articles);  // Send the articles as a JSON response
    } else {
      // If the API request was unsuccessful, send an error response
      res.status(500).json({ error: 'Error fetching news' });
    }
  } catch (error) {
    console.error('Error making API request:', error);
    res.status(500).json({ error: 'Error fetching news' });
  }
});

app.listen(port, () => {
  console.log(`Server is running on http://localhost:${port}`);
});