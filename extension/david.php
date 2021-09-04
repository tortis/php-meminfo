<?php

echo "Hello world\n";

if (extension_loaded('meminfo')) {
    echo "Meminfo is installed\n";
    echo "Allocating 120MB in php\n";
    $d = str_repeat('*', 1024 * 1024 * 120);
    meminfo_test();
}
