<?php

echo "Hello world\n";

class Poopie {
    static string $rawr = "RAWR";

    public function foo() {
        $a = "a";
        $b = [1, 2, 3];

        $res = "";
        foreach($b as $n) {
            $res .= (string)$n;
        }

        return $res;
    }
}

$poo = new Poopie();
$r = $poo->foo();

if (extension_loaded('meminfo')) {
    echo "Meminfo is installed\n";
    echo "Allocating 120MB in php\n";
    $d = str_repeat('*', 1024 * 1024 * 120);
    meminfo_test();

    $s = fopen("php://stdout", "w");
    meminfo_dump($s);
}
