/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreTCPECNInterfaceStatsReport : PBCodable <NSCopying> {

	unsigned long long _interfaceType;
	unsigned long long _ipProtocol;
	unsigned long long _tcpECNIntClientSetup;
	unsigned long long _tcpECNIntClientSuccess;
	unsigned long long _tcpECNIntConnNoPLCE;
	unsigned long long _tcpECNIntConnPLCE;
	unsigned long long _tcpECNIntConnPLNoCE;
	unsigned long long _tcpECNIntConnRecvCE;
	unsigned long long _tcpECNIntConnRecvECE;
	unsigned long long _tcpECNIntFallbackCE;
	unsigned long long _tcpECNIntFallbackDropRst;
	unsigned long long _tcpECNIntFallbackDropRxmt;
	unsigned long long _tcpECNIntFallbackReorder;
	unsigned long long _tcpECNIntFallbackSYNRst;
	unsigned long long _tcpECNIntFallbackSynLoss;
	unsigned long long _tcpECNIntNotSupportedPeer;
	unsigned long long _tcpECNIntOffAvgRTT;
	unsigned long long _tcpECNIntOffDropRst;
	unsigned long long _tcpECNIntOffDropRxmt;
	unsigned long long _tcpECNIntOffOOBPer;
	unsigned long long _tcpECNIntOffRTTVar;
	unsigned long long _tcpECNIntOffReorderPer;
	unsigned long long _tcpECNIntOffRxmtPer;
	unsigned long long _tcpECNIntOffSACKE;
	unsigned long long _tcpECNIntOffTotalOOPkts;
	unsigned long long _tcpECNIntOffTotalRxPkts;
	unsigned long long _tcpECNIntOffTotalRxmtPkts;
	unsigned long long _tcpECNIntOffTotalTxPkts;
	unsigned long long _tcpECNIntOnAvgRTT;
	unsigned long long _tcpECNIntOnDropRst;
	unsigned long long _tcpECNIntOnDropRxmt;
	unsigned long long _tcpECNIntOnOOBPer;
	unsigned long long _tcpECNIntOnRTTVar;
	unsigned long long _tcpECNIntOnReorderPer;
	unsigned long long _tcpECNIntOnSACKE;
	unsigned long long _tcpECNIntOnTotalOOPkts;
	unsigned long long _tcpECNIntOnTotalRxPkts;
	unsigned long long _tcpECNIntOnTotalRxmtPkts;
	unsigned long long _tcpECNIntOnTotalTxPkts;
	unsigned long long _tcpECNIntRecvCE;
	unsigned long long _tcpECNIntRecvECE;
	unsigned long long _tcpECNIntRxmtPer;
	unsigned long long _tcpECNIntSentECE;
	unsigned long long _tcpECNIntServerSetup;
	unsigned long long _tcpECNIntServerSuccess;
	unsigned long long _tcpECNIntSynAckLost;
	unsigned long long _tcpECNIntSynLost;
	unsigned long long _tcpECNIntTotalConnections;
	unsigned long long _tcpUnsentDataAtSleepCnt;
	SCD_Struct_AW27 _has;

}

