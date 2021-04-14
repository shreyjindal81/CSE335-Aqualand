<?php
require_once "../site.php";
$view = new CL\Course\View($site);
$view->title = 'Course Staff';
?>
<!doctype html>
<html lang="en-US">
<head>
<link href="../cl/course.css" type="text/css" rel="stylesheet" />
<?php echo $view->head(); ?>
  <style>
    .staff {
      display: table;
      margin: 0 auto;
    }

    .staff .instructor, .staff .ta {
      display: table-row;
      padding: 1em 0;
    }

    .staff img {
      display: table-cell;
      vertical-align: middle;
      width: 150px;
      height: auto;
      padding: 0.5em 1em 0.5em 0;
    }

    .staff .info {
      display: table-cell;
      vertical-align: middle;
    }
  </style>
</head>
<body>
<?php echo $view->header(); ?>

<div class="staff">

<div class="instructor">
<img src="../images/Owen13-headshot.jpg" alt=""/>
<div class="info">
<p>Dr. Charles B. Owen, Instructor<br>
<a href="mailto:cbowen@cse.msu.edu">cbowen@cs.msu.edu</a></p>
</div>
</div>

<div class="ta">
    <img src="profile_sparty.jpg" alt="Matthew Rupp" width="112" height="139"/>
    <div class="info">
        <p>Dr. Matthew Rupp, Instructor<br>
            <a href="mailto:ruppmatt@msu.edu">ruppmatt@msu.edu</a>
        </p>
    </div>
</div>
	
<div class="ta">
<img src="salman.jpg" alt="Salman Ali" width="395" height="403"/>
<div class="info">
<p>Salman Ali<br>
  <a href="mailto:alisalm1@msu.edu ">alisalm1@msu.edu </a><br>
  Teaching Assistant
</p>
</div>
</div>
	
<div class="ta">
  <img src="profile_sparty.jpg" alt="Andrew Schmidt" width="112" height="139"/>
<div class="info">
<p>Ritam Ganguly<br>
  <a href="mailto:grangulyr@msu.edu">grangulyr@msu.edu</a><br>
  Teaching Assistant
</p>
</div>
</div>

    <div class="ta">
        <img src="profile_sparty.jpg" alt="Andrew Schmidt" width="112" height="139"/>
        <div class="info">
            <p>Qiqige Wuyun<br>
                <a href="mailto:wuyunqiq@msu.edu">wuyunqiq@msu.edu</a><br>
                Teaching Assistant
            </p>
        </div>
    </div>

    <div class="ta">
        <img src="profile_sparty.jpg" alt="Andrew Schmidt" width="112" height="139"/>
        <div class="info">
            <p>Ahmir Latif Khan<br>
                <a href="mailto:khanahm2@msu.edu">khanahm2@msu.edu</a><br>
                Teaching Assistant
            </p>
        </div>
    </div>

<div class="ta">
<img src="vinnieday.jpg" alt="Vinnie Day"/>
<div class="info">
<p>Vinnie Day<br>
  Question Answerer</p>
</div>
</div>

</div>

<?php echo $view->footer(); ?>
</body>
</html>
