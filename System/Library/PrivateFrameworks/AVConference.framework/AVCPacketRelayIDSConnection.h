/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVCPacketRelayConnectionProtocol.h>

@class IDSDatagramChannel, IDSService, AVCPacketFilter;

@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol> {

	unsigned char _type;
	/*^block*/id _readHandler;
	BOOL _isDemuxNeeded;
	BOOL _isResumed;
	IDSDatagramChannel* _datagramChannel;
	IDSService* _packetRelayService;
	AVCPacketFilter* _packetFilter;

}

@property (assign) BOOL isResumed;                              //@synthesize isResumed=_isResumed - In the implementation block
@property (readonly) unsigned char type;                        //@synthesize type=_type - In the implementation block
@property (assign) BOOL isDemuxNeeded;                          //@synthesize isDemuxNeeded=_isDemuxNeeded - In the implementation block
@property (copy) id readHandler;                                //@synthesize readHandler=_readHandler - In the implementation block
@property (retain) AVCPacketFilter * packetFilter;              //@synthesize packetFilter=_packetFilter - In the implementation block
-(void)dealloc;
-(unsigned char)type;
-(int)start;
-(int)stop;
-(BOOL)isResumed;
-(void)setIsResumed:(BOOL)arg1 ;
-(void)setReadHandler:(id)arg1 ;
-(void)readyToRead;
-(id)readHandler;
-(void)setPacketFilter:(AVCPacketFilter *)arg1 ;
-(BOOL)sendData:(const void*)arg1 size:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)isDemuxNeeded;
-(void)setIsDemuxNeeded:(BOOL)arg1 ;
-(AVCPacketFilter *)packetFilter;
-(id)initWithIDSSocketDescriptor:(unsigned short)arg1 ;
-(id)initWithIDSDestination:(id)arg1 ;
@end

