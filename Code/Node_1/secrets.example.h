#pragma once
#include <stdint.h>

// PLACEHOLDER ONLY. Replace with a securely generated random 16-byte key.
// Configure exactly the same key on Node 1 and Node 2.
// Never commit your real secrets.h file.
// Use a unique strong password (at least 8 characters) for this node's Wi-Fi AP.
static const char* WIFI_AP_PASSWORD = "change-this-password";

static const uint8_t AES_KEY[16] = {
  0x00, 0x11, 0x22, 0x33,
  0x44, 0x55, 0x66, 0x77,
  0x88, 0x99, 0xAA, 0xBB,
  0xCC, 0xDD, 0xEE, 0xFF
};
