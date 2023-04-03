import smtplib
import os
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.image import MIMEImage
from email.mime.application import MIMEApplication


from_addr = 'smtptest927@gmail.com'
to_addr = 'oumaimafisaoui@gmail.com'
subject = 'This is an email with an attachement'
body = 'Hello from evaluation!'


attachment_path = '42.png'
attachment_name = 'image'


msg = MIMEMultipart()
msg['From'] = from_addr
msg['To'] = to_addr
msg['Subject'] = subject


msg.attach(MIMEText(body))


with open(attachment_path, 'rb') as f:
    attachment = MIMEApplication(f.read(), _subtype=os.path.splitext(attachment_path)[1][1:])
    attachment.add_header('Content-Disposition', 'attachment', filename=attachment_name)
    msg.attach(attachment)

smtp_server = 'smtp-mail.outlook.com'
smtp_port = 587
smtp_username = 'smtptest927@gmail.com'
smtp_password = 'School1337/'

with smtplib.SMTP(smtp_server, smtp_port) as server:
    server.starttls()
    server.login(smtp_username, smtp_password)
    server.sendmail(from_addr, to_addr, msg.as_string())

print('Email sent successfully!')

