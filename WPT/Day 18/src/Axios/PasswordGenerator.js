import React, { useState } from 'react';

function PasswordGenerator() {
    const [password, setPassword] = useState('');
    const [length, setLength] = useState(8);

    const generatePassword = () => {
        const charset = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+';
        let newPassword = '';
        
        for (let i = 0; i < length; i++) {
            const randomIndex = Math.floor(Math.random() * charset.length);
            newPassword += charset[randomIndex];
        }
        
        setPassword(newPassword);
    };

    return (
        <div>
            <h2>Password Generator</h2>
            <div>
                <label>Password Length: </label>
                <input 
                    type="number" 
                    value={length} 
                    onChange={(e) => setLength(Math.max(1, parseInt(e.target.value)))}
                />
            </div>
            <button 
                onClick={generatePassword}
            >
                Generate Password
            </button>
            {password && (
                <div>
                    <h3>Generated Password:</h3>
                    <div>
                        {password}
                    </div>
                </div>
            )}
        </div>
    );
}

export default PasswordGenerator;