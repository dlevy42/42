<!DOCTYPE html>
<html <?php language_attributes(); ?>>
<head>
	<meta charset="<?php bloginfo('charset') ?>" />
	<meta name="description" content="" />
	<meta name="keywords" content="" />
	<meta name="viewport" content="width=device-width, initial-scale=1" />
	
	<title><?php wp_title( '-', true, 'right' ); echo wp_specialchars( get_bloginfo('name'), 1 ) ?></title>

	<link rel="stylesheet" href="<?php bloginfo('stylesheet_directory'); ?>/css/bootstrap.css" />
	<link rel="stylesheet" href="<?php bloginfo('stylesheet_directory'); ?>/style.css" type="text/css" media="screen" />

	<!--[if lte IE 6]><script type="text/javascript" src="<?php bloginfo('template_url'); ?>/js/supersleight-min.js"></script><![endif]-->
	<?php wp_enqueue_script(get_bloginfo('template_directory').'/js/jquery.js'); ?>
	<?php wp_enqueue_script('superfish', get_bloginfo('template_directory').'/js/superfish.js', array('jquery'), '1.7'); ?>
	<?php wp_enqueue_script(get_bloginfo('template_directory').'/js/nav.js'); ?>
	<?php if (trim(get_option('ft_header_code')) <> "") { echo stripslashes(get_option('ft_header_code')); } ?>
	<?php if (is_singular()) wp_enqueue_script('comment-reply'); ?>

	<?php wp_head(); ?> <!-- #NE PAS SUPPRIMER cf. codex wp_head() -->
</head>
<body>
	<div id="content_index">    
		<div class="jumbotron">
			<div id="logo">
				<a href="<?php bloginfo('url'); ?>"><?php bloginfo('name'); ?></a>
			</div>
			
			<?php if ( !is_home() ) { ?>
			<div class="menu">
				<ul class="niveau1">
  					<li>
    					Naviguer
    						<ul class="niveau2">
      							<li><a href="#">Bruxelles</li></a>
      							<li><a href="#">Londres</li></a>
      							<li><a href="#">Strasbourg</li></a>
    						</ul>
  					</li>
				</ul>
			</div>
            <?php } ?>

			<div class="nav">
				<ul class="pull-right">
					<?php if (is_user_logged_in()) : ?>
						<li>
							<a href="<?php echo wp_logout_url(home_url()); ?>">Se déconnecter</a>
						</li>
					<?php else: ?>
						<li>
							<a href="<?php echo wp_registration_url(home_url()); ?>">S'enregistrer</a>
						</li>
						<li>
							<a href="<?php echo wp_login_url(home_url()); ?>">Se connecter</a>
						</li>
					<?php endif; ?>
					<li><a class="btn btn-default" href="#">Publiez votre annonce</a></li>
				</ul>
			</div>

			<div class="container">
				<h1>Welcome Home</h1>
				<p>Louez des logements uniques auprès d'hôtes locaux dans 190+ pays.</p>
				
				<?php if (is_home () ) { ?>
				<div class="button">
					<a class="btn btn-success"href="http://wp.local.42.fr:8080/?page_id=5">Mode d'emploi</a>
				</div>
			</div>

			<div class="block">
				<div class="container">
					<form action="<?php echo site_url() ?>">
						<div class="form-group">
							<div class="input-group">
								<input type="text" class="form-control" id="s" name="s">
								<span class="input-group-btn">
									<button class="btn btn-primary" type="submit">Search</button>
								</span>
							</div>
						</div>
					</form>
				</div>
			</div>
			<?php } ?>
		</div>
	</div>
<!-- </body>
</html> -->