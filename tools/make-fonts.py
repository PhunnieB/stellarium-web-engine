#!/usr/bin/python3

# Stellarium Web Engine - Copyright (c) 2019 - Noctua Software Ltd
#
# This program is licensed under the terms of the GNU AGPL v3, or
# alternatively under a commercial licence.
#
# The terms of the AGPL v3 license can be found in the main directory of this
# repository.

# Generate the default font used in the html version.
#
# We use pyftsubset (that mush be installed on the system) to compress the
# font keeping only the glyphs we use.

import subprocess
from utils import ensure_dir

def run():
    ensure_dir('data/font/')
    for face in ['Regular', 'Bold']:
        path = "/usr/share/fonts/truetype/noto/NotoSans-%s.ttf" % face
        dst = "data/font/NotoSans-%s.ttf" % face
        chars = ("abcdefghijklmnopqrstuvwxyz"
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                 "0123456789"
                 "⁰¹²³⁴⁵⁶⁷⁸⁹"
                 " ?!\"#$%&'()*+,-./°¯[]:<>{}"
                 "Öö"
                 "☉☿♀♁♂♃♄⛢♆⚳⚴⚵⚶🍷⚘⚕♇"
                 "αβγδεζηθικλμνξοπρςστυφχψω")
        subprocess.call(['pyftsubset', path,
                         '--text=%s' % chars,
                         '--no-hinting', '--output-file=%s' % dst])

if __name__ == '__main__':
    run()
