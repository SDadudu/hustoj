<?php
use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;

require dirname(__FILE__).'/Exception.php';
require dirname(__FILE__).'/PHPMailer.php';
require dirname(__FILE__).'/SMTP.php';

function email($address,$mailtitle,$mailcontent){
        //******************** 配置信息 ********************************
        return false;   //确认下面的账户信息配置正确后，注释本行，否则mail相关功能不会生效。
        $smtpserver = "smtp.qq.com";           //SMTP服务器，通常在邮箱的smtp/pop3设置中可以查询到，推荐用企业邮箱发信，避免被识别为垃圾邮件
        $smtpserverport =587;                           //SMTP服务器端口，通常是25，有的服务器支持80（阿里云）、465(网易)、587（QQ）以适应不同的网络防火墙配置
        $smtpusermail = "mailer@qq.com";      //SMTP服务器的用户名（通常就是发件人的邮箱地址）
        $smtppass = "your_smpt_auth_password";       //由邮箱系统生成的口令 (SMTP服务器的密码)
        //通常只需修改上面的4个设置。
        $smtpuser = "$smtpusermail";           //SMTP服务器的用户帐号,通常就是邮箱，个别情况服务器支持一个账号多个邮箱地址的可能不同。
        $smtpemailto =$address;               //发送给谁
        $mailtype = "TXT";//邮件格式（HTML/TXT）,TXT为文本邮件
        //************************ 配置信息 ****************************
	
	$mail = new PHPMailer(true);
        //未经配置的系统，跳过发信步骤。
	if( $smtpusermail != "mailer@qq.com") {      // 不要修改这个检测标记
		try {
		    //Server settings
		    $mail->SMTPDebug = SMTP::DEBUG_SERVER;                      //Enable verbose debug output
		    $mail->isSMTP();                                            //Send using SMTP
		    $mail->Host       = $smtpserver;                     //Set the SMTP server to send through
		    $mail->SMTPAuth   = true;                                   //Enable SMTP authentication
		    $mail->Username   = $smtpuser;                     //SMTP username
		    $mail->Password   = 'secret';                               //SMTP password
		    $mail->SMTPSecure = PHPMailer::ENCRYPTION_SMTPS;            //Enable implicit TLS encryption
		    $mail->Port       = 465;                                    //TCP port to connect to; use 587 if you have set `SMTPSecure = PHPMailer::ENCRYPTION_STARTTLS`

		    //Recipients
		    $mail->setFrom($smtpuser, 'Mailer');
		    $mail->addAddress($address, 'OJ User');     //Add a recipient
		   // $mail->addAddress('ellen@example.com');               //Name is optional
		   // $mail->addReplyTo('info@example.com', 'Information');
		   // $mail->addCC('cc@example.com');
		   // $mail->addBCC('bcc@example.com');
		    //Attachments
		    //$mail->addAttachment('/var/tmp/file.tar.gz');         //Add attachments
		    //$mail->addAttachment('/tmp/image.jpg', 'new.jpg');    //Optional name
		    //Content
		    $mail->isHTML(false);                                  //Set email format to HTML
		    $mail->Subject = $mailtitle;
		    $mail->Body    = $mailcontent;
		    $mail->AltBody = $mailcontent;

		    $mail->send();
		    echo 'Message has been sent';
		} catch (Exception $e) {
		    echo "Message could not be sent. Mailer Error: {$mail->ErrorInfo}";
		}		
	}		
}
