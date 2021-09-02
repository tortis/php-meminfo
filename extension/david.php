<?php

echo 'Hello world\n';

if (extension_loaded('meminfo')) {
    echo 'Meminfo is installed\n';
}

class Foo {
    public static $thingy = "ASDF";
}

$s = fopen('php://stdout', 'w');
meminfo_dump($s);
