import React, { useState } from 'react';
import axios from 'axios'; // 

const JSON_URL = 'https://jsonplaceholder.typicode.com/users'; 

function DataTableFetcherAxios() {
    const [data, setData] = useState(null);
    const [isLoading, setIsLoading] = useState(false);
    const [error, setError] = useState(null);

    // 1. The Data Fetching Function using axios.get()
    const fetchData = async () => {
        setIsLoading(true);
        setError(null);
        setData(null);

        try {
            // Use axios.get() method
            const response = await axios.get(JSON_URL);
            
            // Axios automatically parses the JSON, so data is in response.data
            setData(response.data); 
            
        } catch (err) {
            // Axios catches network errors and bad HTTP statuses (4xx, 5xx)
            console.error('Axios Fetching error:', err);
            
            // Check if the error has a response property for detailed status
            if (err.response) {
                setError(`HTTP Error: ${err.response.status} - ${err.response.statusText}`);
            } else if (err.request) {
                setError('Network Error: No response received from server.');
            } else {
                setError('Error setting up request.');
            }
            
        } finally {
            setIsLoading(false);
        }
    };
    
    // Helper Function to Render Table (Same as before)
    const renderTable = () => {
        if (!data || data.length === 0) return <p>No data to display.</p>;
        
        const keys = Object.keys(data[0]);
        console.log(data);

        return (
            <table border="1">
                <thead>
                    <tr>
                        {keys.map(key => <th key={key}>{key.toUpperCase()}</th>)}
                    </tr>
                </thead>
                <tbody>
                    {data.map((item, index) => (
                        <tr key={index}>
                            {keys.map(key => <td key={key}>
                                {typeof item[key] === 'object' && item[key] !== null 
                                    ? JSON.stringify(item[key]) 
                                    : item[key]}
                            </td>)}
                        </tr>
                    ))}
                </tbody>
            </table>
        );
    };

    // Render Logic
    return (
        <div>
            <h2>Data Fetcher</h2>
            
            <button 
                onClick={fetchData} 
            >
                Load Data
            </button>
            
            <hr />

            {isLoading && <p>Loading data...</p>}
            {error && <p> Error: {error}</p>}
            
            {data && !isLoading && !error && renderTable()}
            
        </div>
    );
}

export default DataTableFetcherAxios;