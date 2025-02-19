#include <common.h>

void DECOMP_CseqMusic_ChangeVolume(int songID, int p2, int p3)
{
	int i;
	struct Song* song;

	// byte budget,
	// if either of these are false, CseqMusic_Start
	// wouldn't have played to begin with anyway
	#if 0
	if(sdata->boolAudioEnabled == 0) return;
	if(sdata->ptrCseqHeader == 0) return;
	
	// To do: cseq header struct, DCxDemo probably has it
	if(*(unsigned short*)(sdata->ptrCseqHeader + 6) <= songID) return;
	#endif
	
	Smart_EnterCriticalSection();
	
	for(i = 0; i < 2; i++)
	{
		song = &sdata->songPool[i];
		
		// if pool is taken
		if (
				((song->flags & 1) != 0) &&
				(song->id == songID)
			)
		{
			SongPool_Volume(song, p2&0xff, p3&0xff, 0);
		}
	}
	
	Smart_ExitCriticalSection();
}