import os
import secrets

from flask import Flask

from .database import init_app
from .routes import bp


def create_app():
    app = Flask(__name__)
    app.config.update(
        SECRET_KEY=os.environ.get("ATTENDANCE_SECRET_KEY", secrets.token_hex(32)),
        DATABASE="attendance.db",
        OTP_EXPIRY_MINUTES=5,
        MAX_CONTENT_LENGTH=5 * 1024 * 1024,
        APPLICATION_UPLOAD_FOLDER="uploads/applications",
        PROFILE_UPLOAD_FOLDER="uploads/profiles",
        SITE_NAME="Attendance Hub",
        SITE_URL=os.environ.get("ATTENDANCE_SITE_URL", "http://127.0.0.1:5000"),
    )

    init_app(app)
    app.register_blueprint(bp)
    return app
