# Attendance Hub

Flask based attendance management app with:

- `admin`, `faculty`, `student` login flow
- student self-registration with demo mobile OTP verification
- student profile fields for branch, semester, year, DOB, father name, roll number, registration number, Gmail, email, and mobile
- admin/faculty student creation
- date-wise attendance marking with past 1 year selection
- student attendance view only access
- Excel export for filtered attendance report

## Run

```powershell
python -m venv .venv
.venv\Scripts\Activate.ps1
pip install -r requirements.txt
python app.py
```

## Default admin

- Email: `admin@example.com` by default, or `ATTENDANCE_DEFAULT_ADMIN_EMAIL`
- Password: `change-me-now` by default, or `ATTENDANCE_DEFAULT_ADMIN_PASSWORD`

## Recommended environment variables

```powershell
$env:ATTENDANCE_SECRET_KEY="replace-with-a-long-random-secret"
$env:ATTENDANCE_DEFAULT_ADMIN_PASSWORD="replace-with-a-strong-password"
$env:ATTENDANCE_SITE_URL="http://127.0.0.1:5000"
```

## Notes

- Student login uses `roll number + password`.
- Admin and faculty login use `email + password`.
- OTP feature is wired as a demo flow and shows OTP on screen. Real SMS provider integration can be added later.
- Public SEO pages are the home page and discovery pages; authenticated dashboards are intentionally marked `noindex`.
