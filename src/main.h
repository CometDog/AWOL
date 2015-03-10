#pragma once

#include "pebble.h"

static const GPathInfo MINUTE_HAND_POINTS = {
  4,
  (GPoint []) {
{ -19, -4 },
{ 2, -73 },
{ -3, -75 },
{ -24, -6 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  4,
  (GPoint []) {
    { 3, 4 },
{ 3, -73 },
{ -3, -73 },
{ -3, 4 }
  }
};