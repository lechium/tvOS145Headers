/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NENexus.h>

@class NWRemotePacketProxy;

@interface NEInternetNexus : NENexus {

	nw_protocol* _utunProtocol;
	NWRemotePacketProxy* _packetProxy;

}

@property (assign) nw_protocol* utunProtocol;                               //@synthesize utunProtocol=_utunProtocol - In the implementation block
@property (retain) NWRemotePacketProxy * packetProxy;                       //@synthesize packetProxy=_packetProxy - In the implementation block
@property (readonly) NEVirtualInterface_sRef virtualInterface; 
-(void)dealloc;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(void)connectNewFlow:(id)arg1 ;
-(void)disconnectFlow:(id)arg1 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(BOOL)arg3 ;
-(nw_protocol*)utunProtocol;
-(void)setUtunProtocol:(nw_protocol*)arg1 ;
-(void)setPacketProxy:(NWRemotePacketProxy *)arg1 ;
-(BOOL)setDefaultInputHandler:(nw_protocol*)arg1 ;
-(NWRemotePacketProxy *)packetProxy;
-(void)setRemotePacketProxy:(id)arg1 ;
-(BOOL)setUseFlowswitch:(BOOL)arg1 ;
@end
