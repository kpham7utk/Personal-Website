import requests
import json

# Replace 'YOUR_API_KEY' with the API key you got from GNews
api_key = 'e93ea67aa9cddb546d6657b16ae0773d'

# Define the endpoint URL
url = f"https://gnews.io/api/v4/search?q=cybersecurity&token={api_key}&lang=en"

# Send a GET request to the GNews API
response = requests.get(url)

# Convert the response to JSON
data = response.json()

# Print the data
print(json.dumps(data, indent=4))