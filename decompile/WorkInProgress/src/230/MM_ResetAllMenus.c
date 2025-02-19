#include <common.h>

void DECOMP_MM_ResetAllMenus(void)
{
    for (int i = 0; i < 9; i++)
    {
        struct MenuBox* mb = OVR_230.ptrMenuBoxes[i];

        // Close menubox
        mb->state |= 8;
        mb->state &= 0xffffffeb;

        // Reset ptrNext and ptrPrev
        mb->ptrNextBox_InHierarchy = 0;
        mb->ptrPrevBox_InHierarchy = 0;
    }

    sdata->framesRemainingInMenu = 0xF;
    return
}