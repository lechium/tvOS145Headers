/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@class IDSDatagramChannel, NSString, NSArray, IDSDataChannelLinkContext;

@interface VCDatagramChannelIDS : VCObject {

	unsigned _token;
	IDSDatagramChannel* _idsChannel;
	NSString* _destination;
	int _driverSocket;
	/*^block*/id _eventHandler;

}

@property (readonly) NSArray * connectedLinks; 
@property (readonly) IDSDataChannelLinkContext * defaultLink; 
@property (readonly) unsigned token;                                       //@synthesize token=_token - In the implementation block
@property (readonly) NSString * destination;                               //@synthesize destination=_destination - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(int)start;
-(unsigned)token;
-(NSString *)destination;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)osChannelInfoLog;
-(void)setChannelPreferences:(id)arg1 ;
-(NSArray *)connectedLinks;
-(IDSDataChannelLinkContext *)defaultLink;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_VC80*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC80)arg3 options:(SCD_Struct_VC82*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)readyToRead;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)startMKMRecoveryForParticipantIDs:(id)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(id)sharedIDSService;
-(id)initWithSocketDescriptor:(int)arg1 token:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithDestination:(id)arg1 token:(unsigned)arg2 error:(id*)arg3 ;
-(id)datagramChannelWithDestination:(id)arg1 error:(id*)arg2 ;
-(int)setupDriverSocket;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(void)optInStreamIDs:(id)arg1 ;
-(void)optOutStreamIDs:(id)arg1 ;
@end

