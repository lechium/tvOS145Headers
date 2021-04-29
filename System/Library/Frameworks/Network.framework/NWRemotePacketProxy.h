/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NWRemotePacketProxyDelegate;
#import <Network/Network-Structs.h>
@class NSObject, NSMutableArray;

@interface NWRemotePacketProxy : NSObject {

	unsigned _receiveWindowPacketCount;
	NSObject*<NWRemotePacketProxyDelegate> _delegate;
	NSMutableArray* _writeRequests;
	nw_protocol* _packetProtocol;
	nw_protocol* _defaultOutputHandler;
	nw_hash_tableRef _packetHashTable;

}

@property (__weak) NSObject*<NWRemotePacketProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * writeRequests;                               //@synthesize writeRequests=_writeRequests - In the implementation block
@property (assign) nw_protocol* packetProtocol;                                  //@synthesize packetProtocol=_packetProtocol - In the implementation block
@property (assign) nw_protocol* defaultOutputHandler;                            //@synthesize defaultOutputHandler=_defaultOutputHandler - In the implementation block
@property (assign) nw_hash_tableRef packetHashTable;                             //@synthesize packetHashTable=_packetHashTable - In the implementation block
@property (nonatomic,readonly) nw_protocol* protocol; 
@property (assign,nonatomic) unsigned receiveWindowPacketCount;                  //@synthesize receiveWindowPacketCount=_receiveWindowPacketCount - In the implementation block
-(void)dealloc;
-(NSObject*<NWRemotePacketProxyDelegate>)delegate;
-(void)setDelegate:(NSObject*<NWRemotePacketProxyDelegate>)arg1 ;
-(nw_protocol*)protocol;
-(id)initWithDelegate:(id)arg1 ;
-(void)setDefaultOutputProtocolHandler:(nw_protocol*)arg1 ;
-(void)setOutputProtocolHandler:(nw_protocol*)arg1 local:(id)arg2 remote:(id)arg3 ipProtocol:(unsigned char)arg4 ;
-(NSMutableArray *)writeRequests;
-(void)setReceiveWindowPacketCount:(unsigned)arg1 ;
-(nw_protocol*)outputHandlerForPacket:(id)arg1 inbound:(BOOL)arg2 ;
-(BOOL)receiveRemotePacket:(id)arg1 ;
-(unsigned)receiveWindowPacketCount;
-(void)setWriteRequests:(NSMutableArray *)arg1 ;
-(nw_protocol*)packetProtocol;
-(void)setPacketProtocol:(nw_protocol*)arg1 ;
-(nw_protocol*)defaultOutputHandler;
-(void)setDefaultOutputHandler:(nw_protocol*)arg1 ;
-(nw_hash_tableRef)packetHashTable;
-(void)setPacketHashTable:(nw_hash_tableRef)arg1 ;
@end