@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) unsigned long long interfaceType;                          //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasIpProtocol; 
@property (assign,nonatomic) unsigned long long ipProtocol;                             //@synthesize ipProtocol=_ipProtocol - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntClientSetup; 
@property (assign,nonatomic) unsigned long long tcpECNIntClientSetup;                   //@synthesize tcpECNIntClientSetup=_tcpECNIntClientSetup - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntServerSetup; 
@property (assign,nonatomic) unsigned long long tcpECNIntServerSetup;                   //@synthesize tcpECNIntServerSetup=_tcpECNIntServerSetup - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntClientSuccess; 
@property (assign,nonatomic) unsigned long long tcpECNIntClientSuccess;                 //@synthesize tcpECNIntClientSuccess=_tcpECNIntClientSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntServerSuccess; 
@property (assign,nonatomic) unsigned long long tcpECNIntServerSuccess;                 //@synthesize tcpECNIntServerSuccess=_tcpECNIntServerSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntNotSupportedPeer; 
@property (assign,nonatomic) unsigned long long tcpECNIntNotSupportedPeer;              //@synthesize tcpECNIntNotSupportedPeer=_tcpECNIntNotSupportedPeer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntSynLost; 
@property (assign,nonatomic) unsigned long long tcpECNIntSynLost;                       //@synthesize tcpECNIntSynLost=_tcpECNIntSynLost - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntSynAckLost; 
@property (assign,nonatomic) unsigned long long tcpECNIntSynAckLost;                    //@synthesize tcpECNIntSynAckLost=_tcpECNIntSynAckLost - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntRecvCE; 
@property (assign,nonatomic) unsigned long long tcpECNIntRecvCE;                        //@synthesize tcpECNIntRecvCE=_tcpECNIntRecvCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntRecvECE; 
@property (assign,nonatomic) unsigned long long tcpECNIntRecvECE;                       //@synthesize tcpECNIntRecvECE=_tcpECNIntRecvECE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntSentECE; 
@property (assign,nonatomic) unsigned long long tcpECNIntSentECE;                       //@synthesize tcpECNIntSentECE=_tcpECNIntSentECE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntConnRecvCE; 
@property (assign,nonatomic) unsigned long long tcpECNIntConnRecvCE;                    //@synthesize tcpECNIntConnRecvCE=_tcpECNIntConnRecvCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntConnRecvECE; 
@property (assign,nonatomic) unsigned long long tcpECNIntConnRecvECE;                   //@synthesize tcpECNIntConnRecvECE=_tcpECNIntConnRecvECE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntConnPLNoCE; 
@property (assign,nonatomic) unsigned long long tcpECNIntConnPLNoCE;                    //@synthesize tcpECNIntConnPLNoCE=_tcpECNIntConnPLNoCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntConnPLCE; 
@property (assign,nonatomic) unsigned long long tcpECNIntConnPLCE;                      //@synthesize tcpECNIntConnPLCE=_tcpECNIntConnPLCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntConnNoPLCE; 
@property (assign,nonatomic) unsigned long long tcpECNIntConnNoPLCE;                    //@synthesize tcpECNIntConnNoPLCE=_tcpECNIntConnNoPLCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntFallbackSynLoss; 
@property (assign,nonatomic) unsigned long long tcpECNIntFallbackSynLoss;               //@synthesize tcpECNIntFallbackSynLoss=_tcpECNIntFallbackSynLoss - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntFallbackReorder; 
@property (assign,nonatomic) unsigned long long tcpECNIntFallbackReorder;               //@synthesize tcpECNIntFallbackReorder=_tcpECNIntFallbackReorder - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntFallbackCE; 
@property (assign,nonatomic) unsigned long long tcpECNIntFallbackCE;                    //@synthesize tcpECNIntFallbackCE=_tcpECNIntFallbackCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnAvgRTT; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnAvgRTT;                      //@synthesize tcpECNIntOnAvgRTT=_tcpECNIntOnAvgRTT - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnRTTVar; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnRTTVar;                      //@synthesize tcpECNIntOnRTTVar=_tcpECNIntOnRTTVar - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnOOBPer; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnOOBPer;                      //@synthesize tcpECNIntOnOOBPer=_tcpECNIntOnOOBPer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnSACKE; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnSACKE;                       //@synthesize tcpECNIntOnSACKE=_tcpECNIntOnSACKE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnReorderPer; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnReorderPer;                  //@synthesize tcpECNIntOnReorderPer=_tcpECNIntOnReorderPer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntRxmtPer; 
@property (assign,nonatomic) unsigned long long tcpECNIntRxmtPer;                       //@synthesize tcpECNIntRxmtPer=_tcpECNIntRxmtPer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffAvgRTT; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffAvgRTT;                     //@synthesize tcpECNIntOffAvgRTT=_tcpECNIntOffAvgRTT - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffRTTVar; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffRTTVar;                     //@synthesize tcpECNIntOffRTTVar=_tcpECNIntOffRTTVar - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffOOBPer; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffOOBPer;                     //@synthesize tcpECNIntOffOOBPer=_tcpECNIntOffOOBPer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffSACKE; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffSACKE;                      //@synthesize tcpECNIntOffSACKE=_tcpECNIntOffSACKE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffReorderPer; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffReorderPer;                 //@synthesize tcpECNIntOffReorderPer=_tcpECNIntOffReorderPer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffRxmtPer; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffRxmtPer;                    //@synthesize tcpECNIntOffRxmtPer=_tcpECNIntOffRxmtPer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnTotalTxPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnTotalTxPkts;                 //@synthesize tcpECNIntOnTotalTxPkts=_tcpECNIntOnTotalTxPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnTotalRxmtPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnTotalRxmtPkts;               //@synthesize tcpECNIntOnTotalRxmtPkts=_tcpECNIntOnTotalRxmtPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnTotalRxPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnTotalRxPkts;                 //@synthesize tcpECNIntOnTotalRxPkts=_tcpECNIntOnTotalRxPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnTotalOOPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnTotalOOPkts;                 //@synthesize tcpECNIntOnTotalOOPkts=_tcpECNIntOnTotalOOPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnDropRst; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnDropRst;                     //@synthesize tcpECNIntOnDropRst=_tcpECNIntOnDropRst - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOnDropRxmt; 
@property (assign,nonatomic) unsigned long long tcpECNIntOnDropRxmt;                    //@synthesize tcpECNIntOnDropRxmt=_tcpECNIntOnDropRxmt - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffTotalTxPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffTotalTxPkts;                //@synthesize tcpECNIntOffTotalTxPkts=_tcpECNIntOffTotalTxPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffTotalRxmtPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffTotalRxmtPkts;              //@synthesize tcpECNIntOffTotalRxmtPkts=_tcpECNIntOffTotalRxmtPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffTotalRxPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffTotalRxPkts;                //@synthesize tcpECNIntOffTotalRxPkts=_tcpECNIntOffTotalRxPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffTotalOOPkts; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffTotalOOPkts;                //@synthesize tcpECNIntOffTotalOOPkts=_tcpECNIntOffTotalOOPkts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffDropRst; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffDropRst;                    //@synthesize tcpECNIntOffDropRst=_tcpECNIntOffDropRst - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntOffDropRxmt; 
@property (assign,nonatomic) unsigned long long tcpECNIntOffDropRxmt;                   //@synthesize tcpECNIntOffDropRxmt=_tcpECNIntOffDropRxmt - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntTotalConnections; 
@property (assign,nonatomic) unsigned long long tcpECNIntTotalConnections;              //@synthesize tcpECNIntTotalConnections=_tcpECNIntTotalConnections - In the implementation block
@property (assign,nonatomic) BOOL hasTcpUnsentDataAtSleepCnt; 
@property (assign,nonatomic) unsigned long long tcpUnsentDataAtSleepCnt;                //@synthesize tcpUnsentDataAtSleepCnt=_tcpUnsentDataAtSleepCnt - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntFallbackDropRst; 
@property (assign,nonatomic) unsigned long long tcpECNIntFallbackDropRst;               //@synthesize tcpECNIntFallbackDropRst=_tcpECNIntFallbackDropRst - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntFallbackDropRxmt; 
@property (assign,nonatomic) unsigned long long tcpECNIntFallbackDropRxmt;              //@synthesize tcpECNIntFallbackDropRxmt=_tcpECNIntFallbackDropRxmt - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNIntFallbackSYNRst; 
@property (assign,nonatomic) unsigned long long tcpECNIntFallbackSYNRst;                //@synthesize tcpECNIntFallbackSYNRst=_tcpECNIntFallbackSYNRst - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInterfaceType:(unsigned long long)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(unsigned long long)interfaceType;
-(void)setIpProtocol:(unsigned long long)arg1 ;
-(void)setHasIpProtocol:(BOOL)arg1 ;
-(BOOL)hasIpProtocol;
-(void)setTcpECNIntClientSetup:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntClientSetup:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntClientSetup;
-(void)setTcpECNIntServerSetup:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntServerSetup:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntServerSetup;
-(void)setTcpECNIntClientSuccess:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntClientSuccess:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntClientSuccess;
-(void)setTcpECNIntServerSuccess:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntServerSuccess:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntServerSuccess;
-(void)setTcpECNIntNotSupportedPeer:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntNotSupportedPeer:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntNotSupportedPeer;
-(void)setTcpECNIntSynLost:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntSynLost:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntSynLost;
-(void)setTcpECNIntSynAckLost:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntSynAckLost:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntSynAckLost;
-(void)setTcpECNIntRecvCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntRecvCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntRecvCE;
-(void)setTcpECNIntRecvECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntRecvECE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntRecvECE;
-(void)setTcpECNIntSentECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntSentECE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntSentECE;
-(void)setTcpECNIntConnRecvCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntConnRecvCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntConnRecvCE;
-(void)setTcpECNIntConnRecvECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntConnRecvECE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntConnRecvECE;
-(void)setTcpECNIntConnPLNoCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntConnPLNoCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntConnPLNoCE;
-(void)setTcpECNIntConnPLCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntConnPLCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntConnPLCE;
-(void)setTcpECNIntConnNoPLCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntConnNoPLCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntConnNoPLCE;
-(void)setTcpECNIntFallbackSynLoss:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntFallbackSynLoss:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntFallbackSynLoss;
-(void)setTcpECNIntFallbackReorder:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntFallbackReorder:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntFallbackReorder;
-(void)setTcpECNIntFallbackCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntFallbackCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntFallbackCE;
-(void)setTcpECNIntOnAvgRTT:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnAvgRTT:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnAvgRTT;
-(void)setTcpECNIntOnRTTVar:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnRTTVar:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnRTTVar;
-(void)setTcpECNIntOnOOBPer:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnOOBPer:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnOOBPer;
-(void)setTcpECNIntOnSACKE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnSACKE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnSACKE;
-(void)setTcpECNIntOnReorderPer:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnReorderPer:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnReorderPer;
-(void)setTcpECNIntRxmtPer:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntRxmtPer:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntRxmtPer;
-(void)setTcpECNIntOffAvgRTT:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffAvgRTT:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffAvgRTT;
-(void)setTcpECNIntOffRTTVar:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffRTTVar:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffRTTVar;
-(void)setTcpECNIntOffOOBPer:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffOOBPer:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffOOBPer;
-(void)setTcpECNIntOffSACKE:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffSACKE:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffSACKE;
-(void)setTcpECNIntOffReorderPer:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffReorderPer:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffReorderPer;
-(void)setTcpECNIntOffRxmtPer:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffRxmtPer:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffRxmtPer;
-(void)setTcpECNIntOnTotalTxPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnTotalTxPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnTotalTxPkts;
-(void)setTcpECNIntOnTotalRxmtPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnTotalRxmtPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnTotalRxmtPkts;
-(void)setTcpECNIntOnTotalRxPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnTotalRxPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnTotalRxPkts;
-(void)setTcpECNIntOnTotalOOPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnTotalOOPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnTotalOOPkts;
-(void)setTcpECNIntOnDropRst:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnDropRst:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnDropRst;
-(void)setTcpECNIntOnDropRxmt:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOnDropRxmt:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOnDropRxmt;
-(void)setTcpECNIntOffTotalTxPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffTotalTxPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffTotalTxPkts;
-(void)setTcpECNIntOffTotalRxmtPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffTotalRxmtPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffTotalRxmtPkts;
-(void)setTcpECNIntOffTotalRxPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffTotalRxPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffTotalRxPkts;
-(void)setTcpECNIntOffTotalOOPkts:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffTotalOOPkts:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffTotalOOPkts;
-(void)setTcpECNIntOffDropRst:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffDropRst:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffDropRst;
-(void)setTcpECNIntOffDropRxmt:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntOffDropRxmt:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntOffDropRxmt;
-(void)setTcpECNIntTotalConnections:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntTotalConnections:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntTotalConnections;
-(void)setTcpUnsentDataAtSleepCnt:(unsigned long long)arg1 ;
-(void)setHasTcpUnsentDataAtSleepCnt:(BOOL)arg1 ;
-(BOOL)hasTcpUnsentDataAtSleepCnt;
-(void)setTcpECNIntFallbackDropRst:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntFallbackDropRst:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntFallbackDropRst;
-(void)setTcpECNIntFallbackDropRxmt:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntFallbackDropRxmt:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntFallbackDropRxmt;
-(void)setTcpECNIntFallbackSYNRst:(unsigned long long)arg1 ;
-(void)setHasTcpECNIntFallbackSYNRst:(BOOL)arg1 ;
-(BOOL)hasTcpECNIntFallbackSYNRst;
-(unsigned long long)ipProtocol;
-(unsigned long long)tcpECNIntClientSetup;
-(unsigned long long)tcpECNIntServerSetup;
-(unsigned long long)tcpECNIntClientSuccess;
-(unsigned long long)tcpECNIntServerSuccess;
-(unsigned long long)tcpECNIntNotSupportedPeer;
-(unsigned long long)tcpECNIntSynLost;
-(unsigned long long)tcpECNIntSynAckLost;
-(unsigned long long)tcpECNIntRecvCE;
-(unsigned long long)tcpECNIntRecvECE;
-(unsigned long long)tcpECNIntSentECE;
-(unsigned long long)tcpECNIntConnRecvCE;
-(unsigned long long)tcpECNIntConnRecvECE;
-(unsigned long long)tcpECNIntConnPLNoCE;
-(unsigned long long)tcpECNIntConnPLCE;
-(unsigned long long)tcpECNIntConnNoPLCE;
-(unsigned long long)tcpECNIntFallbackSynLoss;
-(unsigned long long)tcpECNIntFallbackReorder;
-(unsigned long long)tcpECNIntFallbackCE;
-(unsigned long long)tcpECNIntOnAvgRTT;
-(unsigned long long)tcpECNIntOnRTTVar;
-(unsigned long long)tcpECNIntOnOOBPer;
-(unsigned long long)tcpECNIntOnSACKE;
-(unsigned long long)tcpECNIntOnReorderPer;
-(unsigned long long)tcpECNIntRxmtPer;
-(unsigned long long)tcpECNIntOffAvgRTT;
-(unsigned long long)tcpECNIntOffRTTVar;
-(unsigned long long)tcpECNIntOffOOBPer;
-(unsigned long long)tcpECNIntOffSACKE;
-(unsigned long long)tcpECNIntOffReorderPer;
-(unsigned long long)tcpECNIntOffRxmtPer;
-(unsigned long long)tcpECNIntOnTotalTxPkts;
-(unsigned long long)tcpECNIntOnTotalRxmtPkts;
-(unsigned long long)tcpECNIntOnTotalRxPkts;
-(unsigned long long)tcpECNIntOnTotalOOPkts;
-(unsigned long long)tcpECNIntOnDropRst;
-(unsigned long long)tcpECNIntOnDropRxmt;
-(unsigned long long)tcpECNIntOffTotalTxPkts;
-(unsigned long long)tcpECNIntOffTotalRxmtPkts;
-(unsigned long long)tcpECNIntOffTotalRxPkts;
-(unsigned long long)tcpECNIntOffTotalOOPkts;
-(unsigned long long)tcpECNIntOffDropRst;
-(unsigned long long)tcpECNIntOffDropRxmt;
-(unsigned long long)tcpECNIntTotalConnections;
-(unsigned long long)tcpUnsentDataAtSleepCnt;
-(unsigned long long)tcpECNIntFallbackDropRst;
-(unsigned long long)tcpECNIntFallbackDropRxmt;
-(unsigned long long)tcpECNIntFallbackSYNRst;
@end

