/**
 * @file mpeg.h
 *
 * @brief Mpeg video.
 */
#ifndef MPEG_H
#define MPEG_H

#include "common.h"
#include <oid.h>
#include <bas.h>

class CMpeg
{
public:
    OID oid_1;
    OID oid_2;
    // todo

    void ExecuteOids();
    void Execute(OID *poid);
    void Start(CBinaryAsyncStream *pbas);
    void Update();
    void Finish();
    void CbDemuxed(int nParam);
};

void StartupMpeg();

extern CMpeg g_mpeg;

void FUN_0018f0e8(CMpeg *pmpeg, void *pv) __asm__("FUN_0018f0e8");

#endif // MPEG_H
