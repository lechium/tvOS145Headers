/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamTransport.h>

@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue, OS_tcp_connection;
@class NSObject, HMFNetAddress, HMDDataStreamFrameReader, NSString;

@interface HMDDataStreamTCPTransport : NSObject <HMFLogging, HMDDataStreamTransport> {

	BOOL _connected;
	long long _remotePort;
	id<HMDDataStreamTransportDelegate> delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFNetAddress* _remoteAddress;
	NSObject*<OS_tcp_connection> _tcpConnection;
	HMDDataStreamFrameReader* _byteReader;
	NSString* _logIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * remoteAddress;                                 //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_tcp_connection> tcpConnection;                      //@synthesize tcpConnection=_tcpConnection - In the implementation block
@property (nonatomic,readonly) HMDDataStreamFrameReader * byteReader;                         //@synthesize byteReader=_byteReader - In the implementation block
@property (nonatomic,readonly) NSString * logIdentifier;                                      //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HMDDataStreamTransportDelegate> delegate; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDDataStreamTransportDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<HMDDataStreamTransportDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFNetAddress *)remoteAddress;
-(void)_start;
-(void)connect;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(void)_stop;
-(NSString *)logIdentifier;
-(NSObject*<OS_tcp_connection>)tcpConnection;
-(void)setTcpConnection:(NSObject*<OS_tcp_connection>)arg1 ;
-(id)initWithAddress:(id)arg1 port:(long long)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 ;
-(void)sendRawFrame:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMDDataStreamFrameReader *)byteReader;
-(void)_doReceive;
-(void)_consumeReceivedData:(id)arg1 ;
@end

