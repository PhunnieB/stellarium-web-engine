// Auto generated from tools/makeassets.py

static const unsigned char DATA_data_planets_ini[1667] __attribute__((aligned(4))) =
    "[sun]\n"
    "type = SUN\n"
    "color = 1.0, 0.98, 0.97\n"
    "radius = 696000 km\n"
    "vmag = -26.74\n"
    "\n"
    "[mercury]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 2440 km\n"
    "vmag = -1.9\n"
    "color = 1.0, 0.964, 0.914\n"
    "shadow_brightness = 0.3\n"
    "\n"
    "[venus]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 6052 km\n"
    "vmag = -4.6\n"
    "color = 1., 0.96, 0.876\n"
    "shadow_brightness = 0.3\n"
    "\n"
    "[earth]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 6378 km\n"
    "color = 0.898, 0.94, 1.\n"
    "shadow_brightness = 0.3\n"
    "\n"
    "[mars]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 3397 km\n"
    "vmag = -2.91\n"
    "color=1., 0.768, 0.504\n"
    "shadow_brightness = 0.3,\n"
    "\n"
    "[jupiter]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 71492 km\n"
    "vmag = -2.94\n"
    "color = 1., 0.983, 0.934\n"
    "shadow_brightness = 0.3\n"
    "\n"
    "[saturn]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 60268 km\n"
    "vmag = 0.43\n"
    "color = 1.0, 0.955, 0.858\n"
    "shadow_brightness = 0.3,\n"
    "rings_inner_radius = 74510 km\n"
    "rings_outer_radius = 140390 km\n"
    "\n"
    "[uranus]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 25559 km\n"
    "vmag = 5.32\n"
    "color = 0.837, 0.959, 1.\n"
    "shadow_brightness = 0.3\n"
    "\n"
    "[neptune]\n"
    "type = PLA\n"
    "parent = sun\n"
    "radius = 24766 km\n"
    "vmag = 7.78\n"
    "color=0.44, 0.582, 1.\n"
    "shadow_brightness = 0.3\n"
    "\n"
    "[moon]\n"
    "type = MOO\n"
    "parent = earth\n"
    "color=1., 0.986, 0.968\n"
    "radius = 1738 km\n"
    "vmag = -12.5\n"
    "shadow_brightness = 0.1\n"
    "rot_obliquity = 1.5424\n"
    "rot_period = 27.321661\n"
    "rot_offset = 38\n"
    "\n"
    "[io]\n"
    "type = MOO\n"
    "parent = jupiter\n"
    "color = 1., .885, .598\n"
    "shadow_brightness = 0.1\n"
    "radius = 1821.3 km\n"
    "albedo = 0.61\n"
    "\n"
    "[europa]\n"
    "type = MOO\n"
    "parent = jupiter\n"
    "color = 1., 0.968, 0.887\n"
    "shadow_brightness = 0.1\n"
    "radius = 1565 km\n"
    "albedo = 0.64\n"
    "\n"
    "[ganymede]\n"
    "type = MOO\n"
    "parent = jupiter\n"
    "color = 1., 0.962, 0.871\n"
    "shadow_brightness = 0.1\n"
    "radius = 2634 km\n"
    "albedo = 0.42\n"
    "\n"
    "[callisto]\n"
    "type = MOO\n"
    "parent = jupiter\n"
    "color = 1., 0.979, 0.897\n"
    "shadow_brightness = 0.1\n"
    "radius = 2403 km\n"
    "albedo = 0.20\n"
    "";

ASSET_REGISTER(data_planets_ini, "planets.ini", DATA_data_planets_ini, false)

