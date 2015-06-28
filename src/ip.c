#include <string.h>
#include <stdlib.h>
#include <glib.h>

gboolean
ip_valid(char *ipaddr)
{
    if (ipaddr == NULL) {
        return FALSE;
    }

    // check number of quads
    gchar **quads = g_strsplit(ipaddr, ".", 0);
    if (g_strv_length(quads) != 4) {
        return FALSE;
    }

    int i, j;
    for (i = 0; i < 4; i++) {

        // check number of chars
        if (strlen(quads[i]) > 3) {
            return FALSE;
        }

        for (j = 0; j < strlen(quads[i]); j++) {

            // check no leading zero (unless length is 1)
            if (j == 0 && quads[i][j] == '0' && strlen(quads[i]) > 1) {
                return FALSE;
            }

            // check is digit
            if (!g_ascii_isdigit(quads[i][j])) {
                return FALSE;
            }
        }

        // check range
        int val = strtol(quads[i], NULL, 10);
        if (val > 255) {
            return FALSE;
        }
    }

    return TRUE;
}

int
ip_to_bin(char *ipaddr)
{
    gboolean valid = ip_valid(ipaddr);
    if (!valid) {
        return -1;
    } else {
        return 1312;
    }
}
