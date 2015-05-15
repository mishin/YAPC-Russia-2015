#!/usr/bin/perl
use strict;
use warnings;
use 5.010;
use utf8;
use open qw/:std :utf8/;

use Getopt::Long qw(:config auto_help);
use Pod::Usage;

use Regexp::Common qw(time);
use DateTime;
use DateTime::Format::Strptime;
use Git::Repository;
use Cwd;

exit main();

sub main {

    git_commit();

    return 0;
}


sub git_commit {
    my $git = Git::Repository->new( work_tree => getcwd );
        $git->run( add => '.');
	#$git->run( add => $options->{file} );
	#    $git->run( commit => '-m', $message, "--date=$commit_day" );
	# $git->run('push');
}
