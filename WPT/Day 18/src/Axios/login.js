import React, { useState } from 'react';

function LoginForm() {
    const [formData, setFormData] = useState({
        username: '',
        password: '',
    });

        const [submittedData, setSubmittedData] = useState(null);

    // Handler for changes in the form inputs
    const handleChange = (event) => {
        const { name, value } = event.target;
        setFormData(prevData => ({
            ...prevData,
            [name]: value
        }));
    };

    // Handler for form submission
    const handleSubmit = (event) => {
        // 1. Prevent the default HTML form submission behavior (page reload)
        event.preventDefault();
        
        // 2. In a real application, you would send formData to an API here.
        //    For this example, we'll just log and store the data.
        console.log('Form Submitted:', formData);
        
        // 3. Store the data to be displayed on the page
        setSubmittedData(formData);
        
        // 4. (Optional) Clear the form fields after submission
        setFormData({
            username: '',
            password: ''
        });
    };

    return (
        <div>
            <h2>Login Form</h2>
            
            {/* The HTML Form structure */}
            <form onSubmit={handleSubmit} style={formStyle}>
                
                {/* Username Field */}
                <div style={inputGroupStyle}>
                    <label htmlFor="username">Username:</label>
                    <input
                        type="text"
                        id="username"
                        name="username" // The 'name' attribute must match the key in formData
                        value={formData.username}
                        onChange={handleChange}
                        required
                        style={inputStyle}
                    />
                </div>

                {/* Password Field */}
                <div style={inputGroupStyle}>
                    <label htmlFor="password">Password:</label>
                    <input
                        type="password"
                        id="password"
                        name="password" // The 'name' attribute must match the key in formData
                        value={formData.password}
                        onChange={handleChange}
                        required
                        style={inputStyle}
                    />
                </div>

                {/* Submit Button */}
                <button type="submit" style={buttonStyle}>
                    Log In
                </button>
            </form>

            <hr style={{ margin: '20px 0' }} />

            {/* 2. Display the data after submission */}
            <h3>Submitted Data Display</h3>
            {submittedData ? (
                <div style={dataDisplayBlockStyle}>
                    <p>✅ **Login attempt successful!**</p>
                    <p> **Username:** `{submittedData.username}`</p>
                    <p> **Password:** `{submittedData.password}` (⚠️ Never display in real apps!)</p>
                </div>
            ) : (
                <p>Please enter your credentials and click "Log In" to see the data.</p>
            )}
        </div>
    );
}

// Basic CSS-in-JS for styling
const formStyle = {
    padding: '20px',
    border: '1px solid #ccc',
    borderRadius: '8px',
    maxWidth: '400px',
    margin: '0 auto',
};

const inputGroupStyle = {
    marginBottom: '15px',
    display: 'flex',
    flexDirection: 'column',
};

const inputStyle = {
    padding: '10px',
    marginTop: '5px',
    border: '1px solid #ddd',
    borderRadius: '4px',
    fontSize: '16px',
};

const buttonStyle = {
    padding: '10px 15px',
    backgroundColor: '#007bff',
    color: 'white',
    border: 'none',
    borderRadius: '4px',
    cursor: 'pointer',
    fontSize: '16px',
    width: '100%',
};

const dataDisplayBlockStyle = {
    backgroundColor: '#e6ffe6',
    border: '1px solid #4CAF50',
    padding: '15px',
    borderRadius: '8px',
    maxWidth: '400px',
    margin: '0 auto',
    fontWeight: 'bold',
};

export default LoginForm;