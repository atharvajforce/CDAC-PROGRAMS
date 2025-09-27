import { useState } from "react";

const GraduateComponent = () => (
  <div>
    <label>Degree: <input type="text" /></label><br />
    <label>Year: <input type="number" /></label><br />
    <label>Final Year Score: <input type="text" /></label><br />
    <label>University: <input type="text" /></label>
  </div>
);

const PGComponent = () => (
  <div>
    <label>Year: <input type="number" /></label><br />
    <label>Thesis Subject: <input type="text" /></label>
  </div>
);

const UnderGradComponent = () => (
  <div>
    <label>SSC Score: <input type="text" /></label><br />
    <label>HSC Score: <input type="text" /></label>
  </div>
);

const UserDetailsForm = () => {
  const [educationLevel, setEducationLevel] = useState('');

  return (
    <div>
      <h2>User Details Form</h2>
      <label>Name: <input type="text" /></label><br />
      <label>Email: <input type="email" /></label><br />

      <label>Education Level: 
        <select value={educationLevel} onChange={(e) => setEducationLevel(e.target.value)}>
          <option value="">Select</option>
          <option value="Graduate">Graduate</option>
          <option value="PG">PG</option>
          <option value="UnderGrad">UnderGrad</option>
        </select>
      </label>

      {educationLevel === 'Graduate' && <GraduateComponent />}
      {educationLevel === 'PG' && <PGComponent />}
      {educationLevel === 'UnderGrad' && <UnderGradComponent />}
    </div>
  );
};

export default UserDetailsForm;



