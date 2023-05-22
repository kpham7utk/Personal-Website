const express = require('express');
const axios = require('axios');
const app = express();
const port = 3000;

app.get('/news', async (req, res) => {
  try {
    const response = await axios.get('https://gnews.io/api/v4/search?', {
      params: {
        q: 'cybersecurity, machine learning',
        token: 'e93ea67aa9cddb546d6657b16ae0773d',
        lang: 'en',
      }
    });
    res.json(response.data);
  } catch (error) {
    console.error(error);
    res.status(500).send('Error fetching news data.');
  }
});

app.listen(port, () => {
  console.log(`Server is running on http://localhost:${port}`);
});