{ pkgs }: {
    deps = [
        pkgs.iproute2
        pkgs.sudo
        pkgs.bashInteractive
        pkgs.man
    ];
}